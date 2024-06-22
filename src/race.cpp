#include <race.h>
#include <perks.h>

#pragma region Race
Race::Race(){}

Race::Race(std::string name, std::string size, std::string type, int hunger, int speed)
{
    Name = name;
    Size = size;
    Type = type;
    Hunger = hunger;
    Speed = speed;
}

Race::~Race()
{
    Name.clear();
    Description.clear();
    Appearance.clear();
    Size.clear();
    Type.clear();
    Features.clear();
    Hunger = NULL;
    Speed = NULL;
}

std::string Race::GetSize()
{
    return Size;
}

void Race::SetSize(std::string size)
{
    Size = size;
}

std::string Race::GetType()
{
    return Type;
}

std::list<Perk> Race::GetFeatures()
{
    return Features;
}

void Race::SetFeatures(std::list<Perk> features)
{
    Features = features;
}

int Race::GetHunger()
{
    return Hunger;
}

int Race::GetSpeed()
{
    return Speed;
}

std::string Race::GetDescription()
{
    return Description;
}

void Race::SetDescription(std::string description)
{
    Description = description;
}

std::string Race::GetAppearance()
{
    return Appearance;
}

void Race::SetAppearance(std::string appearance)
{
    Appearance = appearance;
}

std::string Race::GetName()
{
    return Name;
}
#pragma endregion