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
        static Race Mockrc;
        static Race Demon;
        static Race Constructs;
        static Race Chlorfolk;
        static Race Voidtouched;
        static Race Horriblius;
        static Race Cuti;
        static Race Satyr;
        static Race Titan;
        static Race Arcakin;
        static Race Candlefolk;
        static Race Gorilla;

        static std::list<Race> InitRaces();
        static void SelectHorns(Race &magin);
        static void SelectAdeptedType(Race &arcakin);
};
