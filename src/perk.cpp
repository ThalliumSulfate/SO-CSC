#include <library.h>
#include <perk.h>

Perk::Perk(std::string name, std::string description)
{
    Name = name;
    Description = description;
};

Perk::~Perk()
{
    Name.clear();
    Description.clear();
}

std::string Perk::GetDescription()
{
    return Description;
}

std::string Perk::GetName()
{
    return Name;
}

