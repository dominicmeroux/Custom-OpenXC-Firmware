# Configurations
All defaults in building the firmware files were accepted, with the exception that the C5 BT was compiled with MSD_ENABLE=1 to take advantage of the SD card storage capability.

Firmware was configured for the Ford Reference VI, C5 BT, and C5 BLE. The C5 Cell configuration can be added, but would require a matching endpoint custom to the user of this firmware.

### Unfiltered-Raw_CAN-1HZ
Sends raw CAN messages at 1HZ rate. This specification is modified from http://vi-firmware.openxcplatform.com/en/latest/config/raw-examples.html#unfiltered-raw-can-with-limited-variable-data-rate

### Unfiltered-Raw-CAN-1HZ-force_send_changed
Sends raw CAN messages at 1HZ rate, forces changed values to send regardless of whether or not they are sent at the 1HZ rate. This specification is copied from http://vi-firmware.openxcplatform.com/en/latest/config/raw-examples.html#unfiltered-raw-can-with-limited-variable-data-rate

