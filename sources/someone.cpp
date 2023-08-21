#include "../headers/someone.hpp"
#include <iostream>
Someone::Someone (const std::string& name) noexcept: _name(name)
{

}
void Someone::sayGoodNightNotNull () const noexcept{
    std::cout << _name << " : ... "<< std::endl;
}
Someone::~Someone(){
    std::cout << _name << " : Destroy Someone"<< std::endl;
}