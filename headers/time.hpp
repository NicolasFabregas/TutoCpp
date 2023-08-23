
#ifndef __NICO_TIME__
    #define __NICO_TIME__
    #include <string>
    #include <cstddef>
    #include <ostream>
    namespace nico{
        class time{
            public:
                time(std::size_t h, std::size_t m, std::size_t s);
                time operator+(const time& other) const;
            private:
                std::size_t hours;
                std::size_t minutes;
                std::size_t seconds;
            friend std::ostream& operator<<(std::ostream& os, const time& t);
            friend time operator+(const time& t, int i);
            friend time operator+(int i, const time& t);
            // friend std::ostream& operator<<(std::ostream&, const std::size_t& h);
            // friend std::ostream& operator<<(std::ostream&, const std::size_t& m);
            // friend std::ostream& operator<<(std::ostream&, const std::size_t& s);
        };
    }

#endif