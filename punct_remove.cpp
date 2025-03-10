#include "punctuation_remover.h"
#include <cctype>

std::string removePunctuation(const std::string& input) {
    std::string result;//added comment for test
    for (char c : input) {
        if (std::isalnum(c) || c == ' ') { // Сохраняем буквы, цифры и пробелы
            result += c;
        }
    }
    return result;
}
