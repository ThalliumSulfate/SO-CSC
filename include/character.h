#ifndef CHARACTER_H
#define CHARACTER_H

#include <race.h>

class Character
{
    public:
        Character();

        ~Character();

        std::string GetName();
        void SetName(std::string name);
        Race GetRace();
        void SetRace(Race race);
    private:
        std::string Name;
        Race cRace;
};

#endif