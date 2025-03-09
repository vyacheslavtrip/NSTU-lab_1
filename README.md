# NSTU-lab_1

## Использование

1. Клонируйте репозиторий:

    ```bash
    git clone https://github.com/vyacheslavtrip/NSTU-lab_1
    ```

2. Скомпилируйте проект с помощью вашего компилятора C++ (например, g++):

    ```bash
    g++ main.cpp swcase.cpp ifpalindrome.cpp vowelcount.cpp punct_remove.cpp -o program
    ```

3. Запустите исполняемый файл:

    ```bash
    ./program
    ```
    
## Задание

**Строки.** Реализовать функции, связанные со строками (по одной функции на студента):

a.	Подсчет количества гласных букв в строке - `vowelcount.cpp`;
b.	Привидение всех букв к верхнему и нижнему регистру - `swcase.cpp`;
c.	Удаление всех знаков препинания и служебных символов (кроме пробела) из строки - `punct_remove.cpp`;
d.	Проверка, является ли строка палиндромом - `ifpalindrome.cpp`.


## Структура проекта

- `main.cpp`: Основной файл программы.
- `swcase.cpp`, `vowelcount.cpp`, `ifpalindrome.cpp`, `punct_remove.cpp`: Файлы реализации функций.
- `swcase.h`, `vowelcount.h`, `ifpalindrome.h`, `punct_remove.h`: Заголовочные файлы функций.
- `README.md`: Файл с описанием работы.

## Авторы

- Соколов Вячеслав (swcase, main)
- Костин Константин (vowelcount, ifpalindrome)
- Шамовцев Савелий (punct_remove)
