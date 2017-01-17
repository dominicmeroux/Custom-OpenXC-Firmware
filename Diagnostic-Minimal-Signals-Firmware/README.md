## NOTES

The C5 Cellular firmware files would need to be modified to match the specified string in the POST request (see https://groups.google.com/forum/#!topic/openxc/io9_QBcgYf8). If the point is to test whether the signals are working before compiling your own firmware, you can connect to the C5 Cellular via USB and type Python library commands at the terminal - e.g. $ openxc-dump

The C5 BT was compiled with MSD_ENABLE=1 to take advantage of the SD card storage capability.

## vi-firmware-FORDBOARD.bin

Compiled with options:
-      FORDBOARD           = PLATFORM 
-      1                   = BOOTLOADER 
-      0                   = TEST_MODE_ONLY 
-      0                   = DEBUG 
-      0                   = MSD_ENABLE 
-      180                 = DEFAULT_FILE_GENERATE_SECS 
-      0                   = DEFAULT_METRICS_STATUS 
-      1                   = DEFAULT_ALLOW_RAW_WRITE_USB 
-      0                   = DEFAULT_ALLOW_RAW_WRITE_UART 
-      0                   = DEFAULT_ALLOW_RAW_WRITE_NETWORK 
-      0                   = DEFAULT_ALLOW_RAW_WRITE_BLE 
-      OFF                 = DEFAULT_LOGGING_OUTPUT 
-      JSON                = DEFAULT_OUTPUT_FORMAT 
-      0                   = DEFAULT_EMULATED_DATA_STATUS 
-      SILENT_CAN          = DEFAULT_POWER_MANAGEMENT 
-      1                   = DEFAULT_USB_PRODUCT_ID 
-      0                   = DEFAULT_CAN_ACK_STATUS 
-      1                   = DEFAULT_OBD2_BUS 
-      0                   = DEFAULT_RECURRING_OBD2_REQUESTS_STATUS 

## vi-firmware-CROSSCHASM_C5_CELLULAR.hex

Compiled with options:
-      CROSSCHASM_C5_CELLUL= PLATFORM 
-      1                   = BOOTLOADER 
-      0                   = TEST_MODE_ONLY 
-      0                   = DEBUG 
-      0                   = MSD_ENABLE 
-      180                 = DEFAULT_FILE_GENERATE_SECS 
-      0                   = DEFAULT_METRICS_STATUS 
-      1                   = DEFAULT_ALLOW_RAW_WRITE_USB 
-      0                   = DEFAULT_ALLOW_RAW_WRITE_UART 
-      0                   = DEFAULT_ALLOW_RAW_WRITE_NETWORK 
-      0                   = DEFAULT_ALLOW_RAW_WRITE_BLE 
-      OFF                 = DEFAULT_LOGGING_OUTPUT 
-      JSON                = DEFAULT_OUTPUT_FORMAT 
-      0                   = DEFAULT_EMULATED_DATA_STATUS 
-      SILENT_CAN          = DEFAULT_POWER_MANAGEMENT 
-      1                   = DEFAULT_USB_PRODUCT_ID 
-      0                   = DEFAULT_CAN_ACK_STATUS 
-      1                   = DEFAULT_OBD2_BUS 
-      0                   = DEFAULT_RECURRING_OBD2_REQUESTS_STATUS 

## vi-firmware-CROSSCHASM_C5_BLE.hex

Compiled with options:
-      CROSSCHASM_C5_BLE   = PLATFORM 
-      1                   = BOOTLOADER 
-      0                   = TEST_MODE_ONLY 
-      0                   = DEBUG 
-      0                   = MSD_ENABLE 
-      180                 = DEFAULT_FILE_GENERATE_SECS 
-      0                   = DEFAULT_METRICS_STATUS 
-      1                   = DEFAULT_ALLOW_RAW_WRITE_USB 
-      0                   = DEFAULT_ALLOW_RAW_WRITE_UART 
-      0                   = DEFAULT_ALLOW_RAW_WRITE_NETWORK 
-      0                   = DEFAULT_ALLOW_RAW_WRITE_BLE 
-      OFF                 = DEFAULT_LOGGING_OUTPUT 
-      JSON                = DEFAULT_OUTPUT_FORMAT 
-      0                   = DEFAULT_EMULATED_DATA_STATUS 
-      SILENT_CAN          = DEFAULT_POWER_MANAGEMENT 
-      1                   = DEFAULT_USB_PRODUCT_ID 
-      0                   = DEFAULT_CAN_ACK_STATUS 
-      1                   = DEFAULT_OBD2_BUS 
-      0                   = DEFAULT_RECURRING_OBD2_REQUESTS_STATUS 

## vi-firmware-CROSSCHASM_C5_BT.hex

Compiled with options:
-      CROSSCHASM_C5_BT    = PLATFORM 
-      1                   = BOOTLOADER 
-      0                   = TEST_MODE_ONLY 
-      0                   = DEBUG 
-      1                   = MSD_ENABLE 
-      180                 = DEFAULT_FILE_GENERATE_SECS 
-      0                   = DEFAULT_METRICS_STATUS 
-      1                   = DEFAULT_ALLOW_RAW_WRITE_USB 
-      0                   = DEFAULT_ALLOW_RAW_WRITE_UART 
-      0                   = DEFAULT_ALLOW_RAW_WRITE_NETWORK 
-      0                   = DEFAULT_ALLOW_RAW_WRITE_BLE 
-      OFF                 = DEFAULT_LOGGING_OUTPUT 
-      JSON                = DEFAULT_OUTPUT_FORMAT 
-      0                   = DEFAULT_EMULATED_DATA_STATUS 
-      SILENT_CAN          = DEFAULT_POWER_MANAGEMENT 
-      1                   = DEFAULT_USB_PRODUCT_ID 
-      0                   = DEFAULT_CAN_ACK_STATUS 
-      1                   = DEFAULT_OBD2_BUS 
-      0                   = DEFAULT_RECURRING_OBD2_REQUESTS_STATUS 
