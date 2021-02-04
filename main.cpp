#include "program.h"
#include <iostream>
#include <string>

using namespace std;

int inputInt(const string &str) {
    int n;
    cout << str;
    cin >> n;

    while (cin.fail() || cin.get() != '\n') {
        cin.clear();
        cin.ignore(cin.rdbuf()->in_avail());
        cout << "Ошибка. Повторите ввод " << endl;
        cout << str;
        cin.clear();
        cin >> n;
    }

    return n;
}

int *inputMass(int n) {
    int *arr = new int(n);

    for (int i = 0; i < n; i++) {
        const string s;
        arr[i] = inputInt("Введите " + to_string(i) + " число массива: ");
    }

    return arr;
}

int main() {
    int n, ch;
    n = inputInt("Колличество элементов: ");
    int *arr = inputMass(n);
    ch = inputInt("Какое число ищем?: ");
    cout << "Позиция искомого числа: " << binarySearch(arr, 0, n - 1, ch);

    return 0;
}