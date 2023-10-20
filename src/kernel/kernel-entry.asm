[bits 32]
[extern main]

global _start     ; Add this line to define _start as the entry point

_start:
    call main
    jmp $