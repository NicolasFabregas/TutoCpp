// test_plus_plus.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include "headers/utils.hpp"
#include "headers/util.hpp"
#include "headers/structtest.hpp"
#include "headers/classtest.hpp"
#include "headers/window.hpp"
#include "headers/unit.hpp"
#include "headers/character.hpp"
#include "headers/quest.hpp"
#include "headers/queststatus.hpp"
#include "headers/someone.hpp"
#include "headers/english.hpp"
#include "headers/indonesian.hpp"
#include <iostream>
#include <string>
#include <vector>
#include <cassert>
#include <fstream>
#include <array>
#include <stack>
#include <list>
#include <unordered_map>
#include <unordered_set>
#include <map>
#include <set>


enum class Element:int{
    earth,
    air,
    fire,
    water
};

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

void callMethViaHpp(){
    helloWorld();
}

void createPlayer(std::string name, int level){
    try{
        if(name==""){
            throw std::invalid_argument("pas le bon argument name");
        }
        if(level<=0){
            throw std::invalid_argument("pas le bon argument level");
        }
        std::cout << "Creation de " << name << ", de niveau " << level << std::endl;
        // assert(name!="" && "pas de nom definit");
        // assert(level>0 && "niveau negatif ou 0");
    }
    catch(const std::invalid_argument& e){
        std::cout<< e.what() <<std::endl;
    }
    catch(const std::exception& e){
        std::cout<< "une erreur s'est produite" <<std::endl;
    }
}

void testError(){
        createPlayer("robert", 34);
        createPlayer("robert", -34);
        createPlayer("", 34);
}

void testEnum(){
    Element e{Element::water};
    std::cout<< static_cast<int>(e) << std::endl;
    e=Element::air; 
    std::cout<< static_cast<int>(e) << std::endl;
    if(e==Element::water){
        std::cout<< static_cast<int>(e) << std::endl;
    }
    else{
        e=Element::fire;
        std::cout<< static_cast<int>(e) << std::endl;
    }
}

/* std::ios::out,
* std::ios::in;
* std::ios::binary; (image)
* std::ios::trunc
* std::ios::ate (at the end)
* std::ios::app (append)
*/
void fichiers(){
    std::ifstream f{"animals.txt"};
    if(f.is_open()){
        std::string name{" "};
        f>> name;
        std::cout << name << std::endl;
        f>> name;
        std::cout << name << std::endl;
        f.close();
    }
    std::ofstream f1{"data.txt"};
    if(f1.is_open()){
        int level=15;
        f1 << "Hello World ! " << level;
        //f1 << level;
    }
    std::ifstream f2{"animals.txt"};
    if(f2.is_open()){
        std::string name{" "};
        while(std::getline(f2 >> std::ws,  name)){
            std::cout << name << std::endl;
        }
        f2.close();
    }
}

void testNamespace(){ 
    Util::testNS();
    testNSGlobal();
}

void testStruct(){
    struct Product p{"papier toilettes", 1.45f, true};
    std::cout << "prix : " << p.price << std::endl;
    p.price*=1.2;
    std::cout << "prix : " << p.price << std::endl;

}

void testObj(){
    Point p1{};
    Point p2{p1};
    //std::cout << "x : " << p1.x << ", y : " << p1.y << std::endl;
    // p1.x=45;
    // std::cout << "x : " << p1.x << ", y : " << p1.y << std::endl;
}

void testWindow(){
    Window w1{};
    Window w2{w1};
    Window newApp{"azer Nico", 45, 67};
    newApp.run();
}

void testEncapsulation(){
    Window w1{"azer Nico", 45, 67};
    std::cout << w1.getTitle() << std::endl;
    // w1.setTitle("azerlkqsldqsidn qsdfqiusdfq qsdf");
    // std::cout << w1.getTitle() << std::endl;
    w1.setTitle("tralala");
    std::cout << w1.getTitle() << std::endl;

}

void testUnitPlayer(){
    Unit npc{11, "Forgeron en slip"};
    std::cout << npc.getName() << std::endl;
    std::cout << npc.getId() << std::endl;
    Character c{16, "gwendoline", 1};
    std::cout << c.getName() << std::endl;
    std::cout << c.getId() << std::endl;
    std::cout << c.getId() << std::endl;
    Quest q{"starting quest", "hunt wolves", npc.getId()};
    q.show();
    std::cout << (int)q.getStatus() << std::endl;

}

void testPolymorphisme(){
    English en{"Jack"};
    en.sayGoodNight();

    Indonesian id{"Bunda"};
    id.sayGoodNight();

    // Someone[10] someones;
}

void testArray(){
    std::array<int, 5> arr{78, 45, 96, 35, 21};
    for(const auto& element : arr){
        std::cout <<element <<std::endl;
    }
    for(const auto& element : arr){
        std::cout <<"- "<<element <<std::endl;
    }
    arr.fill(555);
    for(int i=0;i<arr.size();i++){
        std::cout <<"--  "<<arr[i] <<std::endl;
    }
    std::cout <<arr[2] <<std::endl;
    arr[2]=2;
    std::cout <<arr[2] <<std::endl;
    std::cout <<arr.at(2) <<std::endl;
    std::cout << "taille : " << arr.size() <<std::endl;
    // std::cout << "taille : " << std::size(arr) <<std::endl; //a privilegier, mais marche pas avec c++17
    // std::empty(arr) marche pas
    if(arr.empty()){
        std::cout << "Oui" <<std::endl;
    }
    else{
        std::cout << "Non" <<std::endl;
    }
        std::cout << arr.front() <<std::endl;
        std::cout << arr.back() <<std::endl;
}

void testArrayObject(){
    std::vector<std::string> arr{};
    arr.push_back("azer");
    if(arr.empty()){
        std::cout << "vide" <<std::endl;
    }
    else{
        std::cout << "rempli" <<std::endl;
    }
    arr.pop_back();
    if(arr.empty()){
        std::cout << "vide" <<std::endl;
    }
    else{
        std::cout << "rempli" <<std::endl;
    }
    arr.push_back("azer");
    arr.push_back("azeraa");
    arr.clear();
    if(arr.empty()){
        std::cout << "vide" <<std::endl;
    }
    else{
        std::cout << "rempli" <<std::endl;
    }
    std::vector<std::string> copy{};
    copy=arr;
}

 void testArrayPolymorphisme(){
//     English en{"Jack"};
//     English en1{"Rick"};
//     English en2{"Morty"};
//     Indonesian id{"Bunda"};
//     // Someone s;
//     // s=new Indonesian("Kira");
//     std::vector<Someone*> people {};
//     people.push_back(&en);
//     people.push_back(&en1);
//     people.push_back(&en2);
//     people.push_back(&id);
//     for(auto& p : people){
//         p.sayGoodNight();
//     }
}

void testCharacteres(){
    std::string s{"Hello World !"};
    std::cout << s <<std::endl;
    std::cout << s[0] <<std::endl;
    std::cout << s.at(0) <<std::endl;
    std::cout << s.front() <<std::endl;
    std::cout << s.back() <<std::endl;
    s="Bonjour";
    s.push_back('!');
    std::cout << s.back() <<std::endl;
    s.pop_back();
    std::cout << s.back() <<std::endl;
    s.append(5, '!');
    std::cout << s <<std::endl;
    std::cout << s.length() <<std::endl;
    std::cout << s.size() <<std::endl;
    for(auto& c : s){
        std::cout << c <<std::endl;
    }
    std::cout << s.substr(2, 5) <<std::endl;
    std::string s1="azedfvbnjiklp";
    s.swap(s1);
    std::cout << s <<std::endl;
    std::cout << s1 <<std::endl;

    if(s1.starts_with("Bonj")){ // c++20
        std::cout << "Oui" <<std::endl;
    }
    
    if(s1.contains("Bonj")){ //c++20
        std::cout << "Oui" <<std::endl;
    }
    std::string_view aezr;
}

/*
* size(), empty(), push(), top(), pop(),
*/
void testPile(){
    std::stack<int> st;
    st.push(5);
    std::cout<< "element du haut : " << st.top() << std::endl;
    st.push(3);
    std::cout<< "element du haut : " << st.top() << std::endl;
    st.pop();
    std::cout<< "element du haut : " << st.top() << std::endl;
    std::cout<< "Taille : " << st.size() << std::endl;
    if(st.empty()){
        std::cout<< "Pile vide"<< std::endl;
    }
    st.push(7);
    st.push(9);
    st.push(12);
    st.push(31);
    while (!st.empty()){
        std::cout<< "element du haut : " << st.top() << std::endl;
        st.pop();
    }
}
/*
* front(), back(), size(), empty(), push_front(), push_back, pop_front(), pop_back, insert(), clear()
* sort(), reverse()
*/
void testList(){
    std::list<std::string> li{"azer", "qsdf"};
    std::cout<< "premier element " << li.front() << std::endl;
    std::cout<< "dernier element " << li.back() << std::endl;
    std::cout<< "taille " << li.size() << std::endl;
    if(li.empty()){
        std::cout<< "Liste vide"<< std::endl;
    }
    for(const auto& ele : li){
        std::cout<<"-" << ele << std::endl;
    }
    li.push_front("poiu");
    li.push_back("wxcv");
    for(const auto& ele : li){
        std::cout<<"-- " << ele << std::endl;
    }

    li.sort();
    for(const auto& ele : li){
        std::cout<<"---  "<< ele << std::endl;
    }
    li.reverse();
    for(const auto& ele : li){
        std::cout<<"----   "<< ele << std::endl;
    }

    li.pop_front();
    li.pop_back();
    for(const auto& ele : li){
        std::cout<<"-----    "<< ele << std::endl;
    }
}

/*
 insert()/erase(), at(), empty(), size(), contains(), 
*/
void testMap(){
    std::unordered_map<int, std::string> um1{{3, "arbre"}, {1, "Maison"}, {2, "Fourchette"}};
    std::cout<< um1[1] <<std::endl;
    um1[1]="Villa";
    std::cout<< um1[1] <<std::endl;
    um1[6]="Balloon";
    um1.insert({{7,"Racket"},{12, "Court"},{10, "Hat"}});
    um1.erase(3);
    for(const auto& [key, value] : um1){
        std::cout<<key<< " > " << value << std::endl;
    }
    if(um1.contains(7)){
        std::cout<< "Oui" <<std::endl;
    }
    
    std::map<int, std::string> um2{{3, "arbre"}, {1, "Maison"}, {2, "Fourchette"}};
    std::cout<< um2[1] <<std::endl;
    um2[1]="Villa";
    std::cout<< um2[1] <<std::endl;
    um2[6]="Balloon";
    um2.insert({{7,"Racket"},{12, "Court"},{10, "Hat"}});
    um2.erase(3);
    for(const auto& [key, value] : um2){
        std::cout<<key<< " > " << value << std::endl;
    }
    if(um2.contains(7)){
        std::cout<< "Oui" <<std::endl;
    }
}

/*
* insert()/erase(), clear(), size(), empty(),
*/
void testSet(){
    std::unordered_set<int> s{1, 5, 3, -8};
    
    for(const auto& element : s){
        std::cout<< element << std::endl;
    }
    s.insert(9);
    s.insert(5);
    s.insert({7, 12, 19});
    s.erase(9);
    if(s.find(5)!=std::end(s)){
        std::cout<< "Trouve ! 5" << std::endl;
    }
    if(s.find(15)!=std::end(s)){
        std::cout<< "Trouve ! 15" << std::endl;
    }
    if(s.contains(7)){
        std::cout<< "Trouve ! 7" << std::endl;
    }
    std::cout<< "nb d'elements : "<<s.size()<<std::endl;



    std::set<int> s1{1, 5, 3, -8};
    
    for(const auto& element : s1){
        std::cout<< element << std::endl;
    }
    
}

int main()
{
    // firstTutorial();
    // consoleInOut();
    // operators();
    // multipleFunctions();
    // callMethViaHpp();
    // testError();
    // testEnum();
    // fichiers();
    // testNamespace();
    // testStruct();
    // testObj();
    // testWindow();
    // testEncapsulation();
    // testUnitPlayer();
    // testPolymorphisme();
    // testArray();
    // testArrayObject();
    // // // testArrayPolymorphisme();
    // testCharacteres();
    // testPile();
    // testList();
    // testMap();
    testSet();

    std::cin.get(); 
    return 0;
}





