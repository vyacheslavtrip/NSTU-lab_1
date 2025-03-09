#include "ifpalindrome.h"

bool isPalindrome(const std::string& str) {
    std::string cleanedStr;
    
    std::remove_copy_if(str.begin(), str.end(), std::back_inserter(cleanedStr),
                         [](unsigned char c) { return !std::isalnum(c); });
    
    std::transform(cleanedStr.begin(), cleanedStr.end(), cleanedStr.begin(), ::tolower);

    int n = cleanedStr.size();
    for (int i = 0; i < n / 2; ++i) {
        if (cleanedStr[i] != cleanedStr[n - 1 - i]) {
            return false;
        }
    }
    return true;
}