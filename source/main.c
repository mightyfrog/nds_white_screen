#include <nds.h>
int main(void) {
    // 1. Map engines to LCD Framebuffers
    // Main engine (Top screen) -> Framebuffer mode 0
    videoSetMode(MODE_FB0);
    // Sub engine (Bottom screen) -> Framebuffer mode 0
    videoSetModeSub(MODE_FB0);
    
    // 2. Map VRAM Banks to screens
    // VRAM A -> Top screen (Main engine LCD)
    vramSetBankA(VRAM_A_LCD);
    // VRAM C -> Bottom screen (Sub engine LCD)
    vramSetBankC(VRAM_C_LCD);
    
    // 3. Fill the top screen (VRAM A) with white pixels.
    // Screen resolution is 256x192. Colors are 15-bit BGR (RGB15).
    // White color: RGB15(31, 31, 31) which evaluates to 0x7FFF.
    u16* top_framebuffer = (u16*)VRAM_A;
    for (int i = 0; i < 256 * 192; i++) {
        top_framebuffer[i] = RGB15(31, 31, 31);
    }
    
    // 4. Fill the bottom screen (VRAM C) with white pixels.
    u16* bottom_framebuffer = (u16*)VRAM_C;
    for (int i = 0; i < 256 * 192; i++) {
        bottom_framebuffer[i] = RGB15(31, 31, 31);
    }
    
    // 5. Set software brightness to normal (0) for both screens (3).
    // This is a safety measure to reset any screen fade-out (dark state) carried over 
    // from the homebrew launcher/bootloader, ensuring the screens display at normal brightness.
    // (-16 = black, 0 = normal/default, 16 = white)
    setBrightness(3, 0);
    // 6. Keep the program running in a loop
    while (1) {
        swiWaitForVBlank();
    }
    return 0;
}
