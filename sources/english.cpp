#include "../headers/english.hpp"

#include <iostream>

void English::sayGoodNight() const noexcept{
    std::cout << _name << " : good Night "<< std::endl;
}
English::~English(){
    std::cout << _name << " : Destroy english"<< std::endl;
}