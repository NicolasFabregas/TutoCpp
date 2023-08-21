

#include <string>
#include <iostream>
#include "../headers/classtest.hpp"
Point::Point(){
    std::cout << "creation de l'obj : " << this << std::endl;
}
Point::~Point(){
    std::cout << "destruction de l'obj : " << this << std::endl;
}
Point::Point(Point& p){
    std::cout << "creation de l'obj : " << this << " a partir d'un obj par copie" << std::endl;
}
Point::Point(Point&& p){
    std::cout << "creation de l'obj : " << this << " a partir d'un obj par reference" << std::endl;
}