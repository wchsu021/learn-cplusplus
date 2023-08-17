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
    void Iteration() {
        for (string::size_type ix = 0; ix != _str.size(); ++ix) {
            cout << _str[ix] << endl;
        }
    }
    void Copy(string& newStr) {
        newStr = _str;
    }
    string GetSubstring(int loc, int length) { return _str.substr(loc, length); }
    bool FindSubstring(string substr) {
        if (_str.find(substr) != string::npos) return true;
        else return false;
    }

 private:
    string _str;
};

class CharArraySelf
{
 public:
    CharArraySelf(): _charArray(0) {};
    CharArraySelf(char _char): _charArray(_char) {};

    int GetLength() { return strlen(_charArray); }
    void Iteration() {
        for (int i = 0; i < strlen(_charArray); i++) {
            cout << _charArray[i] << endl;
        }
    }
    void Copy(char* newArr) {
        strcpy(newArr, _charArray);
        // sprintf(newArr, _charArray);
    }
    void GetSubstring(int loc, int length) {
        char newt[200];   
        // copy j-i chars from position t+i to newt array
        strncpy(newt, loc, length);
        // now null terminate
        newt[length] = 0;
    }
    bool FindSubstring(char* substr) {
        char *pch;
        pch = strstr(_charArray, substr);
        if (pch != NULL) return true;
        else return false;
    }

 private:
    char _charArray[100];
};

#endif