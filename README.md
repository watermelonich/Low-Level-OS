# Low-Level OS Project

## Overview

This project is a low-level operating system (OS) development project. It includes a bootloader, CPU management, drivers, file systems, kernel, memory management, process handling, shell, system calls, and various utilities. The project is organized into multiple directories, each focusing on a specific component of the OS.

## Detailed Directory and File Information

### A_Setup
Scripts and files for setting up the development environment.

- **setup-gcc-arch.sh**: Bash script to set up GCC on Arch Linux.
- **setup-gcc-debian.sh**: Bash script to set up GCC on Debian-based distributions.

### Bootloader
Assembly code for the bootloader.

- **boot.asm**: Initial bootloader code to be executed by the BIOS.
- **disk.asm**: Disk operations for the bootloader.
- **gdt.asm**: Global Descriptor Table setup.
- **memory.asm**: Memory management during boot.
- **print_dec.asm**: Function to print decimal numbers.
- **print_string.asm**: Function to print strings.
- **print_string32.asm**: Function to print strings in 32-bit mode.
- **protected_mode.asm**: Code to switch to protected mode.
- **stage_2.asm**: Second stage of the bootloader.

### CPU
Management of CPU functionalities, including GDT, interrupts, and timer.

#### GDT
- **gdt.c**: C code for setting up the GDT.
- **gdt.h**: Header file for GDT structures and functions.
- **gdt_loader.asm**: Assembly code to load the GDT.

#### Interrupts
- **idt.c**: Initialization of the Interrupt Descriptor Table.
- **idt.h**: Header file for IDT structures and functions.
- **interrupt.asm**: Assembly code for handling interrupts.
- **irq.c**: C code for handling IRQs.
- **irq.h**: Header file for IRQ functions.
- **isr.c**: C code for Interrupt Service Routines.
- **isr.h**: Header file for ISR functions.

#### Timer
- **timer.c**: C code for the system timer.
- **timer.h**: Header file for timer functions.

### Drivers
Drivers for various hardware components.

- **Disk.c**: Disk driver implementation.
- **Disk.h**: Header file for disk driver.
- **Floppy.c**: Floppy disk driver implementation.
- **Floppy.h**: Header file for floppy disk driver.
- **ISA_DMA.c**: ISA DMA controller driver implementation.
- **ISA_DMA.h**: Header file for ISA DMA controller driver.
- **Keyboard.c**: Keyboard driver implementation.
- **Keyboard.h**: Header file for keyboard driver.
- **PCSpeaker.c**: PC speaker driver implementation.
- **PCSpeaker.h**: Header file for PC speaker driver.
- **VGA_Text.c**: VGA text mode driver implementation.
- **VGA_Text.h**: Header file for VGA text mode driver.
- **driver_addon.c**: Additional driver functions.
- **driver_addon.h**: Header file for additional driver functions.
- **port_io.c**: Port I/O operations.
- **port_io.h**: Header file for port I/O operations.

### FileSystem
Placeholder for file system implementation.

- **placeholder_fs.c**: Placeholder file for file system code.
- **placeholder_fs.h**: Header file for placeholder file system code.

### Kernel
Core components of the kernel.

- **IncBins.asm**: Assembly code for including binary files.
- **KPArt.txt**: ASCII art for kernel.
- **KPArt1.txt**: Additional ASCII art for kernel.
- **README.md**: Kernel-specific documentation.
- **empty_end.asm**: Assembly code for padding the end of the kernel.
- **fool.txt**, **fool_new.txt**, **fool_new_design.txt**: Design notes and documentation.
- **kernel.c**: Main kernel code.
- **kernel.h**: Header file for kernel functions and structures.
- **kernel.ld**: Linker script for the kernel.
- **kernel_entry.asm**: Entry point for the kernel.
- **kernel_graphics.c**: Graphics functions for the kernel.

### Makefile
Makefile for building the entire project.

### Memory
Memory management components, including paging.

#### Paging
- **paging.asm**: Assembly code for paging.
- **paging.c**: C code for paging.
- **paging.h**: Header file for paging functions.
- **paging_utils.h**: Utilities for paging.

- **

cmos_memsize.c**: Code to determine memory size using CMOS.
- **cmos_memsize.h**: Header file for CMOS memory size functions.
- **dynamic_mem.c**: Dynamic memory allocation code.
- **dynamic_mem.h**: Header file for dynamic memory functions.
- **mem.c**: General memory management code.
- **mem.h**: Header file for general memory management.

### Misc
Miscellaneous utilities and definitions.

- **colors.h**: Header file for color definitions.

### Processes
Process management and loading.

- **flat_binary_loader.c**: Loader for flat binary executables.
- **flat_binary_loader.h**: Header file for flat binary loader functions.

### Shell
Implementation of a command-line shell.

#### Functions
- **disk.c**: Disk-related shell commands.
- **floppy.c**: Floppy disk-related shell commands.
- **functions.h**: Header file for shell functions.
- **memory.c**: Memory-related shell commands.
- **misc.c**: Miscellaneous shell commands.
- **text.c**: Text-related shell commands.

- **shell.c**: Main shell code.
- **shell.h**: Header file for shell functions.
- **shellFunctions.c**: Additional shell functions.
- **shellFunctions.h**: Header file for additional shell functions.

### SystemCalls
System call implementations.

- **syscalls.c**: C code for system calls.
- **syscalls.h**: Header file for system call functions.

### Utils
Utility functions and common definitions.

- **Conversions.c**: Functions for data type conversions.
- **Conversions.h**: Header file for conversion functions.
- **Typedefs.h**: Common type definitions.
- **assert.c**: Assertion handling code.
- **assert.h**: Header file for assertion functions.
- **bitmap.c**: Bitmap handling functions.
- **bitmap.h**: Header file for bitmap functions.
- **dataStructures.c**: Common data structures.
- **dataStructures.h**: Header file for common data structures.
- **error_handling.c**: Error handling code.
- **error_handling.h**: Header file for error handling functions.
- **string.c**: String manipulation functions.
- **string.h**: Header file for string functions.

### Miscellaneous Files
- **anything_here.md**: Placeholder markdown file.
- **commands.sh**: Shell script with common commands.
- **disk.img**: Disk image for the OS.
- **map.txt**: Memory map or other mappings.
- **osimage_formated.bin**: Formatted OS image.
- **test_disk**, **test_disk.img**: Test disk images for development.

## Getting Started

### Prerequisites
- GCC (GNU Compiler Collection)
- NASM (Netwide Assembler)
- QEMU (for emulating the OS)

### Setup

1. **For Arch Linux:**
   ```sh
   cd A_Setup
   ./setup-gcc-arch.sh
   ```

2. **For Debian-based systems:**
   ```sh
   cd A_Setup
   ./setup-gcc-debian.sh
   ```

### Building the Project
Run the Makefile to build the entire project.
```sh
make
```

## Documentation

Detailed documentation for each component can be found within the respective directories.

## Contributing

Please read `CONTRIBUTING.md` for details on our code of conduct and the process for submitting pull requests.

## License

This project is licensed under the MIT License - see the `LICENSE.md` file for details.
