#!/bin/bash

# Copy BootShim + UEFI to a Payload File
cat "./Build/Lumia950XLPkg/${_TARGET_BUILD_MODE}_CLANGDWARF/FV/LUMIA950XL_UEFI.fd" > ./UEFI.fd||exit 1
