//refference to https://speeddemon.jp/keyboard-h/#toc12

#include <Keyboard.h>

//charDef
char winkey = 'KEY_LEFT_GUI'
char ctrl = 'KEY_LEFT_CTRL'
char DownloadCmd = 'powershell Invoke-WebRequest -Uri "www.python.jp/pages/python_logo2.png" -OutFile "~\Downloads\TheHopeOne.png"'
char OpenCmd = 'C:/Users/%username%/Downloads/TheHopeOne.png'

void setup(){
  Keyboard.begin();
  delay(3000);//3sec
}

void loop(){
  //download a pic on DL-dir
  Keyboard.press(winkey);
  Keyboard.press('r');
  delay(300);//0.3sec,hotkeyTime
  Keyboard.releaseAll();
  Keyboard.printIn(DownloadCmd)
  dalay(3000)//3sec,waitForDownload

  //open the pic
  Keyboard.press(winkey);
  Keyboard.press('r');
  delay(300);//0.3sec//0.3sec,hotkeyTime
  Keyboard.releaseAll();
  Keyboard.printIn(OpenCmd)
  delay(1000)//1sec,waitForOpeningPic

  //set it as wallpaper
  Keyboard.press(ctrl);
  Keyboard.press('b');
  delay(300);//0.3sec//0.3sec,hotkeyTime
  Keyboard.releaseAll();
  delay(1000)//1sec,waitForSettingWallpaper

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