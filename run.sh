#!/usr/bin/env bash
set -euo pipefail

# Run from project root
cd "$(dirname "$0")"

mkdir -p build
cd build

# Auto-detect qmake/qmake6 or allow override via QMAKE_BIN
QMAKE_BIN="${QMAKE_BIN:-}"
if [ -z "$QMAKE_BIN" ]; then
  if command -v qmake >/dev/null 2>&1; then
    QMAKE_BIN=qmake
  elif command -v qmake6 >/dev/null 2>&1; then
    QMAKE_BIN=qmake6
  else
    echo "qmake/qmake6 not found. Install Qt dev tools or set QMAKE_BIN." >&2
    exit 127
  fi
fi

"$QMAKE_BIN" ../Zorkers.pro

# Determine CPU count (Linux/macOS)
if command -v nproc >/dev/null 2>&1; then
  JOBS="$(nproc)"
else
  JOBS="$(sysctl -n hw.ncpu 2>/dev/null || echo 2)"
fi

make -j"$JOBS" || make

# Try common output locations
if [ -x ./Zorkers ]; then
  ./Zorkers
elif [ -x ./debug/Zorkers ]; then
  ./debug/Zorkers
elif [ -x ./release/Zorkers ]; then
  ./release/Zorkers
else
  echo "Executable not found. Check build output." >&2
  exit 1
fi