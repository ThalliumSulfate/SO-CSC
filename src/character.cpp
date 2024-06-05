#include <character.h>

Character::Character(){}

Character::Character(std::string name, Race race)
{
    Name = name;
    cRace = race;
}

Character::~Character()
{
    Name.clear();
    cRace.~Race();
}