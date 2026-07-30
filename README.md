# Nintendo DS White Screen Homebrew

This simple Nintendo DS homebrew application turns both screens completely white and adjusts brightness to maximum. It can be used as a screen test tool or as a flashlight helper.

## Requirements

To build the project from source, you will need:
- **devkitPro (devkitARM)**: Follow the installation guide at [devkitPro wiki](https://devkitpro.org/wiki/Getting_Started) and make sure the "Nintendo DS development" package is installed.

## Build Instructions

Open a terminal in the project directory and run:

```bash
make
```

This will generate `nds_white_screen.nds` in the root folder.

## How to Run

- **Emulator**: Run the `.nds` file on DS emulators like melonDS or DeSmuME.
- **Real Hardware**: Copy `nds_white_screen.nds` to your DS flashcard (for example, DSpico) and run it on real hardware. Use the console's physical brightness controls to set the backlight to maximum.
