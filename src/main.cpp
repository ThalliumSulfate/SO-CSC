#include <race.h>

int main ()
{
    Human human;

    std::list<Perk>::iterator it;

    std::list<Perk> Features = human.GetFeatures();

    std::cout << "mylist contains:";
    for(it=Features.begin(); it!=Features.end(); it++)
        std::cout << ' ' << (*it).GetName();
    std::cout << '\n';

    return 0;
}