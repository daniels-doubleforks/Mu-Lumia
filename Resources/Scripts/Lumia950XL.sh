#!/bin/bash

# Copy BootShim + UEFI to a Payload File
cat "./Build/Lumia950XLPkg/DEBUG_CLANGPDB/FV/LUMIA950XL_UEFI.fd" > ./UEFI.fd||exit 1
# Copy UEFI FD File to a ELF Payload File
aarch64-linux-gnu-objcopy -I binary -B ARM -O elf64-little "./Build/${TARGET_DEVICE}Pkg/DEBUG_CLANGPDB/FV/${TARGET_DEVICE^^}_UEFI.fd" "./Build/${TARGET_DEVICE}Pkg/DEBUG_CLANGPDB/FV/${TARGET_DEVICE^^}_UEFI.o"||_error "\nFailed to Build ELF Payload!\n"
aarch64-linux-gnu-ld -m aarch64elf "./Build/${TARGET_DEVICE}Pkg/DEBUG_CLANGPDB/FV/${TARGET_DEVICE^^}_UEFI.o" -o "./Mu-${TARGET_DEVICE}.elf"||_error "\nFailed to Build ELF Payload!\n"

