#include <iostream>
#include <string>
using namespace std;

int convertRomanToInt(string s);
int romanCharValue(char r);

int main() {
    string input = "I";

    while (true) {
        cout << "Enter a Roman Number or Q to quit: ";
        getline(cin, input);
        if(input == "Q") break;
        cout << input << " = " << convertRomanToInt(input) << endl;
    }
    
}
int convertRomanToInt(string s) {
    int integerValue = 0;
    for(int i = 0; i < s.length(); i++) {
        if(romanCharValue(s[i]) < romanCharValue(s[i+1])) integerValue -= romanCharValue(s[i]);
        else integerValue += romanCharValue(s[i]);
    }
    return integerValue;
}
int romanCharValue(char r) {
    switch(r) {
        case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D': return 500;
        case 'M': return 1000;
    }
    return 0;
}