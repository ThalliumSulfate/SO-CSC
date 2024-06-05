#ifndef CHARACTER_H
#define CHARACTER_H

#include <race.h>

class Character
{
    public:
        Character();
        Character(std::string name, Race race);

        ~Character();
    private:
        std::string Name;
        Race cRace;
};

#endif