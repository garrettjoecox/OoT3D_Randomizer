#pragma once
#include <stdlib.h>
#include <string>
#include <vector>

class Option {
  public:
    Option(std::string* var_, std::string name_, std::vector<std::string> options_)
          :         var(var_),       name(name_),                 options(options_) {

        selectedOption = 0;
    }

    std::string* var;
    std::string name;
    std::vector<std::string> options;
    int selectedOption;

};

class Menu {
  public:
    Menu(std::string name_, std::vector<Option *> optionsList_)
        :       name(name_),        optionsList(optionsList_) {
          selectedSetting = 0;
        }

    std::string name;
    std::vector<Option *> optionsList;
    int selectedSetting;
};

namespace Settings {
  extern bool HasNightStart;
  extern bool BombchusInLogic;
  extern bool BombchuDrop;
  extern bool OpenDoorOfTime;
  extern bool SkippedTrials;

  extern std::string OpenForest;
  extern std::string OpenKakariko;
  extern std::string Bridge;
  extern std::string LACSCondition;
  extern std::string GerudoFortress;
  extern std::string DamageMultiplier;
  extern std::string ZorasFountain;
  extern std::string StartingAge;
  extern std::string Keysanity;
  extern std::string BossKeysanity;
  extern std::string MapsAndCompasses;
  extern std::string Skullsanity;
  extern std::string Scrubsanity;

  extern bool ShuffleDungeonEntrances;
  extern bool ShuffleOverworldEntrances;
  extern bool ShuffleInteriorEntrances;
  extern bool ShuffleSpecialIndoorEntrances;
  extern bool ShuffleWeirdEgg;
  extern bool ShuffleGerudoToken;
  extern bool ShuffleZeldasLetter;
  extern bool ShuffleKokiriSword;
  extern bool ShuffleSongs;
  extern bool Shopsanity;

  //Logic Settings
  extern bool LogicMidoBackflip;
  extern bool LogicLostWoodsBridge;
  extern bool LogicGrottosWithoutAgony;
  extern bool LogicBiggoronBolero;
  extern bool LogicGerudoKitchen;
  extern bool LogicWaterHookshotEntry;
  extern bool LogicLensWasteland;
  extern bool LogicReverseWasteland;
  extern bool LogicVisibleCollision;
  extern bool LogicManOnRoof;
  extern bool LogicKakarikoTowerGS;
  extern bool LogicDMTBombable;
  extern bool LogicLinkGoronDins;
  extern bool LogicGoronCityLeftMost;
  extern bool LogicGoronCityPot;
  extern bool LogicGoronCityPotWithStrength;
  extern bool LogicChildRollingWithStrength;
  extern bool LogicCraterUpperToLower;
  extern bool LogicCraterBeanPoHWithHovers;
  extern bool LogicFewerTunicRequirements;
  extern bool LogicZoraWithHovers;
  extern bool LogicZoraWithCucco;
  extern bool LogicDekuB1Skip;
  extern bool LogicDekuB1WebsWithBow;
  extern bool LogicDCStaircase;
  extern bool LogicDCJump;
  extern bool LogicDCSlingshotSkip;
  extern bool LogicJabuBossGSAdult;
  extern bool LogicForestVines;
  extern bool LogicForestScarecrow;
  extern bool LogicForestOutsideBackdoor;
  extern bool LogicLabDiving;
  extern bool LogicZoraRiverLower;
  extern bool LogicZoraRiverUpper;
  extern bool LogicGraveyardPoH;
  extern bool LogicChildDampeRacePoH;
  extern bool LogicFireBossDoorJump;
  extern bool LogicFireStrength;
  extern bool LogicFireScarecrow;
  extern bool LogicFireFlameMaze;
  extern bool LogicWaterTempleTorchLongshot;
  extern bool LogicWaterCentralBow;
  extern bool LogicWaterCrackedWallNothing;
  extern bool LogicWaterCrackedWallHovers;
  extern bool LogicWaterBossKeyRegion;
  extern bool LogicWaterDragonBombchu;
  extern bool LogicWaterBKJumpDive;
  extern bool LogicWaterBKChest;
  extern bool LogicWaterNorthBasementLedgeJump;
  extern bool LogicWaterDragonBombchu;
  extern bool LogicWaterDragonJumpDive;
  extern bool LogicWaterNorthBasementLedgeJump;
  extern bool LogicWaterBKChest;
  extern bool LogicWaterDragonJumpDive;
  extern bool LogicSpiritLowerAdultSwitch;
  extern bool LogicSpiritChildBombchu;
  extern bool LogicSpiritWall;
  extern bool LogicSpiritLobbyGS;
  extern bool LogicSpiritMapChest;
  extern bool LogicSpiritSunChest;
  extern bool LogicShadowFireArrowEntry;
  extern bool LogicShadowUmbrella;
  extern bool LogicShadowFreestandingKey;
  extern bool LogicShadowStatue;
  extern bool LogicBotwCageGS;
  extern bool LogicChildDeadhand;
  extern bool LogicGtgWithoutHookshot;
  extern bool LogicGtgFakeWall;
  extern bool LogicLensSpirit;
  extern bool LogicLensShadow;
  extern bool LogicLensShadowBack;
  extern bool LogicLensBotw;
  extern bool LogicLensGtg;
  extern bool LogicLensCastle;
  extern bool LogicSpiritTrialHookshot;
  extern bool LogicLostWoodsGSBean;
  extern bool LogicLabWallGS;
  extern bool LogicColossusGS;
  extern bool LogicDMTSoilGS;
  extern bool LogicDekuBasementGS;
  extern bool LogicDCScarecrowGS;
  extern bool LogicForestOutdoorEastGS;
  extern bool LogicFireSongOfTime;
  extern bool LogicWaterRiverGS;
  extern bool LogicWaterFallingPlatformGS;

  extern void UpdateSettings();

  extern std::vector<Option *> Options;
  extern std::vector<Menu> mainMenu;
}
