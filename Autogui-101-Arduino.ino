//refference to https://speeddemon.jp/keyboard-h/#toc12

#include <Keyboard.h>

void setup(){
  Keyboard.begin();
  delay(3000);//3sec

//download a pic on DL-dir
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  delay(100);//0.1sec,hotkeyTime
  Keyboard.releaseAll();
  Keyboard.print("powershell Invoke-WebRequest -Uri www.arduino.cc/static/media/arduino-UNO.bcc69bde.png -OutFile Downloads/Nothing.png\n");
  delay(5000);//5sec,waitForDownload

  //open the pic
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  delay(100);//0.1sec,hotkeyTime
  Keyboard.releaseAll();
  Keyboard.print("C'/Users/%username%/Downloads/Nothing.png\n");
  delay(3000);//3sec,waitForOpeningPic

  //set it as wallpaper
  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press('b');
  delay(100);//0.1sec//0.3sec,hotkeyTime
  Keyboard.releaseAll();
  delay(1000);//1sec,waitForSettingWallpaper

  //close the pic
  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press(KEY_F4);
  delay(300);//0.3sec,hotkeyTime
  Keyboard.releaseAll();

  Keyboard.end();
  delay(1000);
  Keyboard.begin();
  delay(2000);

}

void loop(){
}