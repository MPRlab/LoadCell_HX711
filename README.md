# LoadCell_HX711
Load Cell Connections to HX711 and Arduino:
https://hackster.imgix.net/uploads/attachments/392651/Load_Cell_Interface_Arduino.png?auto=compress%2Cformat&w=740&h=555&fit=max

datasheet of HX711:
http://image.dfrobot.com/image/data/SEN0160/hx711_english.pdf

note: sparkfun HX711 board has default output data rate at 10Hz. Pulling up Pin 15 from 0 to 1 can increase rate to 80Hz.

# Arduino

The HX711 arduino library can be found at 
https://github.com/bogde/HX711.git

The calibration and reading code is tested and listed in repo.

# Mbed

refer to:
https://os.mbed.com/users/megrootens/code/HX711/file/16627e96c8de/Hx711.h/

Not yet tested. 
