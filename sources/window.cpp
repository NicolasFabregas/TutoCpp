

#include <string>
#include <iostream>
#include "../headers/window.hpp"
// Window::Window(){
//     std::cout << "creation de l'obj : " << this << std::endl;
// }
Window::Window(const std::string title="ya rien", int width=999, int height=1111):title(title), width(width), height(height){
    std::cout << "ma fenetre s'appelle : " << title << std::endl;
}

Window::~Window(){
    std::cout << "destruction de l'obj : " << this << std::endl;
}

Window::Window(Window& p){
    std::cout << "creation de l'obj : " << this << " a partir d'un obj par copie" << std::endl;
}

Window::Window(Window&& p){
    std::cout << "creation de l'obj : " << this << " a partir d'un obj par reference" << std::endl;
}

void Window::run() const noexcept{
    std::cout << "execution de la methode run : " << this << std::endl;
}

std::string Window::getTitle() const{
    return this->title;
}

void Window::setTitle(std::string title){
    if(title.length()>20){
        throw new std::invalid_argument("le nom doit etre <20 caracteres");
    }
    this->title=title;
}