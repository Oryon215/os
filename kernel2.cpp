#define VIDEO_MEMORY 0xB8000
#define COLUMNS 80
#define ROWS 25
#include "screen.h"
#include <stdint.h>

const char scancodes[] = {'\0','%','1','2','3','4','5','6','7','8','9','0',
'-','=','~','\t','Q','W','E','R','T','Y','U','I','O','P','[',']','\e','\0','A', 'S','D',
'F','G','H','J','K','L',';','\0','`',
'\0','\\','Z','X','C','V','B','N','M',',','.',
'/','\0','\0','\0','\0','\0','\0','\0','\0','\0','\0','\0','\0',
'\0','\0','\0','\0','\0','\0','\0','\0','-','\0','\0','\0','+','\0','\0','\0','\0','~',};

void print_keyboard(int code)
{
    set_char_at_video_memory(scancodes[code], 0);
}

void main() {
    clear_screen();
    const char *c = "hello";
    set_char_at_video_memory(c[0],0);

}



