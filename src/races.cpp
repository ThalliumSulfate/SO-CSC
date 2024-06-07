#include <races.h>
#include <perks.h>

#pragma region Constructors
Race Races::Human = Race("Human", "Medium", "Humanoid", 20, 40);
Race Races::Fae = Race("Fae", "Small", "Humanoid", 20, 40);
Race Races::Magin = Race("Magin", "Medium", "Humanoid", 40, 30);
Race Races::Nyx = Race("Nyx", "Medium", "Humanoid", 40, 30);
Race Races::Evelet = Race("Evelet", "Small", "Humanoid", 20, 50);
Race Races::Lites = Race("Lites", "Small", "Humanoid", 40, 40);
Race Races::Mockrc = Race("Mockrc", "Medium", "Humanoid", 50, 30);
Race Races::Demon = Race("Demon", "Medium", "Demonic", 60, 40);
Race Races::Constructs = Race("Constructs", "Any", "Artificial", 0, 40);
Race Races::Chlorfolk = Race("Chlorfolk", "Medium", "Plantoid", 30, 40);
Race Races::Voidtouched = Race("Voidtouched", "Medium", "Humanoid", 0, 40);
#pragma endregion

std::list<Race> Races::InitRaces()
{
    std::list<Race> initializedRaces;
    std::list<Race>::iterator it = initializedRaces.begin();
    
    //human init
    Human.SetDescription("Coming to Talios from the long gone planet of Earth, humans are crafty creatures that you can find just about anywhere. Despite their fragile origins, humans have a remarkable ability to thrive under a variety of conditions, making them one of the most widespread and thriving races in all of Talios.");

    Human.SetFeatures({Perks::Adaptability, Perks::JackOfAllTrades});

    initializedRaces.insert(it, Human);
    //Fae init
    Fae.SetDescription("No one knows where the Fae came from, all that is known is they first appeared when civilization on Talios reached a point of stability. Some say they've come from the gods themselves or a powerful entity, others say that they have always lived on the planet, and others say that the Fae descend and evolve from birds, a mistake from the machine called mother.");
    Fae.SetAppearance("Their appearance consists of bright white eyes and a small size, the rest of their bodies are covered in clothing, and they are quite defensive if you try to see how they look, the few ones that have done so are often terrified afterwards. Their nature is mischievous and their magical affinity is connected to the shadows and hexes, causing interesting effects in the world.");

    Fae.SetFeatures({Perks::ShadowBlink, Perks::FaeFortune, Perks::MischievousNature, Perks::AdaptableAppetite, Perks::FragileBody});

    initializedRaces.insert(it, Fae);
    //Magin init
    Magin.SetDescription("The first generations of humans physically changed by the world became the Magin, a people changed by magic while retaining the natural human curiosity and when the next humans arrived, they were impressed and shocked when they realized they were their distant relatives. Magin society is completely influenced by magic which is present in all aspects of their lives, however, the remains of the technology that the firsts humans brought with them, are present, though unrecognizable by normal humans. Sadly, their population was heavily diminished by the terrible Magin hunts.");
    Magin.SetAppearance("Magin have bluish skin with different colors of hair, they live for long periods of time and even longer depending on their individual skill on magic and due to have spent generations on the planet and have evolved over time due to absorbing a heavy amount of the planet magic, their eyes have morphed into having a black sclera with pupils of several colors such as purple, green or blue, they also evolved sturdy and commonly gray colored horns, sensitive to magic, that helped them obtain a better control of it. Horns can have a wide variety of shapes and the shape is related to the magical affinity of the Magin.");

    Magin.SetFeatures({Perks::MysticalHorns, Perks::MagicalInitiation, Perks::ArcaneEducation});

    initializedRaces.insert(it, Magin);
    //Nyx init
    Nyx.SetDescription("A different culture of Magin who fled to Kaata During the Magin hunts, where they hid themselves in the underground passages and catacombs, where they were changed by the darkness, turning them unto apathetic, cruel and merciless beings, prioritizing survival no matter the cost, even if that means cruel actions such as maintaining alive their meals to make them last longer, and only those who survive the harsh conditions of Kaata are offered respect amongst their society. Women direct their society and are more common, while males usually are rarer and live less. Living sacrifices of their own kin and sons are offered to the Scorched or consumed by them in times of need.");
    Nyx.SetAppearance("Due to generations of staying underground their skin darkened to match their environment, they also lost their majestic horns, losing them entirely but instead developing more sinister powers related to their dark deity. They are considered isolationists and often speak in their own language and although their lifespan is as long as the Magin´s, they usually never live much.");

    Nyx.SetFeatures({Perks::NightVision, Perks::RitualOfFlesh, Perks::RitualOfEmpowerment, Perks::UncaringNature});

    initializedRaces.insert(it, Nyx);
    //Evelet init
    Evelet.SetDescription("Descendants of the extinct species called rabbits and the first experiments made using alteration. The Evelet are a culture of peaceful herbivores. Their numbers are few but most of them reside in Writh, in a hidden and peaceful village known as the Garden where only the entity known as the Overseer knows its location.");
    Evelet.SetAppearance("Evelets height is usually 2-4 feet without counting their ears, their fur can vary in color, most commonly being black, white and shades of brown with some spots here and there. Their physical capabilities include having great speed and jump height, and also having good pain tolerance and resistance to damage.");

    Evelet.SetFeatures({Perks::PerksOfPrey, Perks::PowerfulLegs, Perks::Herbivore, Perks::LuckyCharm});
    initializedRaces.insert(it, Evelet);
    //Lites init
    Lites.SetDescription("Lites were created a long time ago by the jester, but were considered a failure by them, they inhabit the region of Kaata and their population is widespread. They are curious by nature and are good at learning and doing basically anything. The reason they are exploited by many cultures.");
    Lites.SetAppearance("Lites are short green skinned creatures with big adorable eyes and button noses, as well as long ears, they have a short lifespan and their size goes around 3-4 feet.");

    Lites.SetFeatures({Perks::SmallButTough, Perks::SizeNimbleness});
    initializedRaces.insert(it, Lites);
    //Mockrc init
    Mockrc.SetDescription("Called Mockrc by the government of Evermore, they were the former denizens of the town of Rikmanster, “blessed” by the Jester, they became immortal beings able to shapeshift into any humanoid creature or object they desired, including weapons or wings made by their own flesh, the cost was losing their previous identities, with any proof of who they were magically banishing from the world. Now they became masters of disguise, espionage and subterfuge, making Evermore´s Nobles fear to be replaced by one of them.");
    Mockrc.SetAppearance("Mockrc are however unable to mimic magic, and magic itself is forbidden to them, causing pain whenever they try to learn it or utilize it, and speaking about pain, every transformation they suffer is extremely painful, reason for them to dislike changing their appearance too often, relying on having a “main” form to stick with most of the time.");

    Mockrc.SetFeatures({Perks::MockrcAdaptability, Perks::ShapeshiftingProwess, Perks::FleshWeaponry});
    initializedRaces.insert(it, Mockrc);
    //Demon init
    Demon.SetDescription("Demons are corrupted creatures, either living or undead that are submitted to the will of the Lung. Some of them now free of its control and having their own free will, others like the Imps, have free will of their own but are still under the influence of the Lung. Living Demons are stronger than undead ones");
    Demon.SetAppearance("The appearance of demons are similar to the Magin, although with more monstrous features such as fangs and claws, their skin is red and its many shades, and they have a set of wings, allowing them to fly. Their lifespans are on the other hand, shorter than those of humans.");

    Demon.SetFeatures({Perks::DemonicWings, Perks::SoulFeeding, Perks::NightVision, Perks::FleshDiet});
    //Constructs init
    Constructs.SetDescription("Constructs are intelligent machines, often considered expensive works of industry, or art. Their original function was to explore the abyss, but as many of them were corrupted by it, it was decided to allocate them to other areas and jobs. Most of them are infused with magic and many are known to gain sentience and sapience, obtaining their own free will.");
    Constructs.SetAppearance("Constructs have different forms and shapes according to their design and function, as well as the materials used to make them, but many are created with a humanoid form.");

    Constructs.SetFeatures({Perks::AdaptiveSystems, Perks::ModularBody, Perks::ArtificialMetabolism});
    //Chlorfolk init
    Chlorfolk.SetDescription("The Chlorfolk are visitors from an empire composed of many worlds, far away from Talios, they are a thriving peaceful society with a long history. They are known for getting bored quickly, in consequence they built a nomadic society that values exploration, curiosity and entertainment. Mapping out the reaches of space during their travels and making memories as they go. However, the nature of Talios trapped every scout that came, making them unable to leave and report back to their empire and leaving the stranded Chlorfolk feeling isolated, however others are seeking a way to continue their journeys through space.");
    Chlorfolk.SetAppearance("Chlorfolk are a species of plant like creatures, they feed on sunlight, water and different types of dirt, they don't have mouths but can communicate telepathically and and the colours and appearance of their bodies vary depending on the environment where they grew, they reproduce asexually by laying seeds on the ground, and despite their inability to mate with humans, they certainly can have romantic relationships with them, and in comparison to humans, they can live up to five hundred years.");

    Chlorfolk.SetFeatures({Perks::VegetalRejuvination, Perks::Telepathy, Perks::Photosynthesis});
    //Voidtouched init
    Voidtouched.SetDescription("After Earth destruction by the Jester, the small percentage of creatures that survived were transported to a complex dimension of reality were they were trapped for thousands of years until they finally broke free, some of these creatures were once humans who morphed into horrible creatures and many of them gone insane with their minds warped and transformed.");
    Voidtouched.SetAppearance("With their forms twisted, they grew claws, sometimes otherworldly features and their magical affinity was vastly improved by their time in the void, developing psychic abilities and other mind warping skills. It is rumored that their lifespans are infinite, at least until they are destroyed, but it is also known that there aren't many of them around, as there are only fiftyseven humanoid Voidtouched.");

    Voidtouched.SetFeatures({Perks::WarpedMind, Perks::Telepathy, Perks::VoidNature, Perks::NaturalWeapons});
    
    return initializedRaces;
}

void Races::SelectHorns(Race& magin)
{
    std::list<Perk> Features = magin.GetFeatures();
    std::list<Perk>::iterator itp = Features.begin();
    int i = 1;
    std::string temp;
    int selection;
    char *n;

    while((*Features.begin()).GetName() == Perks::MysticalHorns.GetName())
    {
        std::cout << "\nPerk: " << Perks::MysticalHorns.GetName() << ": " << Perks::MysticalHorns.GetDescription() << '\n';
        std::cout << "Please Input Selection: ";
        for(itp=Perks::Horns.begin(); itp!=Perks::Horns.end(); itp++) 
        {
            std::cout << '\n' << i << ". "<< (*itp).GetName();
            i++;
        }

        std::cout << '\n';
        std::cin >> temp;

        selection = strtol(temp.c_str(), &n, 10);

        if(*n)
        {
            std::cout << "\nInput not a number, try again(check for any spaces)";
        }
        else if(selection > 7 && selection < 1)
        {
            std::cout << "\nInvalid Input, try again";
        }
        else
        {
            itp = Features.begin();

            switch (selection)
            {
            case 1:
                (*itp) = Perks::MindHorns;
                break;
            case 2:
                (*itp) = Perks::SoulHorns;
                break;
            case 3:
                (*itp) = Perks::CryoHorns;
                break;
            case 4:
                (*itp) = Perks::AquaHorns;
                break;
            case 5:
                (*itp) = Perks::FlameHorns;
                break;
            case 6:
                (*itp) = Perks::EarthHorns;
                break;
            case 7:
                (*itp) = Perks::ThunderHorns;
                break;
            }
        }
    }
    magin.SetFeatures(Features);
}