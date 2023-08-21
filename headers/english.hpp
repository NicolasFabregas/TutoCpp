
#ifndef __ENGLISH__
    #define __ENGLISH__
    #include <string>
    #include "someone.hpp"
    class English: public Someone{
        using Someone::Someone;
        public:
            void sayGoodNight() const noexcept override;
            ~English() override;
    };
#endif