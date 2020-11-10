#include <IRremote.h>

IRsend irsend;

void setup() {
  Serial.begin(9600);
}

void sendData(uint32_t code)
{
  for(int i=0; i < 3; i++)
  {
    irsend.sendRC6(code,20);
    delay(50);
  }
}

void loop() {
if (Serial.available() > 0) {
    String s1 = Serial.readStringUntil('\n');
    s1.toLowerCase();
    
    if(s1.toInt() > 0)
    {
     for(int i=0, size=s1.length();i<size;i++)
     {
      sendData(s1.charAt(i)-48);
     }
    }
    else if (s1 == "liga")
    {
      sendData(0xc);
    }
    else if(s1 == "sair")
    {
      sendData(0x9f);
    }
    else if (s1 == "netflix")
    {
      sendData(0x75);
    }
    else if (s1 == "smart")
    {
      sendData(0xbe);
    }
    else if (s1 == "ok")
    {
      sendData(0x5c);
    }
    else if (s1 == "info")
    {
      sendData(0xf);
    }
    else if (s1 == "list")
    {
      sendData(0xd2);
    }
    else if (s1 == "volta")
    {
      sendData(0xa);
    }
    else if (s1 == "home")
    {
      sendData(0x54);
    }
    else if (s1 == "options")
    {
      sendData(0x40);
    }
    else if (s1 == "mudo")
    {
      sendData(0xd);
    }
    else if (s1 == "aumenta")
    {
      sendData(0x10);
      sendData(0x10);
    }
    else if (s1 == "diminui")
    {
      sendData(0x11);
      sendData(0x11);
    }
    else if (s1 == "mais")
    {
      sendData(0x20);
    }
    else if (s1 == "menos")
    {
      sendData(0x21);
    }
    else if (s1 == "direita")
    {
      sendData(0x5b);
    }
    else if (s1 == "esquerda")
    {
      sendData(0x5a);
    }
    else if (s1 == "cima")
    {
      sendData(0x58);
    }
    else if (s1 == "baixa")
    {
      sendData(0x59);
    }
    else if (s1 == "stop")
    {
      sendData(0x31);
    }
    else if (s1 == "play")
    {
      sendData(0x2c);
    }
  }
}