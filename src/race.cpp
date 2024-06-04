#include <race.h>
#include <perks.h>

#pragma region Race
Race::Race(){}

Race::~Race()
{
    Description.clear();
    Appearance.clear();
    Size.clear();
    Type.clear();
    Features.clear();
    Hunger = NULL;
    Speed = NULL;
}

std::string Race::GetSize()
{
    return Size;
}

std::string Race::GetType()
{
    return Type;
}

std::list<Perk> Race::GetFeatures()
{
    return Features;
}

int Race::GetHunger()
{
    return Hunger;
}

int Race::GetSpeed()
{
    return Speed;
}

void Race::SetHunger(int hunger)
{
    Hunger = hunger;
}

void Race::SetSpeed(int speed)
{
    Speed = speed;
}
#pragma endregion

#pragma region Human
Human::Human()
{
    std::list<Perk>::iterator it = Features.begin();

    Description = "Coming to Talios from the long gone planet of Earth, humans are crafty creatures that you can find just about anywhere. Despite their fragile origins, humans have a remarkable ability to thrive under a variety of conditions, making them one of the most widespread and thriving races in all of Talios.";
    
    Size = "Medium";
    Type = "Humanoid";

    Hunger = 20;
    Speed = 40;

    Features.insert(it, Perks::Adaptability);
    Features.insert(it, Perks::JackOfAllTrades);
}

Human::~Human()
{
    Human::~Race();
}
#pragma endregion

#pragma region Fae
Fae::Fae()
{
    std::list<Perk>::iterator it = Features.begin();

    Description = "No one knows where the Fae came from, all that is known is they first appeared when civilization on Talios reached a point of stability. Some say they've come from the gods themselves or a powerful entity, others say that they have always lived on the planet, and others say that the Fae descend and evolve from birds, a mistake from the machine called mother.";
    Appearance = "Their appearance consists of bright white eyes and a small size, the rest of their bodies are covered in clothing, and they are quite defensive if you try to see how they look, the few ones that have done so are often terrified afterwards. Their nature is mischievous and their magical affinity is connected to the shadows and hexes, causing interesting effects in the world.";

    Size = "small";
    Type = "Humanoid";

    Hunger = 20;
    Speed = 40;

    Features.insert(it, Perks::ShadowBlink);
    Features.insert(it, Perks::FaeFortune);
    Features.insert(it, Perks::MischievousNature);
    Features.insert(it, Perks::AdaptableAppetite);
    Features.insert(it, Perks::FragileBody);
}

Fae::~Fae()
{
    Fae::~Race();
}
#pragma endregion

#pragma region Magin
Magin::Magin()
{
    std::list<Perk>::iterator it = Features.begin();

    Description = "The first generations of humans physically changed by the world became the Magin, a people changed by magic while retaining the natural human curiosity and when the next humans arrived, they were impressed and shocked when they realized they were their distant relatives. Magin society is completely influenced by magic which is present in all aspects of their lives, however, the remains of the technology that the firsts humans brought with them, are present, though unrecognizable by normal humans. Sadly, their population was heavily diminished by the terrible Magin hunts.";
    Appearance = "Magin have bluish skin with different colors of hair, they live for long periods of time and even longer depending on their individual skill on magic and due to have spent generations on the planet and have evolved over time due to absorbing a heavy amount of the planet magic, their eyes have morphed into having a black sclera with pupils of several colors such as purple, green or blue, they also evolved sturdy and commonly gray colored horns, sensitive to magic, that helped them obtain a better control of it. Horns can have a wide variety of shapes and the shape is related to the magical affinity of the Magin.";

    Size = "Medium";
    Type = "Humanoid";

    Hunger = 40;
    Speed = 30;

    Features.insert(it, Perks::MysticalHorns);
    Features.insert(it, Perks::MagicalInitiation);
    Features.insert(it, Perks::ArcaneEducation);
}

Magin::~Magin()
{
    Magin::~Race();
}
#pragma endregion

#pragma region Nyx
Nyx::Nyx()
{
    std::list<Perk>::iterator it = Features.begin();

    Description = "A different culture of Magin who fled to Kaata During the Magin hunts, where they hid themselves in the underground passages and catacombs, where they were changed by the darkness, turning them unto apathetic, cruel and merciless beings, prioritizing survival no matter the cost, even if that means cruel actions such as maintaining alive their meals to make them last longer, and only those who survive the harsh conditions of Kaata are offered respect amongst their society. Women direct their society and are more common, while males usually are rarer and live less. Living sacrifices of their own kin and sons are offered to the Scorched or consumed by them in times of need.";
    Appearance = "Due to generations of staying underground their skin darkened to match their environment, they also lost their majestic horns, losing them entirely but instead developing more sinister powers related to their dark deity. They are considered isolationists and often speak in their own language and although their lifespan is as long as the Magin´s, they usually never live much.";

    Size = "Medium";
    Type = "Humanoid";

    Hunger = 40;
    Speed = 30;

    Features.insert(it, Perks::NightVision);
    Features.insert(it, Perks::RitualOfFlesh);
    Features.insert(it, Perks::RitualOfEmpowerment);
    Features.insert(it, Perks::UncaringNature);
}

Nyx::~Nyx()
{
    Nyx::~Race();
}
#pragma endregion

#pragma region Evelet
Evelet::Evelet()
{
    std::list<Perk>::iterator it = Features.begin();

    Description = "Descendants of the extinct species called rabbits and the first experiments made using alteration. The Evelet are a culture of peaceful herbivores. Their numbers are few but most of them reside in Writh, in a hidden and peaceful village known as the Garden where only the entity known as the Overseer knows its location.";
    Appearance = "Evelets height is usually 2-4 feet without counting their ears, their fur can vary in color, most commonly being black, white and shades of brown with some spots here and there. Their physical capabilities include having great speed and jump height, and also having good pain tolerance and resistance to damage.";

    Size = "Small";
    Type = "Humanoid";

    Hunger = 20;
    Speed = 50;

    Features.insert(it, Perks::PerksOfPrey);
    Features.insert(it, Perks::PowerfulLegs);
    Features.insert(it, Perks::Herbivore);
    Features.insert(it, Perks::LuckyCharm);
}

Evelet::~Evelet()
{
    Evelet::~Race();
}
#pragma endregion

#pragma region Lites
Lites::Lites()
{
    std::list<Perk>::iterator it = Features.begin();

    Description = "Lites were created a long time ago by the jester, but were considered a failure by them, they inhabit the region of Kaata and their population is widespread. They are curious by nature and are good at learning and doing basically anything. The reason they are exploited by many cultures.";
    Appearance = "Lites are short green skinned creatures with big adorable eyes and button noses, as well as long ears, they have a short lifespan and their size goes around 3-4 feet.";

    Size = "Small";
    Type = "Humanoid";

    Hunger = 40;
    Speed = 40;

    Features.insert(it, Perks::SmallButTough);
    Features.insert(it, Perks::SizeNimbleness);
}

Lites::~Lites()
{
    Lites::~Race();
}
#pragma endregion