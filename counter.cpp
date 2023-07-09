#include <iostream>
#include <Windows.h>
#include <string>
#include "counter.h"

Counter::Counter() {
    count = 1;
}

void Counter::inc() {
    this->count++;
}

void Counter::dec() {
    this->count--;
}

void Counter::print_counter() {
    std::cout << this->count << std::endl;
}

void Counter::default_counter() {
    this->count = 1;
}

void Counter::setup_counter() {
    std::string s;
    bool f;
    do {
        f = TRUE;
        std::cout << "Введите начальное значение счётчика: ";
        try {
            std::cin >> s;
            this->count = static_cast<double>(std::stoi(s));
        }
        catch (const std::invalid_argument&) {
            std::cout << "Неверный ввод!" << std::endl;
        }
    } while (f == FALSE);
}