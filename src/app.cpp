#include <app.h>
#include <races.h>
#include <perks.h>
#include <library.h>

App::App()
{
    Perks::InitStats();
    aRaces = Races::InitRaces();
}

App::~App()
{
    Name.clear();
    aRace.~Race();

    aCharacter.~Character();
}

void App::Program()
{
    std::cout << "Hello Welcome to Spiraling Odessy: Character Sheet Creator \n";

    std::cout << "Input Character Name: \n";

    std::getline(std::cin, Name);

    std::cout << "Please Select Characters Race: ";

    while(aRace.GetName() == "")
    {
        aRace = RaceSelect();
    }

    if(aRace.GetName() == "Magin")
    {
        Races::SelectHorns(aRace);
    }
    else if(aRace.GetName() == "Arcakin")
    {
        Races::SelectAdeptedType(aRace);
    }

    SizeSelect(aRace);

    aCharacter.SetName(Name);
    aCharacter.SetRace(aRace);

    DisplayCharacter(aCharacter);
}

Race App::RaceSelect()
{
    int i = 1;

    int selection;

    std::string temp;
    char* n;

    Race selected;

    for(it=aRaces.begin(); it!=aRaces.end(); it++)
    {
        std::cout << '\n' << i << ". " << (*it).GetName() << '\n';
        std::cout << "Description: \n" << (*it).GetDescription() << '\n';
        if((*it).GetAppearance() != "")
        {
           std::cout << "Appearance: \n" << (*it).GetAppearance() << '\n';
        }

        std::cout << "Speed: " << (*it).GetSpeed() << '\n';
        std::cout << "Hunger: " << (*it).GetHunger() << '\n';

        DisplayPerks((*it).GetFeatures());
        i++;
    }

    std::cin >> temp;

    selection = strtol(temp.c_str(), &n, 10);

    if(*n)
    {
        std::cout << "\nInput not a number, try again(check for any spaces)";
    }
    else if(selection > i || selection < 1)
    {
        std::cout << "\nInvalid Input, try again";
    }
    else
    {
        i = 1;
        for(it=aRaces.begin(); it!=aRaces.end(); it++)
        {
            if(i == selection)
            {
                selected = (*it);
            }
            i++;
        }
        if(selected.GetName() == "")
        {
            std::cout << "\nInvalid input, try again.";
        }
    }

    return selected;
}

void App::SizeSelect(Race &race)
{
    std::map<std::string, bool> sizeSelect = {
        {"Small", false},
        {"Medium", false},
        {"Large", false}
    };
    std::map<std::string, bool>::iterator itm;
    int i = 1;

    int selection;
    int unavailable;

    std::string temp;
    char* n;

    if(race.GetSize() == "Any")
    {
        sizeSelect.at("Small") = true;
        sizeSelect.at("Medium") = true;
        sizeSelect.at("Large") = true;
    }
    else if(race.GetSize() == "Small/Medium")
    {
        sizeSelect.at("Small") = true;
        sizeSelect.at("Medium") = true;
    }
    else if(race.GetSize() == "Small/Large")
    {
        sizeSelect.at("Small") = true;
        sizeSelect.at("Large") = true;
    }
    else if(race.GetSize() == "Medium/Large")
    {
        sizeSelect.at("Medium") = true;
        sizeSelect.at("Large") = true;
    }
    else
    {
        return;
    }

    std::cout << "\n Select One: \n";

    for(itm=sizeSelect.begin(); itm!=sizeSelect.end(); itm++)
    {
        if(itm->second == true)
        {
            std::cout << i << ". " << itm->first << '\n';
        }
        else
        {
            unavailable = i;
        }
        i++;
    }

    std::cin >> temp;

    selection = strtol(temp.c_str(), &n, 10);

    if(*n)
    {
        std::cout << "\nInput not a number, try again(check for any spaces)";
    }
    else if(selection > i || selection < 1 || selection == unavailable)
    {
        std::cout << "\nInvalid Input, try again";
    }
    else
    {
        switch(selection)
        {
            case 1:
                race.SetSize("Small");
                break;
            case 2:
                race.SetSize("Medium");
                break;
            case 3:
                race.SetSize("Large");
        }
    }

}

void App::DisplayPerks(std::list<Perk> list)
{
    std::list<Perk>::iterator itp;

    for(itp = list.begin(); itp!=list.end(); itp++)
    {
        std::cout << (*itp).GetName() << ": " << (*itp).GetDescription() << '\n';
    }
}

void App::DisplayCharacter(Character character)
{
    std::cout << "\nCurrent Character: ";
    std::cout << "\nName:" << character.GetName();

    std::cout << "\n\nRace: " << character.GetRace().GetName();

    std::cout << "\n\nTraits: ";
    std::cout << "\nSize: " << character.GetRace().GetSize();
    std::cout << "\nType: " << character.GetRace().GetType();

    std::cout << "\n\nStats:";
    std::cout << "\nHunger: " << character.GetRace().GetHunger();
    std::cout << "\nSpeed: " << character.GetRace().GetSpeed();

    std::cout << "\n\nPerks: \n";
    DisplayPerks(character.GetRace().GetFeatures());
}