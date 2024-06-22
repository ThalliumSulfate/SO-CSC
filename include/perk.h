#ifndef PERK_H
#define PERK_H

#include <library.h>

class Perk 
{
    public:
        Perk(std::string name, std::string description, bool isNatural);
        ~Perk();

        std::string GetName();

        std::string GetDescription();

        int GetExtraPerkPoints();
        void SetExtraPerkPoints(int amount);

        std::map<int, int> GetSkillBonuses();
        void SetSkillBonuses(std::map<int, int> skillBonuses);

        std::map<int, int> GetStatBonuses();
        void SetStatBonuses(std::map<int, int> statBonuses);

        int GetBodyBonus();
        int GetCharBonus();
        int GetIntBonus();
        int GetTechBonus();
        int GetRefBonus();
        int GetLuckBonus();
        int GetPerBonus();

        void SetBodyBonus(int bonus);
        void SetCharBonus(int bonus);
        void SetIntBonus(int bonus);
        void SetTechBonus(int bonus);
        void SetRefBonus(int bonus);
        void SetLuckBonus(int bonus);
        void SetPerBonus(int bonus);
    private:
        std::string Name;
        std::string Description;

        bool IsNatural;

        //amount of extra perk points
        int ExtraPerkPoints;

        /**
         * map of unspecified skill bonuses
         *@param first amount of bonuses
         *@param second size of bonus
         */
        std::map<int, int> SkillBonuses;
        /**
         * map of unspecified stat bonuses
         *@param first amount of bonuses
         *@param second size of bonus
         */
        std::map<int, int> StatBonuses;

        //specified stat bonuses
        int BodyBonus;
        int CharBonus;
        int IntBonus;
        int TechBonus;
        int RefBonus;
        int LuckBonus;
        int PerBonus;
};

#endif