    # First, install the PCD driver and call DxeInit
    INF MdeModulePkg/Core/Dxe/DxeMain.inf
    INF MdeModulePkg/Universal/PCD/Dxe/Pcd.inf

    INF Platforms/Microsoft/Lumia950XLPkg/Binaries/QcomPkg/Drivers/EnvDxe/EnvDxe.inf

    INF MdeModulePkg/Universal/ReportStatusCodeRouter/RuntimeDxe/ReportStatusCodeRouterRuntimeDxe.inf
    INF MdeModulePkg/Universal/StatusCodeHandler/RuntimeDxe/StatusCodeHandlerRuntimeDxe.inf
    INF MdeModulePkg/Core/RuntimeDxe/RuntimeDxe.inf

    # Next, install cpu protocol and enable the interrupt controller
    INF ArmPkg/Drivers/CpuDxe/CpuDxe.inf
    INF ArmPkg/Drivers/ArmGic/ArmGicDxe.inf

    # Core Drivers
    INF EmbeddedPkg/MetronomeDxe/MetronomeDxe.inf
    INF ArmPkg/Drivers/TimerDxe/TimerDxe.inf

    INF Platforms/Microsoft/Lumia950XLPkg/Binaries/QcomPkg/Drivers/SecurityDxe/SecurityDxe.inf

    INF Platforms/Microsoft/Lumia950XLPkg/Binaries/MdeModulePkg/Universal/WatchdogTimerDxe/WatchdogTimer.inf

    INF Platforms/Microsoft/Lumia950XLPkg/Binaries/QcomPkg/Drivers/CapsuleRuntimeDxe/CapsuleRuntimeDxe.inf
    INF Platforms/Microsoft/Lumia950XLPkg/Binaries/QcomPkg/Drivers/VariableDxe/VariableDxe.inf
    INF Platforms/Microsoft/Lumia950XLPkg/Binaries/QcomPkg/Drivers/DppDxe/DppDxe.inf
    INF Platforms/Microsoft/Lumia950XLPkg/Binaries/QcomPkg/Drivers/EmbeddedMonotonicCounter/EmbeddedMonotonicCounter.inf
    INF Platforms/Microsoft/Lumia950XLPkg/Binaries/QcomPkg/Drivers/SimpleTextInOutSerialDxe/SimpleTextInOutSerial.inf

    # Use Binary from UEFI.bin instead of MdeModulePkg
    INF Platforms/Microsoft/Lumia950XLPkg/Binaries/QcomPkg/Drivers/ResetRuntimeDxe/ResetRuntimeDxe.inf

    INF Platforms/Microsoft/Lumia950XLPkg/Binaries/EmbeddedPkg/RealTimeClockRuntimeDxe/RealTimeClockRuntimeDxe.inf

    INF MdeModulePkg/Universal/PrintDxe/PrintDxe.inf
    INF MdeModulePkg/Universal/DevicePathDxe/DevicePathDxe.inf
    INF Platforms/Microsoft/Lumia950XLPkg/Binaries/MdeModulePkg/Universal/Console/ConPlatformDxe/ConPlatformDxe.inf
    INF Platforms/Microsoft/Lumia950XLPkg/Binaries/MdeModulePkg/Universal/Console/ConSplitterDxe/ConSplitterDxe.inf
    INF Platforms/Microsoft/Lumia950XLPkg/Binaries/MdeModulePkg/Universal/Console/GraphicsConsoleDxe/GraphicsConsoleDxe.inf
    INF Platforms/Microsoft/Lumia950XLPkg/Binaries/MdeModulePkg/Universal/HiiDatabaseDxe/HiiDatabaseDxe.inf

    INF Platforms/Microsoft/Lumia950XLPkg/Binaries/QcomPkg/Drivers/SmbiosDxe/SmbiosDxe.inf
    #here lies acpitabledxe
    INF Platforms/Microsoft/Lumia950XLPkg/Binaries/QcomPkg/Drivers/AcpiPlatformDxe/AcpiPlatformDxe.inf
    INF Platforms/Microsoft/Lumia950XLPkg/Binaries/QcomPkg/Drivers/OSConfigDxe/OSConfigDxe.inf
    INF Platforms/Microsoft/Lumia950XLPkg/Binaries/QcomPkg/Drivers/InterruptDxe/InterruptGICDxe.inf
    INF Platforms/Microsoft/Lumia950XLPkg/Binaries/QcomPkg/Drivers/TLMMDxe/TLMMDxe.inf
    INF Platforms/Microsoft/Lumia950XLPkg/Binaries/QcomPkg/Drivers/ChipInfoDxe/ChipInfoDxe.inf
    INF Platforms/Microsoft/Lumia950XLPkg/Binaries/QcomPkg/Drivers/SmemDxe/SmemDxe.inf
    INF Platforms/Microsoft/Lumia950XLPkg/Binaries/QcomPkg/Drivers/SmdDxe/SmdDxe.inf
    INF Platforms/Microsoft/Lumia950XLPkg/Binaries/QcomPkg/Drivers/ULogDxe/ULogDxe.inf
    INF Platforms/Microsoft/Lumia950XLPkg/Binaries/QcomPkg/Drivers/NpaDxe/NpaDxe.inf

    # Use Binary from UEFI.bin instead of MdeModulePkg
    INF Platforms/Microsoft/Lumia950XLPkg/Binaries/QcomPkg/Drivers/DiskIoDxe/DiskIoDxe.inf
    INF Platforms/Microsoft/Lumia950XLPkg/Binaries/QcomPkg/Drivers/PartitionDxe/PartitionDxe.inf

    INF FatPkg/EnhancedFatDxe/Fat.inf

    INF MdeModulePkg/Universal/Disk/UnicodeCollation/EnglishDxe/EnglishDxe.inf

    INF Platforms/Microsoft/Lumia950XLPkg/Binaries/QcomPkg/Drivers/DALSYSDxe/DALSYSDxe.inf
    INF Platforms/Microsoft/Lumia950XLPkg/Binaries/QcomPkg/Drivers/ClockDxe/ClockDxe.inf
    INF Platforms/Microsoft/Lumia950XLPkg/Binaries/QcomPkg/Drivers/HWIODxe/HWIODxe.inf
    INF Platforms/Microsoft/Lumia950XLPkg/Binaries/QcomPkg/Drivers/I2CDxe/I2CDxe.inf

    # INF MdeModulePkg/Universal/BdsDxe/BdsDxe.inf
   
    INF SiliciumPkg/Drivers/SimpleFbDxe/SimpleFbDxe.inf

    INF Platforms/Microsoft/Lumia950XLPkg/Binaries/QcomPkg/Drivers/SPIDxe/SPIDxe.inf
    INF Platforms/Microsoft/Lumia950XLPkg/Binaries/QcomPkg/Drivers/SPMIDxe/SPMIDxe.inf
    INF Platforms/Microsoft/Lumia950XLPkg/Binaries/QcomPkg/Drivers/CrashDumpDxe/CrashDumpDxe.inf
    # MMCHS is emmc driver afaik?
    INF Platforms/Microsoft/Lumia950XLPkg/Binaries/QcomPkg/Drivers/MMCHSDxe/MMCHSDxe.inf

    #INF Platforms/Microsoft/Lumia950XLPkg/Binaries/QcomPkg/Drivers/DisplayDxe/DisplayDxe.inf
    INF Platforms/Microsoft/Lumia950XLPkg/Binaries/QcomPkg/Drivers/PlatformInfoDxe/PlatformInfoDxe.inf
    INF Platforms/Microsoft/Lumia950XLPkg/Binaries/QcomPkg/Drivers/ButtonsDxe/ButtonsDxe.inf
    INF Platforms/Microsoft/Lumia950XLPkg/Binaries/QcomPkg/Drivers/PmicDxe/PmicDxe.inf
    INF Platforms/Microsoft/Lumia950XLPkg/Binaries/QcomPkg/Drivers/ChargerDxe/ChargerDxe.inf
    INF Platforms/Microsoft/Lumia950XLPkg/Binaries/MmoPkg/Drivers/UsbTypeCDxe/UsbTypeCDxe.inf
    INF Platforms/Microsoft/Lumia950XLPkg/Binaries/QcomPkg/Drivers/AdcDxe/AdcDxe.inf
    INF Platforms/Microsoft/Lumia950XLPkg/Binaries/QcomPkg/Drivers/TsensDxe/TsensDxe.inf
    INF Platforms/Microsoft/Lumia950XLPkg/Binaries/QcomPkg/Drivers/MpParkDxe/MpParkDxe.inf
    INF Platforms/Microsoft/Lumia950XLPkg/Binaries/QcomPkg/Drivers/UsbfnDxe/UsbfnDxe.inf
    INF Platforms/Microsoft/Lumia950XLPkg/Binaries/QcomPkg/Drivers/UsbfnDwc3Dxe/UsbfnDwc3Dxe.inf
    INF Platforms/Microsoft/Lumia950XLPkg/Binaries/QcomPkg/Drivers/EhciDxe/EhciDxe.inf
    INF Platforms/Microsoft/Lumia950XLPkg/Binaries/QcomPkg/Drivers/XhciDxe/XhciDxe.inf

    # Use Binary from MdeModulePkg instead of uefi.bin
    INF MdeModulePkg/Bus/Usb/UsbBusDxe/UsbBusDxe.inf

    #INF MdeModulePkg/Bus/Usb/UsbKbDxe/UsbKbDxe.inf
    #INF MdeModulePkg/Bus/Usb/UsbMassStorageDxe/UsbMassStorageDxe.inf

    #INF Platforms/Microsoft/Lumia950XLPkg/Binaries/QcomPkg/Drivers/UsbMassStorageDxe/UsbMassStorageDxe.inf
    INF Platforms/Microsoft/Lumia950XLPkg/Binaries/QcomPkg/Drivers/UsbConfigDxe/UsbConfigDxe.inf
    INF Platforms/Microsoft/Lumia950XLPkg/Binaries/QcomPkg/Drivers/UsbDeviceDxe/UsbDeviceDxe.inf
    INF Platforms/Microsoft/Lumia950XLPkg/Binaries/QcomPkg/Drivers/HashDxe/HashDxe.inf
    INF Platforms/Microsoft/Lumia950XLPkg/Binaries/QcomPkg/Drivers/RNGDxe/RngDxe.inf
    INF Platforms/Microsoft/Lumia950XLPkg/Binaries/QcomPkg/Drivers/TrEEDxe/TrEEDxe.inf
    INF Platforms/Microsoft/Lumia950XLPkg/Binaries/QcomPkg/Drivers/MorPpiDxe/MorPpiDxe.inf
    INF Platforms/Microsoft/Lumia950XLPkg/Binaries/QcomPkg/Drivers/MeasureBootDxe/MeasureBootDxe.inf
    INF Platforms/Microsoft/Lumia950XLPkg/Binaries/QcomPkg/Drivers/TzDxe/TzDxe.inf
 
    INF MdeModulePkg/Universal/Variable/RuntimeDxe/VariableRuntimeDxe.inf

    INF Platforms/Microsoft/Lumia950XLPkg/Binaries/QcomPkg/Drivers/QcomBds/QcomBds.inf
    INF Platforms/Microsoft/Lumia950XLPkg/Binaries/QcomPkg/Drivers/SystemConfigDxe/SystemConfigDxe.inf
    INF Platforms/Microsoft/Lumia950XLPkg/Binaries/QcomPkg/Drivers/SerialDxe/SerialDxe.inf
    INF Platforms/Microsoft/Lumia950XLPkg/Binaries/QcomPkg/Drivers/AdapterInformationDxe/AdapterInformationDxe.inf
