
#ifndef __QUEST__
    #define __QUEST__
    #include <string>
    #include"queststatus.hpp"

    class Quest{

        public:
            Quest() = delete;
            Quest (const std::string& name, const std::string& description, int unitId) noexcept;
            void show() const noexcept;
            QuestStatus getStatus();

        private:
            std::string _name;
            std::string _description;
            QuestStatus _status;
    };
#endif