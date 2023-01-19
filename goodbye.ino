// 1ボックスの全てのポケモンを逃す
void goodByeBox() {
  for (int i = 0; i < 2; i++) {
    goodByeRow();
    pushHatButton(HatButton::DOWN);
    goodByeRowReverse();
    pushHatButton(HatButton::DOWN);
  }
  goodByeRow();
  pushButtonLoop(Button::B, 2);
  pushButton(Button::HOME);
  delay(600000);
}

// 左から右に1行逃がす
void goodByeRow() {
  for (int i = 0; i < 5; i++) {
    goodBye();
    pushHatButton(HatButton::RIGHT);
  }
  goodBye();
}

// 右から左に1行逃がす
void goodByeRowReverse() {
  for (int i = 0; i < 5; i++) {
    goodBye();
    pushHatButton(HatButton::LEFT);
  }
  goodBye();
}

// カーソルが当たっているポケモンを逃す
void goodBye() {
  // ポケモンを選択後、逃がすを選択
  pushButton(Button::A);
  delay(400);
  pushHatButtonLoop(HatButton::UP, 2);
  pushButton(Button::A);
  delay(400);
  // 本当に逃しますか？の選択肢の解答
  pushHatButton(HatButton::UP);
  pushButton(Button::A);
  // バイバイのアラートを閉じる
  delay(1000);
  pushButton(Button::A);
  delay(100);
}