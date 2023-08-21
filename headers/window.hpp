
#ifndef __WINDOW__
    #define __WINDOW__
#include <string>

    class Window 
    {
        public :
            Window()= default;
            Window(Window& p); //par défaut
            Window(Window&& p);
            Window(const std::string title, int width, int height);
            ~Window();
            void run() const noexcept; //const = pas de modif de var
            // Window(int x, int y);
            std::string getTitle() const;
            void setTitle(const std::string title);

        private :
            std::string title;
            int width;
            int height;

    };
#endif