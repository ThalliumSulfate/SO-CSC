#include <character.h>

Character::Character(){}

Character::~Character()
{
    Name.clear();
    cRace.~Race();
}

std::string Character::GetName()
{
    return Name;
}

void Character::SetName(std::string name)
{
    Name = name;
}

Race Character::GetRace()
{
    return cRace;
}

void Character::SetRace(Race race)
{
    cRace = race;
}