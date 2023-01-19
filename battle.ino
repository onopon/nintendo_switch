// パーティが2体以上であっても、自動で戦闘を行う
void autoBattle() {
  pushButtonLoop(Button::A, 6);
  pushButtonLoop(Button::B, 3);
}