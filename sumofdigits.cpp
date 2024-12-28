#include <iostream>
using namespace std;

int main() {
    int num, FirstDigit, LastDigit;

    cout << "Enter a number: ";
    cin >> num;

    LastDigit = num % 10;

    do {
        FirstDigit = num;
        num = num / 10;
    } while (num > 0);

    int sum = FirstDigit + LastDigit;
    cout << "Answer is : " << sum << endl;

    return 0;
}
