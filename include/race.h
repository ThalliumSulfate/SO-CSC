#ifndef RACE_H
#define RACE_H

#include <library.h>
#include <perk.h>

class Race
{
    public:
        Race();

        ~Race();

        int GetHunger();
        void SetHunger(int hunger);

        int GetSpeed();
        void SetSpeed(int speed);

        std::string GetSize();
        std::string GetType();
        std::list<Perk> GetFeatures();

        std::string GetDescription();
        std::string GetAppearance();
    protected: 
        std::string Description;
        std::string Appearance;

        std::string Size;
        std::string Type;
        std::list<Perk> Features;
        int Hunger;
        int Speed;
};

class Human : public Race
{
    public:
        Human();
        ~Human();
};

class Fae : public Race
{
    public:
        Fae();
        ~Fae();
};

class Magin : public Race
{
    public:
        Magin();
        Magin();

        void SetHornType(int Selection);
};

class Nyx : public Race
{
    public:
        Nyx();
        ~Nyx();
};

class Evelet : public Race
{
    public:
        Evelet();
        ~Evelet();
};

class Lites : public Race
{
    public:
        Lites();
        ~Lites();
};

#endif