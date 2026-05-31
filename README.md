# Nintendo DS White Screen Homebrew

This is a simple Nintendo DS homebrew application that turns the top screen completely white and adjusts it for maximum brightness. It can be used as a simple screen test tool or a flashlight helper.

## Requirements

To build the project from source, you will need:
- **devkitPro (devkitARM)**: Follow the installation guide at [devkitPro wiki](https://devkitpro.org/wiki/Getting_Started) and make sure the "Nintendo DS development" package is installed.

## Build Instructions

Open your terminal in the project directory and run:

```bash
make
```

This will generate `nds_white_screen.nds` in the root folder.

## How to Run

- **Emulator**: Run the `.nds` file on DS emulators like melonDS or DeSmuME.
- **Real Hardware**: Copy `nds_white_screen.nds` to your DS flashcard (e.g. R4) and run it on a real console. Use the console's physical brightness settings (Select + brightness button on DS Lite) to set the backlight to maximum.
