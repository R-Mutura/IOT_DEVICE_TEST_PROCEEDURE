# IOT_DEVICE_TEST_PROCEEDURE
This repo contains instructions on how to test the IOT DEVICE

### Voltage Test Points
 - TP1 => 5V
 - TP2 => +3V3 (3.3V)
 - TP3 => +1V2 (1.2V)
 - TP4 => +2V8 (2.8V)
 - TP502 => GND
 - TP503 => GND

![iot_cam wifi_device 1](https://user-images.githubusercontent.com/85989401/166421798-71273c96-b8b0-472e-94d0-b36303f9c40e.png)

# LOADING FIRMWARE AND TESTING

## Requirements
1) Set up the IDE, for this application you will need to download the Arduino ide [here](https://www.arduino.cc/en/software) if you don't have it already installed for your distributions
2) Instal the board support package for ESP32 by goint to ` Tools > Board:xx > Board Manager`. In the search-bar type ESP32 and select install ESP32 by Espressid Systems.  
3) Now select DOIT ESP32 DEVKITT V1 from ` Tools > Board:xx > ESP32 Arduino > DOIT ESP32 DEVKITT`
 
 Once done proceed to the next instructions.
 
 ## Download the files 
4)  Download all the files on the `Code`:arrow_down_small: on this platform, In your downloads you will get the a folder :file_folder:  `IOT_DEVICE_TEST`this will have:
     - IOT_DEVICE_TEST.ino
</br> and `Libraries` zip file -this contains all the related libraries used in the project
## Library Installation
5)  On library installation unzip the folder :file_folder: `libraries` in the downloaded folder :file_folder:, copy and paste all the folders to your directory `documents/arduino/library` folder :file_folder:
6)  Open the `IOT_DEVICE_TEST.ino`  in `IOT_DEVICE_TEST`folder :file_folder: with the downloaded ide, compile and upload to the hardware `(procedure on how to use the ide is on the tutorial link)`:link:    [tutorial](https://www.youtube.com/watch?v=nL34zDTPkcs&t=3s)


# Uploading the codes  :arrow_up:
You can buy the FTDI from here :link: [buy ftdi](https://www.amazon.com/HiLetgo-FT232RL-Converter-Adapter-Breakout/dp/B00IJXZQ7C/ref=sr_1_3?keywords=FTDI&qid=1650483928&sr=8-3)
or here 
 :link: [buy other FTDI](https://www.amazon.com/CP2102-Module-Converter-Downloader-Compatible/dp/B092YMT52G_)

1) Insert the FTDI programmer cable socket onto UART headers. ...
2) Open Arduino IDE software. ...
3) Next, call out the source code. ...
4) Select “FTDI” from the Tools > Programmer menu.
5) Select “Upload using Programmer” from the File menu.

You can also explore more from the following tutorial :link:[How to Use FTDI Programmer to upload Code](https://www.youtube.com/watch?v=JYchUapoqzc)
## Debugging 
To see the serial data as sent or received from either of the boards we can use the FTDI programmer or any USB to TTL converter so that you can have access to a serial port. Check out the headers on the board for uart communications Same as those used in Programming.

# WORKING
Testing includes a visual display of words on the TFT display.
</br>  On connecting power, The 5V led turns on and the other power rails can be tested via the shown test points
</br> The buttons are pressed and the corresponding position is displayed on the screen.

### END
