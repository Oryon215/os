#ifndef SCREEN_H_INCLUDED
#define SCREEN_H_INCLUDED

void clear_screen ();
void print_string (const char * message);
void set_char_at_video_memory(char character, int offset);
void print_nl();
#endif // SCREEN_H_INCLUDED
