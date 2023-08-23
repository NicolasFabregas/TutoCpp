#ifndef __NUMBER__
    #define __NUMBER__
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

    template<typename T>
    T sum (T a, T b);
    bool sum(bool a, bool b);

    #include "../templates/number.tpp"
    template<typename T, typename U=bool>
    class DataContainer{
        public:
            DataContainer(T n, U m):_n(n), _m(m){};
            T getN() const {return _n;};
            U getM() const {return _m;};
        private:
            T _n;
            U _m;
    };
#endif