
#include "../headers/quest.hpp"
#include "../headers/queststatus.hpp"
#include <iostream>

Quest::Quest (const std::string& name, const std::string& description, int unitId) noexcept:_name(name), _description(description){
    _status=QuestStatus::disabled;
}
void Quest::show() const noexcept{
    std::cout << _name << ", " << _description << std::endl;
}

QuestStatus Quest::getStatus(){
    return _status;
}
