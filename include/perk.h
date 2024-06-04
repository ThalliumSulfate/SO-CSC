#ifndef PERK_H
#define PERK_H

#include <library.h>

class Perk 
{
    public:
        Perk(std::string name, std::string description);
        ~Perk();

        std::string GetName();

        std::string GetDescription();
    private:
        std::string Name;
        std::string Description;
};

#endif