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

    SkillBonuses.clear();
    StatBonuses.clear();

    BodyBonus = 0;
    CharBonus = 0;
    IntBonus = 0;
    TechBonus = 0;
    RefBonus = 0;
    LuckBonus = 0;
    PerBonus = 0;
}

std::string Perk::GetDescription()
{
    return Description;
}

std::string Perk::GetName()
{
    return Name;
}

std::map<int, int> Perk::GetSkillBonuses()
{
    return SkillBonuses;
}
void Perk::SetSkillBonuses(std::map<int, int> skillBonuses)
{
    SkillBonuses = skillBonuses;
}

std::map<int, int> Perk::GetStatBonuses()
{
    return StatBonuses;
}
void Perk::SetStatBonuses(std::map<int, int> statBonuses)
{
    StatBonuses = statBonuses;
}

int Perk::GetExtraPerkPoints()
{
    return ExtraPerkPoints;
}
void Perk::SetExtraPerkPoints(int amount)
{
    ExtraPerkPoints = amount;
}

int Perk::GetBodyBonus()
{
    return BodyBonus;
}
int Perk::GetCharBonus()
{
    return CharBonus;
}
int Perk::GetIntBonus()
{
    return IntBonus;
}
int Perk::GetTechBonus()
{
    return TechBonus;
}
int Perk::GetRefBonus()
{
    return RefBonus;
}
int Perk::GetLuckBonus()
{
    return LuckBonus;
}
int Perk::GetPerBonus()
{
    return PerBonus;
}

void Perk::SetBodyBonus(int bonus)
{
    BodyBonus = bonus;
}
void Perk::SetCharBonus(int bonus)
{
    CharBonus = bonus;
}
void Perk::SetIntBonus(int bonus)
{
    IntBonus = bonus
}
void Perk::SetTechBonus(int bonus)
{
    TechBonus = bonus;
}
void Perk::SetRefBonus(int bonus)
{
    RefBonus = bonus;
}
void Perk::SetLuckBonus(int bonus)
{
    LuckBonus = bonus;
}
void Perk::SetPerBonus(int bonus)
{
    PerBonus = bonus;
}


