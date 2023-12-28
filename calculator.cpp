#include <iostream>
using namespace std;
double num1, num2;
 char op;
int main() {
    setlocale(LC_ALL, "Russian");
    cout << "Введите оператор (+, -, *, /): ";
    cin >> op;
    cout << "Введите два числа: ";
    cin >> num1 >> num2;
    switch(op) {
        case '+':
            cout << num1 << " + " << num2 << " = " << num1 + num2;
            break;
        case '-':
            cout << num1 << " - " << num2 << " = " << num1 - num2;
            break;
        case '*':
            cout << num1 << " * " << num2 << " = " << num1 * num2;
            break;
        case '/':
            if (num2 != 0)
                cout << num1 << " / " << num2 << " = " << num1 / num2;
             else
                cout << "Ошибка! Деление на ноль.";
            break;
       
        }
            return 0;
    }


