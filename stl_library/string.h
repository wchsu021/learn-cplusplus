#ifndef STRING_H
#define STRING_H

#include <string>

using namespace std;

class StringSelf
{
 public:
    StringSelf(): _str(0) {};
    StringSelf(string str): _str(str) {};

    int GetLength() { return _str.size(); }
    void Print() {
        for (string::size_type ix = 0; ix != _str.size(); ++ix)
            cout << _str[ix] << endl;
    }
    string GetSubstring(int loc, int length) { return _str.substr(loc, length); }

 private:
    string _str;
};

class CharArraySelf
{
 public:
    CharArraySelf(): _charArray(0) {};
    CharArraySelf(char _char): _charArray(_char) {};

 private:
    char _charArray[100];
};

#endif