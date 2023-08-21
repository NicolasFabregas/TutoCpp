
#ifndef __INDONESIAN__
    #define __INDONESIAN__
    #include <string>
    #include "someone.hpp"
    class Indonesian:public Someone{
        using Someone::Someone;
        public:
            void sayGoodNight() const noexcept override;
            ~Indonesian() override;
    };
#endif