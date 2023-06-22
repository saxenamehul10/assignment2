#include <iostream>
#include <cstring>

class MyString {
private:
    char* str;

public:
    MyString(const char* s = "") {
        str = new char[strlen(s) + 1];
        strcpy(str, s);
    }

    ~MyString() {
        delete[] str;
    }

    MyString operator+(const MyString& other) {
        int newLength = strlen(str) + strlen(other.str) + 1;
        char* newStr = new char[newLength];
        strcpy(newStr, str);
        strcat(newStr, other.str);
        MyString result(newStr);
        delete[] newStr;
        return result;
    }

    void display() {
        std::cout << str << std::endl;
    }
};

int main() {
    MyString s1("Hello");
    MyString s2(" World");

    MyString s3 = s1 + s2;
    s3.display();

