#pragma once
#include <vector>
#include "apartment.h"

class Rent {
    std::vector<Apartment> apartments;
    int next_id = 1;

public:
    void add();
    void show_all() const;
    void find(int id) const;
    void rent_out(int id);
};