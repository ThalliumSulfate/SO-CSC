#include <perks.h>

//human perks
Perk Perks::HumanAdaptability = Perk("Human Adaptability", "You gain 2 extra Perk Points at character creation, 2 points to allocate in any stat and +1 to two skills of your choice.", true);
Perk Perks::HumanDetermination = Perk("Human Determination", "Humans can retry any roll freely a third time after their second attempt if it fails.", false);
//fae perks
Perk Perks::ShadowBlink = Perk("Shadow Blink", "Thrice per short rest you are able to teleport to any shadow in your field of view. No matter the distance.", true);
Perk Perks::FaeFortune = Perk("Fae Fortune", "You start with +2 on Luck.", false);
Perk Perks::MischievousNature = Perk("Mischievous Nature", "At any moment if you successfully trick or deceive someone, you obtain a fae shield of +1 for each time you succeed (up to +2 for each class level).", false);
Perk Perks::AdaptableAppetite = Perk("Adaptable Appetite", "You are able to eat things that aren't considered food, only if they match an edible size for you.", false);
Perk Perks::FragileBody = Perk("FragileBody", "You take an extra 1d6 of damage each successful physical attack against you", false);
//magin perks
Perk Perks::MysticalHorns = Perk("Mystical Horns", "Choose your horn type, this will determine the type of magic that you will have affinity with, be able to learn spells from that type and also be able to cast spells from that type without losing Sanity.", true);
Perk Perks::MindHorns = Perk("Mind Horns", "Your Horns grant you an affinity in mind magic, you can learn mind spells and can cast mind magic without losing sanity.", true);
Perk Perks::SoulHorns = Perk("Soul Horns", "Your Horns grant you an affinity in soul magic, you can learn soul spells and can cast soul magic without losing sanity.", true);
Perk Perks::CryoHorns = Perk("Cryo Horns", "Your Horns grant you an affinity in cryo magic, you can learn cryo spells and can cast cryo magic without losing sanity.", true);
Perk Perks::AquaHorns = Perk("Aqua Horns", "Your Horns grant you an affinity in aqua magic, you can learn aqua spells and can cast aqua magic without losing sanity.", true);
Perk Perks::FlameHorns = Perk("Flame Horns", "Your Horns grant you an affinity in flame magic, you can learn flame spells and can cast flame magic without losing sanity.", true);
Perk Perks::EarthHorns = Perk("Earth Horns", "Your Horns grant you an affinity in earth magic, you can learn earth spells and can cast earth magic without losing sanity.", true);
Perk Perks::ThunderHorns = Perk("Thunder Horns", "Your Horns grant you an affinity in thunder magic, you can learn thunder spells and can cast thunder magic without losing sanity.", true);
std::list<Perk> Perks::Horns = {MindHorns, SoulHorns, CryoHorns, AquaHorns, FlameHorns, EarthHorns, ThunderHorns};
Perk Perks::MagicalInitiation = Perk("Magical Initiation", "You know 2 cantrips of your choice, as well as 2 level 1 or level 2 spells of your choice, and learning new spells takes only half the time required.", false);
Perk Perks::ArcaneEducation = Perk("Arcane Education", "You start with proficiency in the Occult skill.", false);
//nyx perks
Perk Perks::RitualOfFlesh = Perk("Ritual Of Flesh", "You are able to perform a ritual using a corpse, once the ritual is complete, you earn HP and Sanity equal to your class level, you can only do this once per short rest.", true);
Perk Perks::RitualOfEmpowerment = Perk("Ritual Of Empowerment", "You can sacrifice half of your HP in a ritual to augment some of your powers, granting you +5 to spell attack and damage rolls. This effect lasts up to 1 hour.", true);
Perk Perks::UncaringNature = Perk("Uncaring Nature", "Any reduction to your sanity is reduced by half.", false);
//evelet perks
Perk Perks::PowerfulJumping = Perk("Powerful Jumping", "You can use 3 Action points, to allow you to jump twice your Speed to a free space or vertical position of your choice.", true);
Perk Perks::PerksOfPrey = Perk("Perks Of Prey", "Your Perception is increased by +2, your Body by +2 and Reflexes by +1.", false);
Perk Perks::Herbivore = Perk("Herbivore", "You can only consume vegetables, fruits and anything made of flesh sickens you when eaten, and also reduces your sanity by 10.", false);
Perk Perks::LuckyCharm = Perk("Lucky Charm", "You magically obtain a free luck coin each long rest.", false);
//lites perks
Perk Perks::SizeNimbleness = Perk("Size Nimbleness", "Your speed is increased by +10 and you are able to occupy the same space as another character as well as moving through them.", true);
Perk Perks::SmallButQuick = Perk("Small But Quick", "You obtain -2 to your Body but you obtain +3 to Reflexes.", false);
//Mockrc perks
Perk Perks::ShapeshiftingProwess = Perk("Shapeshifting Prowess", "You are able to shapeshift your body to take the appearance of any humanoid person you previously saw, as well as taking the shape of any object that resembles your size.", true);
Perk Perks::MorphicAdaptability = Perk("Morphic Adaptability", "You are able to allocate +2 to any Stat of your choice, and +2 to another Stat.", false);
Perk Perks::FleshWeaponry = Perk("Flesh Weaponry", "You are able to morph your limbs to become improvised weapons such as swords or claws. Having the ability to dual wield if necessary.", false);
//Demon Perks
Perk Perks::SoulFeeding = Perk("Soul Feeding", "You are able to drain the vitality of other beings by touching them, this causes 2d6 damage and you heal the amount of damage done, you can do that twice per long rest as well costs 2 action points.", true);
Perk Perks::DemonicWings = Perk("Demonic Wings", "You are able to fly, up to your Speed.", false);
Perk Perks::FleshDiet = Perk("Flesh Diet", "You can only consume flesh and meat.", false);
//Construct perks
Perk Perks::AdaptiveSystems = Perk("Adaptive Systems", "Your internal mechanisms adjust to resist the effects of spells and abilities used against you. After taking damage from a specific damage type, you gain resistance to that type until the end of your next turn.", true);
Perk Perks::ModularBody = Perk("Modular Body", "Your mechanical nature allows you to be fitted with upgrades obtained during your adventures that can give you new abilities and perks.", false);
Perk Perks::ArtificialMetabolism = Perk("Artificial Metabolism", "You don't need to eat, or sleep, but you will require a new power cell each long rest to keep functioning.", false);
//Chlorfolk perks
Perk Perks::VegetalRejuvination = Perk("Vegetal Rejuvination", "As long as you stay under sunlight for at least 4 hours, you can recover HP equal to half your max HP.", true);
Perk Perks::Photosynthesis = Perk("Photosynthesis", "You can't consume vegetables or meat, instead you need direct exposure to sunlight and water in order to feed, each hour under sunlight and each time you are hydrated you fill 5 Hunger.", false);
//Voidtouched
Perk Perks::VoidPower = Perk("Void Power", "Your unarmed attacks deal 2d6 more damage and the damage can be slashing or piercing. Additionally you can do a new type of damage Void that does half the damage you do to the creature´s Sanity.", true);
Perk Perks::WarpedMind = Perk("Warped Mind", "You are able to learn Mind spells easily, taking only half the time required to learn them, and you start knowing 1 cantrip and 2 Spells of rank 1 to 2 of Mind magic.", false);
Perk Perks::VoidNature = Perk("Void Nature", "You don't age, but you can die, you also don't require food or drink and don't suffer penalties for not sleeping.", false);
//Horriblius perks
Perk Perks::HorriblePresence = Perk("Horrible Presence", "As a Horriblius, you always gain advantage on any Intimidation rolls and you can also use the Fear ability naturally.", true);
Perk Perks::FeralNature = Perk("Feral Nature", "You gain +2 to Body and proficiency in Survival.", false);
Perk Perks::TerrorificAppearance = Perk("Terrorific Appearance", "You gain a permanent 2 AR that is never reduced.", false);
//Cuti perks
Perk Perks::JustAdorable = Perk("Just Adorable", "As a Cuti, you can naturally Charm other creatures to make them do your bidding after a successful roll against them, this lasts for one turn and you cannot do that again to the same creature afterwards.", true);
Perk Perks::AdorablePresence = Perk("Adorable Presence", "As a Cuti, you can use the Charm ability naturally, and also have a permanent advantage in Persuasion rolls.", false);
Perk Perks::CuteLooks = Perk("Cute Looks", "You gain +3 to Charisma.", false);
//Satyr perks
Perk Perks::AbyssWalking = Perk("Abyss Walking", "Satyrs have natural skill for survival in deadly environments, for this reason, twice per long rest you can add half your level to a roll about avoiding a dangerous natural situation (non-combat related).", true);
Perk Perks::AbyssDefence = Perk("Abyss Defense", "Due to the effects of being constantly exposed to the abyss, you obtain natural resistance to Magical damage. You also gain +2 Reflex and +1 Body", false);
Perk Perks::PowerfulLegs = Perk("Poweful Legs", "Gain +10 Running speed", false);
//Titan perks
Perk Perks::ToweringForce = Perk("Towering Force", " Using 4 Action Points you obtain immunity to any movement restrictive conditions and your DR cannot be reduced for one turn. You can only do this once per long rest.", true);;
Perk Perks::PowerfulBuild = Perk("Powerful Build", "Because of your powerful body, whenever your HP would reach 0, it instead stays at 1 HP, once per Long rest, you also have +3 in Body and +3 Natural AR.", false);
//Arakin perks
//all elemental adept abilities need to be modified
Perk Perks::ElementalAdept = Perk("Elemental Adept", "Pick an magic element depending on your element you gain an elemental feature of your choice", true);
Perk Perks::ElementalAdeptAqua = Perk("Elemental Adept(Aqua)", "You may move through water without hindrance as well you gain a swimming speed equal to your movement speed. You gain the ability to breathe underwater. Additionally whenever healing you gain 3d6.",true);
Perk Perks::ElementalAdeptMind = Perk("Elemental Adept(Mind)", "You gain the ability to speak telepathically with a range of 60ft.Additionally you gain proficiency in three intellect related skills", true);
Perk Perks::ElementalAdeptFlame = Perk("Elemental Adept(Flame)", "Whenever casting a fire spell or cantrip you gain double the damage die. You can easily survive in hot environments as well.", true);
Perk Perks::ElementalAdeptCryo = Perk("Elemental Adept(Cryo)", "You gain resistance to cold damage and can easily survive in cold environments", true);
Perk Perks::ElementalAdeptSoul = Perk("Elemental Adept(Soul)", "once per short rest you may teleport up to 60ft \nOnce per short rest you may speak with the spirit of a corpse additionally you gain advantage on all checks against the spirit.", true);
Perk Perks::ElementalAdeptThunder = Perk("Elemental Adept(Thunder)", "You gain advantage and resistance to being stunned or paralysis. Additionally when hit by a thunder or lighting damage it heals you instead of dealing damage.", true);
Perk Perks::ElementalAdeptEarth = Perk("Elemental Adept(Earth)", "You gain a DEF of 2 that can never be reduced. \nAdditionally you gain the ability to borrow and dig your movement speed however you have to appear on ground after the end of your turn. If attacking someone after borrowing you deal an extra damage die.", true);
Perk Perks::ElementalAdeptAir = Perk("Elemental Adept(Air)", "You gain a flying speed up to your movement speed you as well gain a bonus to your movement speed of 10ft.", true);
Perk Perks::ElementalAdeptShadow = Perk("Elemental Adept(Shadow)", "You gain advantage on stealth checks in dim or darkness as well. Additionally you may see through darkness as if it was shades of gray.", true);
Perk Perks::ElementalAdeptLight = Perk("Elemental Adept(Light)", "Any sanity Regenerations for you and any ally is regained by double. Additionally you may choose to glow that even pierces magical darkness up to 30ft.", true);
Perk Perks::ElementalAdeptIllusion = Perk("Elemental Adept(Illusion)", "You gain resistance to non-magical bludgeoning, piercing, and slashing damage. Additionally, once per short rest, you can turn invisible for 1 minute for the cost of 5 action points.", true);
Perk Perks::ElementalAdeptLuck = Perk("Elemental Adept(Luck)", "Any luck coins you have from your luck stat are doubled. Additionally when making an attack roll or ability roll you may roll another d20 and add it to the roll. You may use this feature 4 times per long rest", true);
Perk Perks::ElementalAdeptEnchant = Perk("Elemental Adept(Enchant)", "You may permanently enchant a weapon to give it a +2 to attack and damage rolls. \nAdditionally whenever you enchant something its effects are doubled.", true);
std::list<Perk> Perks::AdeptedTypes = {ElementalAdeptAqua, ElementalAdeptMind, ElementalAdeptFlame, ElementalAdeptCryo, ElementalAdeptSoul, ElementalAdeptThunder, ElementalAdeptEarth, ElementalAdeptAir, ElementalAdeptShadow, ElementalAdeptLight, ElementalAdeptIllusion, ElementalAdeptLuck, ElementalAdeptEnchant};
Perk Perks::ElementalSpecialist = Perk("Elemental Specialist", "Depending on the Arcakin element, it has advantages on abilities and checks of the element they represent.", false);
//Candlefolk perks
Perk Perks::EternalFlame = Perk("Eternal Flame", "You are constantly surrounded by flames, any melee attacker receives 2d6 Fire damage after attacking you. Also your melee or range physical attacks deal an additional 1d6 Fire damage. ", true);
Perk Perks::NaturalPyrokinesis = Perk("Natural Pyrokinesis", "Your flaming body allows you to gain immunity to fire damage.", false);
Perk Perks::LivingLightSource = Perk("Living Light Source", "You may choose to glow light up to 30 ft.", false);
//Gorkin perks
Perk Perks::ApeStrong = Perk("Strong Body", "Anytime you attack with your fists, you can add your BODY level as additional damage. You can also add your BODY level to any check involving strength and physical prowess.", true);
Perk Perks::PrimalStrength = Perk("Primal Strength", "You have proficiency in Fitness and you gain +3 on BODY.", false);
Perk Perks::ApeEndurance = Perk("Gorilla Endurance", "Your HP increases by an additional +2 for each BODY level you have.", false);

//Misc perks
Perk Perks::NightVision = Perk("Night Vision", "You are able to see in the darkness up to 10 meters, seeing things in shades of gray instead of colors.", false);
Perk Perks::Telepathy = Perk("Telepathy", "You are able to speak to the minds of other creatures up to 30 ft around yourself.", false);

void Perks::InitStats()
{   
    HumanAdaptability.SetExtraPerkPoints(2);
    HumanAdaptability.SetSkillBonuses(std::map<int, int> {2, 1});
    HumanAdaptability.SetStatBonuses(std::map<int, int> {2, 1});

    FaeFortune.SetLuckBonus(2);

    PerksOfPrey.SetPerBonus(2);
    PerksOfPrey.SetBodyBonus(2);
    PerksOfPrey.SetRefBonus(1);

    SmallButQuick.SetBodyBonus(-2);
    SmallButQuick.SetRefBonus(3);

    MorphicAdaptability.SetStatBonuses(std::map<int, int> {2, 2});

    FeralNature.SetBodyBonus(2);

    CuteLooks.SetCharBonus(3);

    AbyssDefence.SetRefBonus(2);
    AbyssDefence.SetBodyBonus(1);

    PowerfulBuild.SetBodyBonus(3);

    PrimalStrength.SetBodyBonus(3);
}