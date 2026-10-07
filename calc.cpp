#include <iostream>
using namespace std;

int main() {
    int first, second, operation;
    double result = 0;

    cout << "Перше число: ";
    cin >> first;

    cout << "Операція (1 +, 2 -, 3 *, 4 /): ";
    cin >> operation;

    cout << "Друге число: ";
    cin >> second;

    switch (operation) {
        case 1: result = first + second; break;
        case 2: result = 0; break;
        case 3: result = 0; break;
        case 4:
            if (second == 0) {
                cerr << "Ділення на нуль неможливе\n";
                return 1;
            }
            result = 0;
            break;
        default:
            cerr << "Невідома операція\n";
            return 1;
    }

    cout << "Результат: " << result << "\n";
    return 0;
}
