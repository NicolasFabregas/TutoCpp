
#ifndef __SOMEONE__
    #define __SOMEONE__
    #include <string>
    class Someone{
        
        public:
            Someone() = delete;
            Someone(const std::string& name) noexcept;
            virtual void sayGoodNightNotNull() const noexcept;
            virtual void sayGoodNight() const noexcept=0;
            virtual ~Someone()=0;
        protected:
            std::string _name;
    };
#endif