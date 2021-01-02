# Машина на Тюринг

Да се реализира библиотека за ефективна работа с машини на Тюринг. Машините на Тюринг имат потенциално безкрайна двупосочна лента, в която могат да бъдат записвани произволни символи. 

Преход в Машината на Тюринг се задава със следния синтаксис:

<състояние> ::= { <низ> }
<команда> ::= L | R | S
<преход> ::= <символ><състояние> -> <символ><състояние><команда>

Командите управляват движението на главата, съответно наляво (L), надясно (R), или без промяна (S). Специалното състояние {halt} спира изпълнението на машината.

Пример: 6{increment} -> 7{decrement}L. Интерпретацията на примера е следната: ако на лентата (под текущото положение на главата) е записан символа 6 и машината е в състояние {increment}, да се замени 6 със 7, да се премине в състояние {decrement}, и да се придвижи лентата наляво.

Машината на Тюринг да може да се конструира от множество преходи, подадени като вход на програмата, като автоматично се извлекат състоянията на машината, командите и преходите. Да се поддържа възможност да се извърши изпълнение на машината над някаква лента, получена като вход. Като резултат да се изведе състоянието на лентата и позицията на главата при достигане до състояние {halt}. Внимание: тъй като лентата е безкрайна, да се изведе само тази част от нея, която е претърпяла промени по време на изпълнението на машината.

Да се поддържат следните операции над машини на Тюринг:

Композиция на две машини на Тюринг
Разклонение на две машини на Тюринг относно трета (пуска се третата машина над даден вход и в зависимост дали крайният резултат е 1 (истина) или 0 (лъжа), се пуска първата или втората машина над същия вход)
машина на Тюринг, реализираща while-цикъл над дадена машина на Тюринг, където условието се задава с друга машина на Тюринг.

Да се реализира програма, която прочита от входен файл информация за машина на Тюринг и състояние на лентата, след което изпълнява машината на Тюринг върху така зададената лента. Ако машината завърши, да се изведе в изходен файл състоянието на изходната лента.

Бонуси:
да се реализира многолентова машина на Тюринг и преобразуването ѝ до еднолентова
да се реализира недетерминирана машина на Тюринг и преобразуването ѝ до детерминирана

