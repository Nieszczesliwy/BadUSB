# BadUSB
Демонстрація як використовується BadUSB атака 

## DigiSparkExample.cpp: 

Цей код використовує бібліотеку DigiKeyboard.h, яка дозволяє DigiSpark імітувати клавіатурні натискання. Скрипт автоматично відкриває командний рядок, вводить команду, а потім закриває командний рядок. Зверніть увагу, що такий код може бути модифікований для виконання інших команд, що може призвести до небажаних наслідків.

## DigiSparkExample2.cpp: 

Один з викликів при використанні DigiSpark BadUSB полягає в тому, що він "не знає" про поточну розкладку клавіатури системи, до якої підключений. Якщо система використовує українську розкладку або будь-яку іншу нестандартну розкладку, команди, введені через DigiSpark, можуть бути сприйняті неправильно.

Один із способів обійти цю проблему - спробувати перевести клавіатурну розкладку на стандартну (наприклад, англійську) перед введенням команд. 

Цей скрипт спершу намагається переключити мову вводу на англійську, що допомагає уникнути проблем із розкладкою. Проте, зверніть увагу, що це може не завжди працювати надійно, оскільки конфігурація зміни мови може відрізнятися в залежності від налаштувань системи користувача. Також, це підвищує шанси, що користувач помітить незвичайну активність, тому завжди використовуйте ці знання етично і відповідально.
