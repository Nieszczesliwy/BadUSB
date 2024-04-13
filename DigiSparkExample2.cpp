#include "DigiKeyboard.h"

void setup() {
  // Це функція, що виконується один раз при підключенні DigiSpark до комп'ютера.
}

void loop() {
  DigiKeyboard.delay(5000); // Затримка для того, щоб система визнала DigiSpark як клавіатуру.

  // Спроба переключення розкладки клавіатури на англійську
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.sendKeyStroke(KEY_SPACE, MOD_ALT_LEFT); // Alt+Shift для зміни мови
  DigiKeyboard.delay(100);

  // Відкриття командного рядка
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT); // Win+R
  DigiKeyboard.delay(100);
  DigiKeyboard.println("cmd");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(100);

  // Введення команди в командний рядок
  DigiKeyboard.println("echo Hello, World!"); // Вивід тексту "Hello, World!"
  DigiKeyboard.sendKeyStroke(KEY_ENTER);

  DigiKeyboard.delay(1000);
  DigiKeyboard.println("exit"); // Закриття командного рядка
  DigiKeyboard.sendKeyStroke(KEY_ENTER);

  while (true) {
    // Залишаємо петлю порожньою, щоб скрипт не повторювався.
  }
}
