const int BTN_WAIT_TIME = 150; //ms
const int HAT_WAIT_TIME = 100; //ms

// btnを押下する（pushして離す）
void pushButton(int btn) {
  SwitchControlLibrary().pressButton(btn);
  SwitchControlLibrary().sendReport();
  delay(BTN_WAIT_TIME);
  SwitchControlLibrary().releaseButton(btn);
  SwitchControlLibrary().sendReport();
  delay(BTN_WAIT_TIME);
}

// btnをloopCount回連打する
void pushButtonLoop(int btn, int loopCount) {
  for (int i = 0; i < loopCount; i++) {
    pushButton(btn);
  }
}

// hatBtnを押下する（pushして離す）
void pushHatButton(int hatBtn) {
  SwitchControlLibrary().pressHatButton(hatBtn);
  SwitchControlLibrary().sendReport();
  delay(HAT_WAIT_TIME);
  SwitchControlLibrary().releaseHatButton(hatBtn);
  SwitchControlLibrary().sendReport();
  delay(HAT_WAIT_TIME);
}

// hatBtn(十字ボタン）をloopCount回連打する
void pushHatButtonLoop(int hatBtn, int loopCount) {
  for (int i = 0; i < loopCount; i++) {
    pushHatButton(hatBtn);
  }
}