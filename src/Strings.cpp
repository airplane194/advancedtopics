#include "Strings.hpp"

size_t countDigits(const std::string& input) {
    int count = 0;
    for(char i : input) {
        if (i >= '0' && i <= '9') count++;
    }   return count;
}

std::map<int, std::string> buildIdStringMap(const std::vector<std::string>& input) {
    std::map<int, std::string> result;
    for (std::string s : input) {
        bool keyAppeared = false;
        std::string id;
        std::string key;
        if (!(s.at(0) >= '0' && s.at(0) <= '9')) {
            throw std::runtime_error(std::string("Not a number at the start!!!"));
        }
        else {
            for (char i : s) {
                if (i >= '0' && i <= '9' && !keyAppeared) {
                    id += i;
                }
                else {
                    keyAppeared = true;
                    key += i;
                    if (i >= '0' && i <= '9') {
                        throw std::runtime_error(std::string("Another id appeared!!!"));
                    }
                }
            }
        }
        result.insert({std::stoi(id), key});
    }
    return result;
}

bool isPalindrome(const std::string& input) {
    return false;
}

size_t countPalindromes(const std::string& input) {
    return 0;
}


