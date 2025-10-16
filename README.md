# FinalZork

My first Chris++ project I made all the way back in first year of ISE, a rendition of Zork inspired by my favourite visual novel/game, [The House in Fata Morgana](https://en.wikipedia.org/wiki/The_House_in_Fata_Morgana). Slightly touched up(readme, run files) so it could at LEAST run but left unrefactored. I might fork this repo to A. refactor(some bad code smells) B. Fix overall UI/UX but I would like to leave the core of FinalZork untouched. 

## Getting Started

1. Install Qt (Qt 6 or Qt 5 with Widgets) and Qt Creator.
2. Open `Zorkers.pro` in Qt Creator.
3. Configure a Desktop kit and build (Debug or Release).
4. Run. The app will locate images relative to the executable or project directory.

## Getting Started (CLI)

```
qmake Zorkers.pro
make -j
./Zorkers
```

If running from the build directory, the app will search for image assets in the executable directory, parent directories, and the project root.

## Project structure

```
FinalZork/
  include/   # C++ headers (.h)
  src/       # C++ sources (.cpp)
  ui/        # Qt Designer forms (.ui)
  assets/    # Images used by the app
  build/     # Out-of-tree build (ignored)
  Zorkers.pro
  run.sh     # Linux/macOS build and run
  run.bat    # Windows build and run
```

## Run with scripts

- Linux/macOS:
  - `chmod +x run.sh`
  - `./run.sh`
- Windows (Qt command prompt):
  - `run.bat`
  - * I am on Linux!!! So idk if windows script works and am not bothered to boot.

## License

MIT
