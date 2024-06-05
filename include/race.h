#ifndef RACE_H
#define RACE_H

#include <library.h>
#include <perk.h>

class Race
{
    public:
        Race();
        Race(std::string name, std::string size, std::string type, int hunger, int speed);

        ~Race();

        int GetHunger();
        int GetSpeed();

        std::string GetSize();
        std::string GetType();

        std::list<Perk> GetFeatures();
        void SetFeatures(std::list<Perk> features);

        std::string GetDescription();
        void SetDescription(std::string description);
        std::string GetAppearance();
        void SetAppearance(std::string appearance);
        std::string GetName();
    protected: 
        std::string Name;

        std::string Description;
        std::string Appearance;

        std::string Size;
        std::string Type;
        std::list<Perk> Features;
        int Hunger;
        int Speed;
};

#endif