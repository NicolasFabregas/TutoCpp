#include "../headers/time.hpp"
#include <string>
#include <cstddef>
#include <ostream>

namespace nico{
    time::time(std::size_t h, std::size_t m, std::size_t s):hours(h), minutes(m), seconds(s){
        if(hours>23){
            hours=0;
        }
        if(minutes>59){
            minutes=0;
        }
        if(seconds>59){
            seconds=0;
        }
    }

    // time time::operator+(int i) const{

    // }
    time operator+(const time& t, int i) {
        return time{t.hours, t.minutes, t.seconds+i};
    }
    time operator+(int i, const time& t) {
        return t+i;
    }

    time time::operator+(const time& other) const{
        int h=hours+ other.hours;
        int m=minutes+other.minutes;
        int s=seconds+other.seconds;
        if(s>59){
            s-=60;
            m++;
        }
        if(m>59){
            m-=60;
            h++;
        }
        if(h>23){
            h-=24;
        }
        return time(hours+ other.hours, minutes+other.minutes, seconds+other.seconds);
    }
    
    // std::ostream& operator<<(std::ostream&, const std::size_t& h){
    //     return t.hours;
    // }
    // std::ostream& operator<<(std::ostream&, const std::size_t& m){
    //     return t.minutes;
    // }
    // std::ostream& operator<<(std::ostream&, const std::size_t& s){
    //     return t.secondes;
    // }
    std::ostream& operator<<(std::ostream& os, const time& t){
        os << t.hours << ":" << t.minutes << ":" << t.seconds;
        return os;
    }
}