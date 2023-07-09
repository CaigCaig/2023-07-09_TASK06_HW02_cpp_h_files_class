#include <iostream>
#include <Windows.h>
#include <string>
#include "counter.h"

int main()
{
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    Counter counter;
    std::string operation;
    std::cout << "Вы хотите указать начальное значение счётчика? Введите да или нет: ";
    std::cin >> operation;
    if (operation == "да") counter.setup_counter();
    do {
        std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
        std::cin >> operation;
        if (operation == "+") counter.inc();
        if (operation == "-") counter.dec();
        if (operation == "=") counter.print_counter();
    } while (operation != "x");
    std::cout << "До свидания!" << std::endl;
    system("pause");
}


