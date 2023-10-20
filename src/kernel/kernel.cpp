#define VIDEO_MEMORY 0xB8000
#define COLUMNS 80
#define ROWS 25
#include "screen.h"
#include <stdint.h>
int strlen(const char* s)
{
    int length = 0;
    int index = 0;

    while(s[index] != '\0')
    {
        index += 1;
    }
    return index;
}

const char scancodes[] = {'\0','%','1','2','3','4','5','6','7','8','9','0',
'-','=','~','\t','Q','W','E','R','T','Y','U','I','O','P','[',']','\e','\0','A', 'S','D',
'F','G','H','J','K','L',';','\0','`',
'\0','\\','Z','X','C','V','B','N','M',',','.',
'/','\0','\0','\0','\0','\0','\0','\0','\0','\0','\0','\0','\0',
'\0','\0','\0','\0','\0','\0','\0','\0','-','\0','\0','\0','+','\0','\0','\0','\0','~',};
const char *c2 = "hello";

void print_keyboard(int code)
{
    set_char_at_video_memory(scancodes[code], 0);
}

void main() {
    clear_screen();
    const char s[] = "h";
    print_string(s);
    int length = strlen(s);
    if (length == 1)
    {
        set_char_at_video_memory(scancodes[0], 0);
    }

}


