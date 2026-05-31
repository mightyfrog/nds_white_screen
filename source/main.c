#include <nds.h>

int main(void) {
    // 1. Map the Main engine to the Top Screen
    // Set video mode to framebuffer mode 0 (displays VRAM_A directly)
    videoSetMode(MODE_FB0);
    
    // 2. Map VRAM Bank A to be used as LCD Framebuffer
    vramSetBankA(VRAM_A_LCD);
    
    // 3. Fill the top screen framebuffer with white pixels.
    // Screen resolution is 256x192. Colors are 15-bit BGR (RGB15).
    // White color: RGB15(31, 31, 31) which evaluates to 0x7FFF.
    u16* framebuffer = (u16*)VRAM_A;
    for (int i = 0; i < 256 * 192; i++) {
        framebuffer[i] = RGB15(31, 31, 31);
    }
    
    // 4. Set software brightness to normal (0) for the main screen (1)
    // -16 = black, 0 = normal (default), 16 = white
    setBrightness(1, 0);

    // 5. Keep the program running in a loop
    while (1) {
        swiWaitForVBlank();
    }

    return 0;
}
