#pragma once
#include <string>
#include <iostream>

struct Apartment {
    int id;
    std::string address;
    int rooms;
    double price;
    bool is_available;

    void print() const {
        std::cout << "ID: " << id << "\n"
                  << "Адреса: " << address << "\n"
                  << "Кімнат: " << rooms << "\n"
                  << "Ціна: $" << price << "\n"
                  << "Статус: " << (is_available ? "Вільна" : "Зайнята") << "\n\n";
    }
};