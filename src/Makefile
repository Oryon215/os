KERNEL_FILES = ./kernel
BOOT_FILES = ./boot

# First rule is the one executed when no parameters are fed to the Makefile
all: os-image.bin

# Define a list of source files and corresponding object files
KERNEL_SRCS := $(wildcard $(KERNEL_FILES)/*.cpp)

kernel.bin: kernel-entry.o kernel.o lowlevel.o screen.o 
	ld -m elf_i386 -o $@ -T linker.ld $^ --format binary -nostdlib

# Rule to build object files from corresponding source files
%.o: $(KERNEL_FILES)/%.cpp
	g++ -m32 -g -ffreestanding -fno-pie -c -o $@ $<

kernel-entry.o: $(KERNEL_FILES)/kernel-entry.asm
	nasm $< -g -f elf32 -o $@

mbr.bin: $(BOOT_FILES)/mbr.asm
	nasm $< -g -f elf32 -o $@

os-image.bin: mbr.bin kernel.bin
	cat $^ > $@

qemu: os-image.bin
	qemu-system-i386 -fda $<

clean:
	rm -f *.bin *.o *.dis *.elf
