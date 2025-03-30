#include "rent_service.h"
#include <iostream>
#include <limits>

void Rent::add() {
    // Ваша реалізація методу add()
    Apartment apt;
    apt.id = next_id++;
    
    std::cout << "\nДодавання квартири:\n";
    std::cout << "Адреса: ";
    std::cin.ignore();
    std::getline(std::cin, apt.address);
    
    std::cout << "Кількість кімнат: ";
    while(!(std::cin >> apt.rooms)) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Некоректне значення. Спробуйте ще раз: ";
    }
    
    std::cout << "Ціна оренди ($): ";
    std::cin >> apt.price;
    
    apt.is_available = true;
    apartments.push_back(apt);
    std::cout << "Додано квартиру #" << apt.id << "!\n";
}

void Rent::show_all() const {
    for(const auto& apt : apartments) {
        apt.print();
    }
}

void Rent::find(int id) const {
    for(const auto& apt : apartments) {
        if(apt.id == id) {
            apt.print();
            return;
        }
    }
    std::cout << "Квартиру з ID " << id << " не знайдено.\n";
}

void Rent::rent_out(int id) {
    for(auto& apt : apartments) {
        if(apt.id == id && apt.is_available) {
            apt.is_available = false;
            std::cout << "Квартиру #" << id << " орендовано!\n";
            return;
        }
    }
    std::cout << "Квартиру з ID " << id << " не знайдено або вже зайнята.\n";
}