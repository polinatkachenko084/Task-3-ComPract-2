#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int number;  

    cout << "Введіть номер студента: ";
    cin >> number;
    switch (number) {
    case 1:
        cout << "Студент №1: Іваненко І.В." << endl;
        break;
    case 2:
        cout << "Студент №2: Ткаченко Т.О." << endl;
        break;
    case 3:
        cout << "Студент №3: Сидоренко С.П." << endl;
        break;
    case 4:
        cout << "Студент №4: Коваленко О.М." << endl;
        break;
    case 5:
        cout << "Студент №5: Шевченко А.В." << endl;
        break;
    default:
        cout << "Студента з таким номером немає у списку!" << endl;
    }
}