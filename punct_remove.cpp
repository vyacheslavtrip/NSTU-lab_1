#include "punct_remove.h"
#include <cctype>


std::string removePunctuation(const std::string& input) {
    std::string result;//added comment for test 2

    for (char c : input) {
        if (std::isalnum(c) || c == ' ') {  // Сохраняем буквы, цифры и пробелы
            result += c;
        }
    }
    return result;
}
