#include "../headers/indonesian.hpp"

#include <iostream>

void Indonesian::sayGoodNight() const noexcept{
    std::cout << _name << " : selamat malam "<< std::endl;
    Someone::sayGoodNightNotNull();
}

Indonesian::~Indonesian(){
    std::cout << _name << " : Destroy indonesian"<< std::endl;
}