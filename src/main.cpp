#include "rent_service.h"

int main() {
    Rent rent_system;
    int choice;
    
    while(true) {
        std::cout << "\n=== СИСТЕМА ОРЕНДИ RENT ===\n"
                  << "1. Додати квартиру\n"
                  << "2. Перегляд всіх\n"
                  << "3. Пошук за ID\n"
                  << "4. Орендувати\n"
                  << "5. Вийти\n"
                  << "Вибір: ";
        std::cin >> choice;
        
        switch(choice) {
            case 1: rent_system.add(); break;
            case 2: rent_system.show_all(); break;
            case 3: {
                int id;
                std::cout << "Введіть ID: ";
                std::cin >> id;
                rent_system.find(id);
                break;
            }
            case 4: {
                int id;
                std::cout << "Введіть ID для оренди: ";
                std::cin >> id;
                rent_system.rent_out(id);
                break;
            }
            case 5: return 0;
            default: std::cout << "Невірний вибір!\n";
        }
    }
}