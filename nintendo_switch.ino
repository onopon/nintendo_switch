#include <SwitchControlLibrary.h>

void setup() {
  // put your setup code here, to run once:
  SwitchControlLibrary(); // 初期化
  // 最初の3コマンドは認識してくれないので、
  // もし実行されても一番影響の少なそうなボタンを押す
  pushButtonLoop(Button::PLUS, 3);
}

void loop() {
    autoBattle();
}