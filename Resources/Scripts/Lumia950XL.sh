#!/bin/bash

# Copy BootShim + UEFI to a Payload File
cat "./Build/Lumia950XLPkg/${_TARGET_BUILD_MODE}_CLANGDWARF/FV/LUMIA950XL_UEFI.fd" > ./UEFI.fd||exit 1
# Copy UEFI FD File to a ELF Payload File
${CLANG38_ARM_PREFIX}objcopy -I binary -O elf32-littlearm --binary-architecture arm "./Build/${TARGET_DEVICE}Pkg/${_TARGET_BUILD_MODE}_CLANG38/FV/${TARGET_DEVICE^^}_UEFI.fd" "./Build/${TARGET_DEVICE}Pkg/${_TARGET_BUILD_MODE}_CLANG38/FV/${TARGET_DEVICE^^}_UEFI.o"||_error "\nFailed to Build ELF Payload!\n"
${CLANG38_ARM_PREFIX}ld -m armelf_linux_eabi "./Build/${TARGET_DEVICE}Pkg/${_TARGET_BUILD_MODE}_CLANG38/FV/${TARGET_DEVICE^^}_UEFI.o" -T "./configs/${TARGET_DEVICE}.ld" -o "./Mu-${TARGET_DEVICE}.elf"||_error "\nFailed to Build ELF Payload!\n"

