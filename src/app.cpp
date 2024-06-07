#include <app.h>
#include <races.h>
#include <library.h>

App::App()
{
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

    std::cin >> Name;

    std::cout << "Please Select Characters Race: ";

    while(aRace.GetName() == "")
    {
        aRace = RaceSelect();
    }

    if(aRace.GetName() == "Magin")
    {
        Races::SelectHorns(aRace);
    }
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

void App::DisplayPerks(std::list<Perk> list)
{
    std::list<Perk>::iterator itp;

    for(itp = list.begin(); itp!=list.end(); itp++)
    {
        std::cout << (*itp).GetName() << ": " << (*itp).GetDescription() << '\n';
    }
}