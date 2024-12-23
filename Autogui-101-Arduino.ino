//refference to https://speeddemon.jp/keyboard-h/#toc12

#include <Keyboard.h>

//charDef
//char winkey = 'KEY_LEFT_GUI';
//char ctrl = 'KEY_LEFT_CTRL';
//char DownloadCmd = "powershell Invoke-WebRequest -Uri www.python.org/static/img/python-logo.png -OutFile Downloads/1.png";
//char OpenCmd = "C'/Users/%username%/Downloads/TheHopeOne.png";

void setup(){
  Keyboard.begin();
  delay(3000);//3sec

//download a pic on DL-dir
  Keyboard.press(KEY_LEFT_GUI);
  //Keyboard.press(winkey);
  Keyboard.press('r');
  delay(100);//0.1sec,hotkeyTime
  Keyboard.releaseAll();
  Keyboard.print("powershell Invoke-WebRequest -Uri www.python.org/static/img/python-logo.png -OutFile Downloads/Nothing.png\n");
  //Keyboard.println(DownloadCmd);
  delay(5000);//5sec,waitForDownload

  //open the pic
  Keyboard.press(KEY_LEFT_GUI);
  //Keyboard.press(winkey);
  Keyboard.press('r');
  delay(100);//0.1sec,hotkeyTime
  Keyboard.releaseAll();
  Keyboard.print("C'/Users/%username%/Downloads/Nothing.png\n");
  //Keyboard.println(OpenCmd);
  delay(3000);//3sec,waitForOpeningPic

  //set it as wallpaper
  Keyboard.press(KEY_LEFT_CTRL);
  //Keyboard.press(ctrl);
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