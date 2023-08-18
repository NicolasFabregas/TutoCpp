// test_plus_plus.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include "headers/utils.hpp"
#include <iostream>
#include <string>
#include <vector>

//void helloWorld();

void setNumbersWithReference(int& a, int& b){
    a+=30;
    b-=10;
}

void setNumbersNoReference(int a, int b){
    a+=30;
    b-=10;
}

void printSum(int a, int b){
    std::cout << (a+b) << std::endl;
}

void printSum(float a, float b){
    std::cout << (a+b) << std::endl;
}

void firstTutorial(){
    using namespace std::literals;
    int a = 1;
    int b = 2;
    int c = a + b;
    bool is_secure{true};
    int some_number{ 144 };
    unsigned int unumber{ 15 };
    long big_number = 12'123'478;
    auto vartestautomated="12'123'478"s;
    double some_decimaln{ 14.f };
    std::string my_first_string{ "enfin" };
    my_first_string="azer";
    std::cout << my_first_string << std::endl;
    std::cout << big_number << std::endl;
    std::cout << is_secure << std::endl;
    std::cout << some_number << std::endl;
    std::cout << some_decimaln << std::endl;
    std::cout << unumber << std::endl;
    std::cout << "Hello World!\n" << "i want to be free" << c << std::endl;
    std::clog << "Logs!\n" << std::endl;
    std::cerr << "ERROR\n" << std::flush;
}

void consoleInOut(){
    std::cout << "good : " << std::cin.good() << std::endl;
    std::cout << "fail : " << std::cin.fail() << std::endl;
    std::cout << "bad : " << std::cin.bad() << std::endl;
    std::cout << "entrer qq chose" << std::endl;
    int number;
    std::cin >> number;
    std::cout << "nb saisi : " << number << std::endl;
    std::cout << "good : " << std::cin.good() << std::endl;
    std::cout << "fail : " << std::cin.fail() << std::endl;
    std::cout << "bad : " << std::cin.bad() << std::endl;
    std::cin.clear();

    std::cout << "entrer qq chose : ";
    std::string value1;
    std::cin >> value1;
    std::string uname;
    std::getline(std::cin, uname);

    std::cout << "entrer qq chose une nouvelle fois : ";
    std::getline(std::cin, uname);
    std::cout << "val saisie : " << value1 << std::endl;
    std::cout << "uname saisie : " << uname << std::endl;
    std::cin.clear();

    std::cout << "entrer qq chose : ";
    std::string value2;
    std::cin >> value2;
    std::string uname2;
    std::cin.ignore(255, '\n');
    std::cout << "entrer qq chose une nouvelle fois : ";
    std::getline(std::cin, uname2);
    std::cout << "val saisie : " << value2 << std::endl;
    std::cout << "uname2 saisie : " << uname2 << std::endl;
    std::cin.clear();
}

void operators(){
    int result1;
    result1 = 1+8 -9 *6 /5 % 4;
    std::cout << "Resultat : " << result1 << std::endl;
    bool result2;
    result2 = (true && !false) || true;
    std::cout << "Resultat : " << result2 << std::endl;

    std::string mycharlist = "salut a tous";
    for (char c:mycharlist){
        std::cout << c << std::endl;
    }
    int m=10;
    int n=12;
    std::cout << m << std::endl;
    std::cout << n << std::endl;
    setNumbersNoReference(m, n);
    std::cout << m << std::endl;
    std::cout << n << std::endl;
    setNumbersWithReference(m, n);
    std::cout << m << std::endl;
    std::cout << n << std::endl;

    printSum(m, n);
    float f1=12354.12;
    float f2=1.12;
    printSum(f1, f2);
}

void multipleFunctions(){
    auto func1 = [](int a)-> void 
    {
        std::cout << "Hello World ! " << a <<std::endl;
    };
    int number=6;
    auto func2 = [=]()-> void 
    {
        std::cout << number <<std::endl;
    };
    auto func3 = [=]() mutable -> void 
    {
        std::cout << ++number <<std::endl;
    };
    auto func4 = [&]() mutable noexcept -> void 
    {
        std::cout << ++number <<std::endl;
    };
    int x=7;
    int y=12;
    auto func5 = [&x, y]() mutable -> void 
    {
        x+=4;
        y+=6;
        std::cout << x << " - " << y <<std::endl;
    };
    auto func6 = [&]() mutable -> void 
    {
        x+=4;
        y+=6;
        std::cout << x << " - " << y <<std::endl;
    };

    func1(4);
    func2();
    func3();
    std::cout << number <<std::endl;

    func4();
    std::cout << number <<std::endl;

    func5();
    std::cout << x << " - " << y <<std::endl;

    func6();
    std::cout << x << " - " << y <<std::endl;
}


int main()
{
    
    helloWorld();
    // std::cout << " yes enorme " <<std::endl;
    // std::string uname;
    // std::getline(std::cin, uname);
    // std::cout << "val saisie : " << uname << std::endl;
    
    return 0;
}





