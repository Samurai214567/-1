#include <iostream>
#include <vector>
#include <cctype>
using namespace std;

int main() {
    vector<char> src = {'a','1','b','2','c','3'};
    vector<char> letters, digits;

    for (char ch : src) {
        if (isdigit(ch)) digits.push_back(ch);
        else if (isalpha(ch)) letters.push_back(ch);
    }

    cout << "Letters: ";
    for (char c : letters) cout << c << ' ';
    cout << "\nDigits: ";
    for (char c : digits) cout << c << ' ';
    cout << '\n';
    return 0;
}
