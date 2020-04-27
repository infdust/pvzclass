#include "PlantType.h"

const char* PlantType::ToString(PlantType plantt)
{
	switch (plantt)
	{
	case PlantType::None:
		return "PlantTypeNone";
	case PlantType::Peashooter:
		return "Peashooter";
	case PlantType::Sunflower:
		return "Sunflower";
	case PlantType::CherryBomb:
		return "CherryBomb";
	case PlantType::Wallnut:
		return "Wallnut";
	case PlantType::PotatoMine:
		return "PotatoMine";
	case PlantType::SnowPea:
		return "SnowPea";
	case PlantType::Chomper:
		return "Chomper";
	case PlantType::Repeater:
		return "Repeater";
	case PlantType::Puffshroon:
		return "Puffshroon";
	case PlantType::Sunshroon:
		return "Sunshroon";
	case PlantType::Fumeshroon:
		return "Fumeshroon";
	case PlantType::CraveBuster:
		return "CraveBuster";
	case PlantType::Hypnoshroon:
		return "Hypnoshroon";
	case PlantType::Scaredyshroon:
		return "Scaredyshroon";
	case PlantType::Iceshroon:
		return "Iceshroon";
	case PlantType::Doomshroon:
		return "Doomshroon";
	case PlantType::LilyPad:
		return "LilyPad";
	case PlantType::Squash:
		return "Squash";
	case PlantType::Threepeater:
		return "Threepeater";
	case PlantType::TangleKelp:
		return "TangleKelp";
	case PlantType::Jalapeno:
		return "Jalapeno";
	case PlantType::Spickweed:
		return "Spickweed";
	case PlantType::Tochwood:
		return "Tochwood";
	case PlantType::Tallnut:
		return "Tallnut";
	case PlantType::Seashroon:
		return "Seashroon";
	case PlantType::Plantern:
		return "Plantern";
	case PlantType::Cactus:
		return "Cactus";
	case PlantType::Blover:
		return "Blover";
	case PlantType::SplitPea:
		return "SplitPea";
	case PlantType::Starfruit:
		return "Starfruit";
	case PlantType::Pumplin:
		return "Pumplin";
	case PlantType::Magnetshroom:
		return "Magnetshroom";
	case PlantType::Cabbagepult:
		return "Cabbagepult";
	case PlantType::FlowerPot:
		return "FlowerPot";
	case PlantType::Kernelpult:
		return "Kernelpult";
	case PlantType::CoffeeBean:
		return "CoffeeBean";
	case PlantType::Garlic:
		return "Garlic";
	case PlantType::UmbrellaLeaf:
		return "UmbrellaLeaf";
	case PlantType::Marigold:
		return "Marigold";
	case PlantType::Melonpult:
		return "Melonpult";
	case PlantType::GatlingPea:
		return "GatlingPea";
	case PlantType::TwinSunflower:
		return "TwinSunflower";
	case PlantType::Gloomshroom:
		return "Gloomshroom";
	case PlantType::Cattail:
		return "Cattail";
	case PlantType::WinterMelon:
		return "WinterMelon";
	case PlantType::GoldMagnet:
		return "GoldMagnet";
	case PlantType::Spikerock:
		return "Spikerock";
	case PlantType::CobCannon:
		return "CobCannon";
	case PlantType::Imitater:
		return "Imitater";
	case PlantType::Explodenut:
		return "Explodenut";
	case PlantType::GiantWallnut:
		return "GiantWallnut";
	case PlantType::Sprout:
		return "Sprout";
	case PlantType::LeftRepeater:
		return "LeftRepeater";
	default:
		return "InValid_Value_Of_PlantType";
	}

}