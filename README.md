# remoteArduino

Serial baud rate used 9600.
Ir Remote library used IRremote by shirriff z3t0 Version 2.8.0.
https://github.com/z3t0/Arduino-IRremote
Emitter module used KY-005
Receiver module used KY-002
Arduino used Uno

Example used to learn the infrared codes IRrecord from the library examples.

To ensure the code to be received by the tv each code is sent three times with a delay of 50 ms.
The android code use speech recognition and send each word separately.
Numbers are broken to characters to be send to the tv.
The volume up (0x10) and down (0x11) are send twice.
