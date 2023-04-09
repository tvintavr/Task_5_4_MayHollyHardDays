#include <iostream>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    int mayDay;
    int mayFirstDay;
    std::cout << "Введите первый майский день (1-7): ";
    std::cin >> mayFirstDay;
    std::cout << "Введите майский день (1-31): ";
    std::cin >> mayDay;
    if (mayDay < 1 || mayDay > 31 || mayFirstDay < 1 || mayFirstDay > 8) {
        std::cout << "Неверная дата";
    } else if   (   (mayDay >= 1 && mayDay <= 5)|| // Праздники с 1 по 5
                    (mayDay >= 8 && mayDay <= 10)|| // Праздники с 8 по 10
                    ((mayDay+mayFirstDay-1)%7==6)|| // Суббота
                    ((mayDay+mayFirstDay-1)%7==0)) { // Воскресенье
        std::cout << "Выходной";
    } else {
        std::cout << "Рабочий";
    }
}



