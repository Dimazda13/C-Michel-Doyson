#include <iostream>

using namespace std;

int main() {
    int num1, num2, num3, result;

    cout << "Введите первое значение: ";
    cin >> num1;

    cout << "Введите второе значение: ";
    cin >> num2;

    cout << "Введите третье значение: "; 
    cin >> num3;

    result = (num1 + num2 + num3) / 3;
    cout << "Среднее значение результата: " << result;


    return 0;
}