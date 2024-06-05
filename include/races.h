#include <race.h>

class Races
{
    public:
        static Race Human;
        static Race Fae;
        static Race Magin;
        static Race Nyx;
        static Race Evelet;
        static Race Lites;

        static std::list<Race> InitRaces();
        static void SelectHorns(Race &magin);
};
