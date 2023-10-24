#define VIDEO_MEMORY 0xB8000
#define COLUMNS 80
#define ROWS 25
#include "screen.h"
#include <stdint.h>

void main() {
    clear_screen();
    const char* arr = "a2";
    set_char_at_video_memory(arr[0], 0);
}


