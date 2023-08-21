#include "../headers/character.hpp"
#include "../headers/unit.hpp"
#include <iostream>
#include <string>

Character::Character (int id, const std::string& name, int level) noexcept :Unit(id, name), _level(level){

}

int Character::getLevel () const{
    return this->_level;
}