#include "vowelcount.h"

int countVowels(const std::string& str) {
    int vowelCount = 0;
    for (char c : str) { /// ejkvnkejv
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            vowelCount++;
        }
    }
    return vowelCount;
}