# $@ = target file
# $< = first dependency
# $^ = all dependencies

# First rule is the one executed when no parameters are fed to the Makefile
all: os-image.bin 

kernel.bin: kernel-entry.o kernel.o screen.o lowlevel.o
	ld -m elf_i386 -o $@ -T linker.ld $^ --format binary -nostdlib

os-image.elf: mbr.elf kernel.elf 
	cat $^ > $@

kernel-entry.o: kernel-entry.asm
	nasm $< -g -f elf32 -o $@

kernel.o: kernel.cpp
	g++ -m32 -g -ffreestanding -fno-pie -c -o $@ $<

screen.o: screen.cpp
	g++ -m32 -g -ffreestanding -fno-pie -c -o $@ $<

lowlevel.o: lowlevel.cpp
	g++ -m32 -g -ffreestanding -fno-pie -c -o $@ $<

mbr.bin: mbr.asm
	nasm $< -g -f bin -o $@


os-image.bin: mbr.bin kernel.bin
	cat $^ > $@


qemu: os-image.bin
	qemu-system-i386 -fda $<

clean:
	$(RM) *.bin *.o *.dis
