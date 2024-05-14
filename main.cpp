#include <iostream>
using namespace std;

int num1,num2;
char opperation;


float calculate(int number1, int number2, char opperation) {
    switch (opperation) {
        case '+':
            return number1 + number2;
        case '-':
            return number1 - number2;
        case '/':
            return number1 / number2;
        case 'x':
            return number1 * number2;
        default: return 0;
    }
}

int main() {
    cout << "Input Number 1" << endl;
    cin >> num1;
    cout << "Input your operation" << endl;
    cin >> opperation;
    cout << "Now Choose Your Second Number" << endl;
    cin >> num2;

    cout << "Your final number is :" << calculate(num1,num2,opperation) << endl;

    return 0;
}
