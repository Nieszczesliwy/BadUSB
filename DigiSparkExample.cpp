#include "DigiKeyboard.h"

void setup() {
  // Це функція, що виконується один раз при підключенні DigiSpark до комп'ютера.
}

void loop() {
  DigiKeyboard.delay(5000); // Затримка для того, щоб система визнала DigiSpark як клавіатуру.

  DigiKeyboard.sendKeyStroke(0); // Відправляємо "порожній" сигнал для того, щоб "розбудити" систему.
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT); // Натискаємо Win+R, щоб відкрити вікно виконання.
  DigiKeyboard.delay(100);

  DigiKeyboard.println("cmd"); // Вводимо "cmd" для відкриття командного рядка.
  DigiKeyboard.sendKeyStroke(KEY_ENTER); // Натискаємо Enter для запуску командного рядка.
  DigiKeyboard.delay(100);

  DigiKeyboard.println("echo Hello, World!"); // Вводимо команду для виводу тексту у командний рядок.
  DigiKeyboard.sendKeyStroke(KEY_ENTER); // Натискаємо Enter для виконання команди.

  DigiKeyboard.delay(5000); // Затримка перед завершенням скрипта.
  DigiKeyboard.println("exit"); // Вводимо "exit" для закриття командного рядка.
  DigiKeyboard.sendKeyStroke(KEY_ENTER); // Натискаємо Enter для виходу з командного рядка.

  while (true) {
    /* Залишаємо петлю порожньою, щоб скрипт не повторювався. */
  }
}
