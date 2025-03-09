#include <iostream>
#include "swcase.h"

using namespace std;

// Функция смены регистра строки
string switchCase(const string &input)
{
    string result;
    result.reserve(input.size()); // Резервируем память
    int mode;

    // Выбор мода
    while (true)
    {
        cout << "\nEnter mode:\n0. To lowercase\n1. To uppercase\nMode: ";

        if (!(cin >> mode) || (mode != 0 && mode != 1))
        {
            cerr << "\nError: Invalid mode. \n";
            cin.clear();             // Сброс флага ошибки
            cin.ignore(10000, '\n'); // Очистка ввода
            continue;
        }

        break;
    }

    for (unsigned char c : input)
    {
        if (mode)
        {
            // Перевод в верхний регистр для латиницы
            if (c >= 'a' && c <= 'z')
            {
                c = static_cast<char>(c - 32);
            }
            result += c;
        }
        else
        {
            // Перевод в нижний регистр для латиницы
            if (c >= 'A' && c <= 'Z')
            {
                c = static_cast<char>(c + 32);
            }
            result += c;
        }
    }

    return result;
}