# FinalZork

A small Qt Widgets C++ project inspired by classic text adventures, featuring room navigation, item collection, and a short ending quiz. This is intentionally kept close to a "first C++ project" while being easy to clone and run.

## Screenshots

Images are included in the repo (`1.png`..`12.png`, `map.jpg`, `item.png`, `ending.png`, `final.png`, `Painting1..4.png`).

## Getting Started (Qt Creator / qmake)

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

Both scripts create `build/`, invoke qmake and make, then run the executable. The app resolves images from `assets/` automatically.

## Notes

- This repo uses qmake to keep setup simple for cloning and running.
- Minimal polish applied: relative asset loading, small safety fixes, and typo cleanup.

## License

MIT