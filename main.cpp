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
#include "headers/number.hpp"
#include "headers/time.hpp"
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
#include <algorithm>
#include <memory>
#include <chrono>
#include <thread>
#include <mutex>


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

/*
* std::begin(), std::cbegin(), std::end(), std::cend(), std::next(), std::prev(),
* std::rbegin(), std::rend(),
*/
void testIterateur(){
    std::string sentence{"bonjour tt le monde ! "};
    std::string::iterator it{std::begin(sentence)};
    std::string::const_iterator cit{std::cbegin(sentence)};

    
    std::cout << *it<< std::endl;
    std::cout << *it<< std::endl;
    *it='T';
    std::cout << *it<< std::endl;





    // std::vector<int> vec{1,2,3,4,5};
    // std::vector<int>::iterator it2{std::begin(vec)};
    std::vector<std::string> vec{"Youpi"};
    std::vector<std::string>::iterator it2{std::begin(vec)};
    std::cout << *it<< std::endl;
    it=std::next(it);
    std::cout << *it<< std::endl;
    for (auto it = std::begin(vec);it!=std::end(vec);it++){
        std::cout << *it<< std::endl;
    }
    std::cout << "Oui" << std::endl;


}


/*
* std::fill(),
* std::equal(),
* std::search(), std::find(), std::replace(),
* std::count(),
* std::sort(), std::reverse(),
* std::remove(),  std::erase(),
* std::swap(),
std::all_of(), std::any_of(), std::none_of(),
*/
void print_elements(int n){
    std::cout << n <<std::endl;
}

bool is_pair(int n){
    return n%2==0;
}

void testAlgo(){
    std::vector<int> vec{1,2,3,4,5};
    for (const auto& element : vec){
        std::cout << element <<std::endl;
    }
    std::fill(std::begin(vec), std::end(vec), 0);
    vec[2]=-3;
    for (const auto& element : vec){
        std::cout << element <<std::endl;
    }
    std::vector<int> vec1{1,2,3,4,5};
    std::vector<int> vec2{1,2,3,4,5};
    if(std::equal(std::begin(vec1), std::end(vec1), std::begin(vec2), std::end(vec2))){
        std::cout <<"1 Oui !"<< std::endl;
    }
    
    std::vector<int> vec3{1,2,3,4,5};
    auto begin=std::begin(vec3);
    auto end=std::end(vec3);
    if(std::find(begin, end, 3)!=end){
        std::cout <<"2 Oui !"<< std::endl;
    }


    std::string s="Bonjour";
    std::string search_term="jour";
    auto s_begin=std::begin(s);
    auto s_end=std::end(s);
    auto search_begin=std::begin(search_term);
    auto search_end=std::end(search_term);
    if(std::search(s_begin, s_end, search_begin, search_end)!=s_end){
        std::cout <<"3 Oui !"<< std::endl;
    }


    s="Bonjour";
    s_begin=std::begin(s);
    s_end=std::end(s);
    std::cout <<std::count(s_begin, s_end, 'o')<< " occurences de o dans bonjour"<< std::endl;


    vec={5, 7, 3, 1, 9, 4, 8, 6, 45, 458, -84};
    auto begin2=std::begin(vec);
    auto end2=std::end(vec);
    std::sort(begin2, end2);
    for (const auto& element : vec){
        std::cout << element <<std::endl;
    }


    std::string random_s{"lala lili lulu lele lyly"};
    std::cout << random_s <<std::endl;
    std::replace(std::begin(random_s), std::end(random_s), 'o', 'i');
    std::cout << random_s <<std::endl;


    vec={5, 7, 3, 1, 9, 4, 8, 6, 45, 458, -84};
    std::erase(vec, 5);
    for (const auto& element : vec){
        std::cout << element <<std::endl;
    }


    int a=4;
    int b=12;
    std::cout << "a="<< a<< ", b="<< b <<std::endl;
    std::swap(a, b);
    std::cout << "a="<< a<< ", b="<< b <<std::endl;

    
    vec={1,2,3,4,5};
    begin2=std::begin(vec);
    end2=std::end(vec);

    std::for_each(begin2, end2, print_elements);


    vec={2,4,6,8,0};
    begin2=std::begin(vec);
    end2=std::end(vec);
    std::cout <<"all_of :" << std::all_of(begin2, end2, is_pair) <<std::endl;


    vec={1,3,5,7,9};
    begin2=std::begin(vec);
    end2=std::end(vec);
    std::cout <<"none_of :" << std::none_of(begin2, end2, is_pair) <<std::endl;


    vec={0,1,3,5,7,9};
    begin2=std::begin(vec);
    end2=std::end(vec);
    std::cout <<"any_of :" << std::any_of(begin2, end2, is_pair) <<std::endl;
    std::vector<int>::iterator res=std::min_element(vec.begin(), vec.end());
    std::cout <<"min :" << *res <<std::endl;
}

/*
* int sum(int a, int b), double sum(double a, double b) pas terrible d'avoir une methode par type de données
* T sum(T a, T b) mieux
* on peut choisir un autre calcul pour un cas, par exemple somme de booleens
*/
void testGenericite(){
    std::list<int> someList{1, 2, 3, 4, 5};
    for (const auto& element : someList){
        std::cout << element << std::endl;
    }
    std::list<std::string> anotherList{"aaa", "bbb", "ccc"};
    for (const auto& element : anotherList){
        std::cout << element << std::endl;
    }

    auto r1 = sum(4,7);
    std::cout << r1 << std::endl;
    auto r2=sum(7.2, 3.1);
    std::cout << r2 << std::endl;
    auto r3=sum(true, false);
    std::cout << r3 << std::endl;

    DataContainer<int> dc1{25, true};
    std::cout << dc1.getN()<<std::endl;
    std::cout << dc1.getM()<<std::endl;

    DataContainer<std::string> dc2{"Hello", false};
    std::cout << dc2.getN()<<std::endl;
    std::cout << dc2.getM()<<std::endl;
}

/*
* <type_retour> operators(...)
* <object>.operator+(<args>)
*/
void testSurchargeOperateur(){
    nico::time t1{12, 23, 34};
    std::cout << t1 << std::endl;
    nico::time t2{3, 11, 05};
    std::cout << t2 << std::endl;
    std::cout << (t1+t2) << std::endl;
    std::cout << (t1+15) << std::endl;
    std::cout << (15+t1) << std::endl;
}

void change_value_in_method_only(int n){
    n*=2;
}
void change_value(int& n){
    n*=2;
}
void change_value(int* n){  //demande une adresse
    *n *=2;
}


/*
* en c : malloc, free
* en swift(ancien cpp) : new, delete
* en c++, smart pointer, mais on s'en sert pas vraiment sauf pour du vieux code
* c++ : unique_ptr, shared_ptr, weak_ptr
* std::move
* ptr : swap(), reset(), get(), lock(), release()
*/
void testPointeurs(){
    int n=38;
    int *pointer_to_n=&n;
    std::cout<< "n= "<<n<< ", valeur de variable "<<std::endl;
    std::cout<< "&n= "<<&n<< ", adresse de variable "<<std::endl;
    std::cout<<"*pointer_to_n= "<<*pointer_to_n<< ", valeur de variable "<<std::endl;
    std::cout<<"&pointer_to_n= "<<&pointer_to_n<< ", adresse de variable "<<std::endl;
    std::cout<<"pointer_to_n= "<<pointer_to_n<< ", adresse de pointeur "<<std::endl;
    change_value_in_method_only(n);    //donne une variable
    std::cout<<n<<std::endl;
    change_value(n);    //donne une variable
    std::cout<<n<<std::endl;
    change_value(&n);  //donne une adresse
    std::cout<<n<<std::endl;



    int* ptr=nullptr;
    int x=2;
    ptr=&x;
    std::cout<<* ptr<<std::endl;
    std::cout<<x<<std::endl;
    *ptr=3;
    std::cout<<* ptr<<std::endl;
    std::cout<<x<<std::endl;


    int y=5;
    ptr=&y;
    std::cout<<* ptr<<std::endl;
    int z=7;
    ptr=&z;
    std::cout<<* ptr<<std::endl;


    //RAII
    //UNIQUE
    std::unique_ptr<int> uptr{std::make_unique<int>(11)};
    std::cout<<"unique : "<<* uptr<<std::endl;
    *uptr*=2;
    std::cout<<"unique : "<<* uptr<<std::endl;
    // std::unique_ptr<int> uptr2{uptr};    //PAS POSSIBLE de copier
    


    if(uptr){
        std::cout<<"Oui"<<std::endl;
    }
    uptr.reset();
    if(!uptr){
        std::cout<<"pas d'obj"<<std::endl;
    }
    std::unique_ptr<int> uptr1{std::make_unique<int>(19)};
    std::unique_ptr<int> uptr2{std::make_unique<int>(23)};
    std::cout<<"unique : "<<* uptr1<<std::endl;
    std::cout<<"unique : "<<* uptr2<<std::endl;
    uptr1.swap(uptr2);
    std::cout<<"unique : "<<* uptr1<<std::endl;
    std::cout<<"unique : "<<* uptr2<<std::endl;
    std::unique_ptr<int> uptr3{uptr2.release()};
    std::cout<<"unique : "<<* uptr1<<std::endl;
    // std::cout<<"unique : "<<* uptr2<<std::endl; uptr2 est VIDE
    std::cout<<"unique : "<<* uptr3<<std::endl;


    //SHARED
    std::shared_ptr<int> sptr{std::make_shared<int>(13)};
    std::cout<<"proprietaire de ressource : "<<sptr.use_count()<<std::endl;
    std::shared_ptr<int> sptr2{sptr};
    std::shared_ptr<int> sptr3{sptr};
    std::cout<<"proprietaire de ressource : "<<sptr.use_count()<<std::endl;
    sptr3.reset();
    std::cout<<"proprietaire de ressource : "<<sptr.use_count()<<std::endl;
    std::cout<<"shared : "<<* sptr<<std::endl;
    std::cout<<"shared : "<<* sptr<<std::endl;
    *sptr*=2;
    std::cout<<"shared : "<<* sptr<<std::endl;    // POSSIBLE de copier
    std::cout<<"shared : "<<* sptr2<<std::endl;
    sptr2.reset();

    if(sptr.unique()){
        std::cout<<"seul"<<std::endl;
    }
    else{
        std::cout<<"partage"<<std::endl;
    }

    //WEAK
    std::weak_ptr<int> wptr{sptr};
    if(auto ob =wptr.lock()){
        std::cout<<"Weak : "<<*ob<<std::endl;
    }
    else{
        std::cout<<"Peux pas lock"<<std::endl;
    }
  
    if(wptr.expired()){
        std::cout<<"no owner"<<std::endl;
    }
    else{
        std::cout<< wptr.use_count()<<" owner(s)"<<std::endl;
    }
    sptr.reset();
    if(wptr.expired()){
        std::cout<<"no owner"<<std::endl;
    }
    else{
        std::cout<< wptr.use_count()<<" owner(s)"<<std::endl;
    }



    //OLD
    int* pRaw{uptr1.get()};//pour les anciens pointeurs

}

/*
* y, m, w, d
* h, min, s
* ms, us, ns
*/
/*
* IANA, "Europe/Paris"
*/
/*
* %D %F ou %Y, %m, %w, %d
* %R, %T, %H, %M, %S
* %ms, %us, ns
* %A, %a
* %B, %b
*/
/*
* std::time_t
*/
void testDateEtTemps(){
    std::chrono::year y{2019};  //accepte -32000 à 32000
    std::chrono::month m{3};  //1 à 12
    std::chrono::day d{28};  //1 à 31
    std::cout <<d <<"/"<<m <<"/"<<y <<std::endl;
    if(d.ok() && m.ok() && y.ok()){
        std::cout <<"correct" <<std::endl;
    }
    std::chrono::days d1{365};
    std::cout <<d1 <<std::endl;

    std::chrono::hours h1{15};
    std::chrono::hours h2{15};
    std::cout <<h1 <<std::endl;
    std::cout <<h2 <<std::endl;
    std::cout <<h1+h2 <<std::endl;
    std::chrono::minutes min{365};
    std::cout <<min <<std::endl;
    std::cout <<h1+min <<std::endl;
    std::chrono::milliseconds ms{100};
    std::cout <<ms<<std::endl;
    std::chrono::nanoseconds ns{99};
    std::cout <<ns<<std::endl;
    using namespace std::chrono_literals;
    std::chrono::hours h3{16h};
    std::chrono::minutes min2{23min};
    std::cout <<h3+min2<<std::endl;


    auto today{std::chrono::system_clock::now()};
    std::cout <<today<<std::endl;
    auto formattedDate{std::format("{:%d/%m/%Y}", today)};

    std::cout <<formattedDate<<std::endl;




    std::chrono::zoned_time date{"Europe/Paris", std::chrono::system_clock::now()};
    std::cout << date <<std::endl;

}

/*
* threads get_id(),bool joignable, th1.swap(th2)
* mutex bool try_lock()
*/
void doTask(std::mutex &&m, std::string name, unsigned int delay){

    m.lock();
    for(auto i=0;i<5;++i){
        std::this_thread::sleep_for(std::chrono::seconds(delay));
        std::cout << std::this_thread::get_id()<< " : "<< name <<" : "<< i<<std::endl;
    }
    m.unlock();


    std::lock_guard<std::mutex> lock(m);
    for(auto i=0;i<5;++i){
        std::this_thread::sleep_for(std::chrono::seconds(delay));
        std::cout << std::this_thread::get_id()<< " : "<< name <<" : "<< i<<std::endl;
    }


}

void testThreads(){
    std::cout <<"Instruction du thread principal"<<std::endl;
    // doTask("Task1");
    // doTask("Task2");
    std::thread th1{doTask, "TH1", 1};
    std::thread th2{doTask, "TH2", 2};
    std::cout <<"Une autre instruction du thread principal"<<std::endl;
    th1.join();
    th2.join();

    // std::mutex m;
    // {
    //     std::lock_guard lock(m);
    //     std::cout <<"hehehe"<<std::endl;
    // }
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
    // testSet();
    // testIterateur();
    // testAlgo();
    // testGenericite();
    // testSurchargeOperateur();
    // testPointeurs();
    testDateEtTemps();
    testThreads();
    std::cin.get(); 
    return 0;
}





