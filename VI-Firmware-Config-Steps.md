# Steps

1) To install prerequisites and for detailed information on JSON firmware specification, reference to vi-firmware.openxcplatform.com/en/master/index.html

## Open up a terminal (for consistency, call it terminal 1)

$ cd vi-firmware
$ vagrant up

Once the virtual machine is up, 

$ vagrant ssh
$ cd /vagrant

## Open up a second terminal (terminal 2)

Assuming your firmware is in a directory labeled vi-firmware, make sure that your JSON file with the firmware specification is in this folder and type the following in the terminal: 

$ cd vi-firmware
$ openxc-generate-firmware-code --message-set CellTest1.json > src/signals.cpp

2) Build firmware

### Python hex to int function: print int("0x51", 0)
### Python int to hex function: hex(2025)

### IF BUILDING WITH CROSSCHASM CELLULAR

# in terminal 2

$ cd src 

(should be at /Users/dmeroux/vi-firmware/src)

modify config.cpp file to reflect proper options
- REFER TO: http://vi-firmware.openxcplatform.com/en/latest/advanced/c5_cell_config.html

# in terminal 1

$ fab c5cell build

Make any modifications (e.g. roaming, etc.) in the signals.cpp file per 
http://vi-firmware.openxcplatform.com/en/latest/advanced/c5_cell_config.html

NOTE: SPECIFY serverConnectSettings.host as “vidata1.azurewebsites.net” and serverConnectSettings.port as 1433 (try 80 if this fails)




### IF BUILDING WITH CROSSCHASM BLE

$ fab c5ble build

### IF BUILDING WITH FORDBOARD

$ fab reference build 

### ALL AVAILABLE COMMANDS FOR BUILD

Available commands:

    auto_functional_test
    baremetal
    build
    c5
    c5ble
    c5bt
    c5cell
    chipkit
    chipkit_functional_test
    clean
    debug
    emulator
    flash
    functional_test
    functional_test_flash
    json
    messagepack
    msd_enable
    obd2
    protobuf
    reference
    reference_functional_test
    release
    test
    test_mode_only
    translated_obd2
    transmitter

###


4) Retrieve firmware output file (.bin or .hex)

## Ford Reference VI
Output files in ~./vi-firmware/src/build/FORDBOARD in terminal 2

## CrossChasm C5 Cellular
For Crosschasm cellular go to CROSSCHASM_C5_CELLULAR directory instead of FORDBOARD

## CrossChasm C5 BLE

## CrossChasm C5 BT

5) Close out

In terminal 1, type: 

$ vagrant suspend
