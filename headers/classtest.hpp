
#ifndef __CLASSTEST__
    #define __CLASSTEST__
#include <string>

    class Point 
    {
        public :
            // int x;
            // int y;
            Point();
            Point(Point& p); //par défaut
            Point(Point&& p);
            ~Point();
            // Point(int x, int y);

        private :

    };
#endif