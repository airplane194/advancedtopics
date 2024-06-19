#pragma once

#include <map>
#include <sstream>
#include <string>
#include <vector>


size_t countDigits(const std::string& input);

std::map<int, std::string> buildIdStringMap(const std::vector<std::string>& input);

bool isPalindrome(const std::string& input);
size_t countPalindromes(const std::string& input);

class StringSplitter {
  public:
    StringSplitter(char sep, std::vector<std::string>& target) : sep(sep), target(target) {}

    ~StringSplitter() {}

    void operator()(char c) {
        if (c == sep) {
            if (!temp.empty()) {
                target.push_back(temp);
                temp = "";
            }
        }
        else {
            temp += c;
        }
    }

    void flush() {
        if (!temp.empty()) {
            target.push_back(temp);
            temp = "";
        }
    }
private:
    char sep;
    std::vector<std::string>& target;
    std::string temp;
};
