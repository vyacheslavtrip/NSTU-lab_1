#include <iostream>
#include "swcase.h"

int main()
{
    using namespace std;

    while (true)
    {
        string user_input;

        cout << "\nEnter string: ";
        getline(cin, user_input);

        while (true)
        {
            int choice;
            cout << "\nEnter choice:\n0. Exit\n1. Switching case\nChoice: ";

            if (!(cin >> choice))
            {
                cout << "\nError: Invalid choice. Please enter a number.\n";
                cin.clear();             // Сброс флага ошибки
                cin.ignore(10000, '\n'); // Очистка ввода
                continue;
            }

            cin.ignore(10000, '\n'); // Очищаем остатки ввода

            switch (choice)
            {
            case 0:
                cout << "\nBye!\n";
                return 0; // Выход из программы

            case 1:
                cout << "\nResult: " << switchCase(user_input) << endl;
                break;

            default:
                cout << "\nError: Invalid choice.\n";
                continue;
            }

            cin.ignore(10000, '\n');
            break;
        }
    }

    return 0;
}