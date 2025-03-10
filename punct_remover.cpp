#include "punct_remove.h"
#include <cctype>

std::string removePunct(const std::string& input) {
    std::string result;
    for (char c : input) {
        if (std::isalnum(c) || c == ' ') {  // Сохраняем буквы, цифры и пробелы
            result += c;
        }
    }
    return result;
}
