#include <Library/DeviceConfigurationMapLib.h>

STATIC
CONFIGURATION_DESCRIPTOR_EX
gDeviceConfigurationDescriptorEx[] = {
  {"ConfigParameterCount",  64},
  {"SerialPortBufferSize", 0x8000},
  {"SOC_HW_VERSION_RegAddr", 0xFD4A8000},
  {"ChargingDispControl", 0},
  {"EnableShell", 0x1},
  {"SharedIMEMBaseAddr", 0xFE87F000},
  {"MassStorageCookieAddr", 0xFE87F000},
  {"MassStorageCookieOffset", 0x0},
  {"MassStorageCookieSize", 0x8},
  {"MemoryCaptureModeOffset", 0xC},
  {"AbnormalResetOccurredOffset", 0x20},
  {"NumCpus", 8},
  {"NumActiveCores", 8},
  {"MaxLogFileSize", 0x800000},
  {"UsbPort0Config", 2},
  {"PwrBtnShutdownFlag", 0x0},
  {"Sdc1GpioConfigOn", 0x9FDB},
  {"Sdc2GpioConfigOn", 0x1E92},
  {"Sdc1GpioConfigOff", 0x1A00},
  {"Sdc2GpioConfigOff", 0x1A00},
  {"SdccEMMCSpeedMode", 0x1},
  {"EnableSDHCSwitch", 0x3},
  {"RpmbHalfSectorGranularity", 2},
  {"TsensHighTemp", 120},
  {"TsensLowTemp", 120},
  {"TsensWaitTimeus", 500000},
  {"PSHoldOffset", 0xB000},
  {"PSHoldSHFT", 0x0},
  {"PCIeRPNumber", 1},
  {"DDRHealthMonAddr", 0x00022800},
  {"GCCResetValueAddress", 0xFE87F024},
  {"TsFwUpgrade", 0},
  {"TzSecureStateNew", 1},
  {"SecBootKeysRootType", 1},
  {"SecurityFlag", 0x7F},

  // Terminator
  {"Terminator", 0xFFFFFFFF}
};

CONFIGURATION_DESCRIPTOR_EX*
GetDeviceConfigurationMap ()
{
  return gDeviceConfigurationDescriptorEx;
}
