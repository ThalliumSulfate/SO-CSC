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
        void SizeSelect(Race &race);

        void DisplayPerks(std::list<Perk> list);
        void DisplayCharacter(Character character);
    private:
        std::string Name;
        Race aRace;

        std::list<Race>::iterator it;
        std::list<Race> aRaces;

        Character aCharacter;
};
#endif