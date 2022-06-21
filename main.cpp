#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::string;

void toUpperCase(string &str) {
    for (char &i : str) i = (char) toupper(i);
}

void toLowerCase(string &str) {
    for (char &i : str) i = (char) tolower(i);
}

int main() {
    cout << "Using std::cout to output string" << endl;
    printf("Using printf() to output string\n");

    string str1 = "sample string";
    string str2 = "sample string with appended text";

    cout << "str1.length() >>  " << str1.length() << endl;
    cout << "str1.compare(str2) >> " << str1.compare(str2) << endl;
    cout << "str1.find('a') >> " << str1.find('a') << endl;

    toUpperCase(str1);
    toLowerCase(str2);

    cout << "str1 after toUpperCase(str1) >> " << str1 << endl;
    cout << "str2 after toLowerCase(str2) >> " << str2 << endl;
    cout << "str1 + str2 >> " << str1 + str2 << endl;

    return 0;
}
