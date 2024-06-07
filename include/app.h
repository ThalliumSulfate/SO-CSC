#ifndef APP_H
#define APP_H

#include <character.h>
#include <perk.h>

class App
{
    public:
        App();
        ~App();

        void Program();
        Race RaceSelect();
        void DisplayPerks(std::list<Perk> list);
        bool IsMagin(const Race* race);
    private:
        std::string Name;
        Race aRace;

        std::list<Race>::iterator it;
        std::list<Race> aRaces;

        Character aCharacter;
};
#endif