#include <iostream>
#include "swcase.h"
#include "vowelcount.h"
#include "ifpalindrome.h"
#include "punct_remove.h"

int main()
{
    using namespace std;

    while (true)
    {
        string user_input;

        cout << "\nEnter string: ";
        getline(cin, user_input); // Ввод строки пользователем

        while (true)
        {
            int choice;
            cout << "\nEnter choice:\n0. Exit\n1. Switching case\n2. Count vowels\n3. Is palindrome\n4. Remove punctuation\nChoice: ";

            // Проверка на корректность ввода числа
            if (!(cin >> choice))
            {
                cout << "\nError: Invalid choice. Please enter a number.\n";
                cin.clear();             // Сброс флага ошибки
                cin.ignore(10000, '\n'); // Очистка ввода
                continue;
            }

            cin.ignore(10000, '\n'); // Очищаем остатки ввода (например, символ новой строки после ввода числа)

            switch (choice)
            {
            case 0:
                cout << "\nBye!\n";
                return 0; // Выход из программы

            case 1:
                cout << "\nResult: " << switchCase(user_input) << endl;
                cin.ignore(10000, '\n');
                break;

            case 2:
                cout << "\nResult: " << countVowels(user_input) << endl;
                break;

            case 3:
                if (isPalindrome(user_input))
                {
                    cout << "\nYes" << endl;
                }
                else
                {
                    cout << "\nNo" << endl;
                }
                break;

            case 4:
                cout << "\nResult: " << removePunct(user_input) << endl;
                break;

            default:
                cout << "\nError: Invalid choice.\n";
                continue;
            }

            // После выполнения действия по выбору, программа снова попросит ввести строку
            break;
        }
    }

    return 0;
}
