#include "global.h"
#include "strings.h"

#if ENGLISH

// placeholder strings
const u8 gExpandedPlaceholder_Empty[] = _("");
const u8 gExpandedPlaceholder_Kun[] = _("");
const u8 gExpandedPlaceholder_Chan[] = _("");
const u8 gExpandedPlaceholder_Sapphire[] = _("ZAFIRO");
const u8 gExpandedPlaceholder_Ruby[] = _("RUBÍ");
const u8 gExpandedPlaceholder_Aqua[] = _("AQUA");
const u8 gExpandedPlaceholder_Magma[] = _("MAGMA");
const u8 gExpandedPlaceholder_Archie[] = _("AQUILES");
const u8 gExpandedPlaceholder_Maxie[] = _("MAGNO");
const u8 gExpandedPlaceholder_Kyogre[] = _("KYOGRE");
const u8 gExpandedPlaceholder_Groudon[] = _("GROUDON");
const u8 gExpandedPlaceholder_Brendan[] = _("BRUNO");
const u8 gExpandedPlaceholder_May[] = _("AURA");

// system text
const u8 gSystemText_Egg[] = _("HUEVO");
const u8 gSystemText_Pokemon2[] = _("POKéMON");

// main menu text
const u8 gMainMenuString_NewGame[] = _("PARTIDA NUEVA");
const u8 gMainMenuString_Continue[] = _("CONTINUAR");
const u8 gMainMenuString_Option[] = _("OPCIONES");
const u8 gMainMenuString_MysteryEvents[] = _("EVENTOS MISTERIOSOS");

// system text 2
const u8 SystemText_UpdatingSaveExternal[] = _("Actualizando archivo guardado usando\ndatos externos. Por favor, espere.");
const u8 SystemText_SaveUpdated[] = _("El archivo guardado se ha actualizado.");
const u8 SystemText_SaveUpdatedExchangeBackup[] = _("El archivo guardado se ha\nactualizado.\pNo se pueden guardar datos adicionales\nen la memoria de respaldo.\pPor favor intercámbiala.\pPara más detalles, contacte\ncon el creador del fangame.");
const u8 SystemText_SaveNotUpdated[] = _("El archivo guardado no se pudo\nactualizar.\pPor favor, cambia la\nmemoria de respaldo.\pPara más detalles, contacte\ncon el creador del fangame.");

// save file text
const u8 gSaveFileCorruptMessage[] = _("El archivo guardado está corrupto. Se\ncargará el anterior archivo.");
const u8 gSaveFileDeletedMessage[] = _(" El archivo se ha eliminado...");

// system text 3
const u8 gBoardNotInstalledMessage[] = _("La placa de sub-circuito de 1M\nno está instalada.");
const u8 gBatteryDryMessage[] = _("La pila interna est{23} agotada,\npero se puede jugar.\pSin embargo, no se producir{23}\nning{39}n evento temporal.");

// main menu text 2
const u8 gMainMenuString_Player[] = _("JUGADOR");
const u8 gMainMenuString_Pokedex[] = _("POKéDEX");
const u8 gMainMenuString_Time[] = _("TIEMPO");
const u8 gMainMenuString_Badges[] = _("MEDALLAS");

// birch text
const u8 gBirchText_Boy[] = _("CHICO");
const u8 gBirchText_Girl[] = _("CHICA");
const u8 gBirchText_NewName[] = _("OTRO NOMBRE");

#ifdef SAPPHIRE
const u8 gDefaultBoyName1[] = _("TEREN");
#else
const u8 gDefaultBoyName1[] = _("TEREN");
#endif
const u8 gDefaultBoyName2[] = _("QUIMI");
const u8 gDefaultBoyName3[] = _("RUFO");
const u8 gDefaultBoyName4[] = _("ARTURO");

#ifdef SAPPHIRE
const u8 gDefaultGirlName1[] = _("TERESA");
#else
const u8 gDefaultGirlName1[] = _("TERESA");
#endif
const u8 gDefaultGirlName2[] = _("RAQUEL");
const u8 gDefaultGirlName3[] = _("MARIAU");
const u8 gDefaultGirlName4[] = _("SARA");

const u8 gSystemText_IntroWeCall[] = _("Esto es lo que llamamos\nPOKéMON.");
const u8 gSystemText_NewPara[] = _("\p");

const u8 gDexText_UnknownPoke[] = _("Pokémon"); //Dex Text
const u8 gDexText_UnknownHeight[] = _("{CLEAR_TO 0x0C}?? m");
const u8 gDexText_UnknownWeight[] = _("???   kg$"); // extra terminator?
const u8 gDexText_CryOf[] = _("{CLEAR_TO 2}CRY OF$"); // extra terminator?
const u8 gDexText_SizeComparedTo[] = _("TAMAÑO COMPARADO ");
const u8 gDexText_RegisterComplete[] = _("Registro de POKéDEX completado");
const u8 gDexText_Searching[] = _("Buscando...\nPor favor, espera.");
const u8 gDexText_SearchComplete[] = _("Busqueda completa.");
const u8 gDexText_NoMatching[] = _("No se encontró ningún POKéMON.");

const u8 DexText_SearchForPoke[] = _("Buscar POKéMON según los\nparámetros seleccionados.");
const u8 DexText_SwitchDex[] = _("Cambiar el orden de la POKéDEX.");
const u8 DexText_ReturnToDex[] = _("Volver a la POKéDEX.");
const u8 DexText_SelectDexMode[] = _("Elegir el modo de ordenar la POKéDEX.");
const u8 DexText_SelectDexList[] = _("Seleccionar el orden de la POKéDEX.");
const u8 DexText_ListByABC[] = _("Ordenar alfabéticamente.\n/Sólo POKéMON avistados.");
const u8 DexText_ListByColor[] = _("Ordenar por color.\n/Sólo POKéMON avistados.");
const u8 DexText_ListByType[] = _("Ordenar por tipo.\n/Sólo POKéMON capturados.");
const u8 DexText_ExecuteSearchSwitch[] = _("Realizar la búsqueda.");
const u8 DexText_HoennDex[] = _("DEX HOENN");
const u8 DexText_NationalDex[] = _("DEX NACIONAL ");
const u8 DexText_NumericalMode[] = _("NUMÉRICO");
const u8 DexText_ABCMode[] = _("ALFABÉTICO");
const u8 DexText_HeaviestMode[] = _("MÁS PESADOS");
const u8 DexText_LightestMode[] = _("MÁS LIGEROS");
const u8 DexText_TallestMode[] = _("MÁS ALTOS");
const u8 DexText_SmallestMode[] = _("MÁS BAJOS");
const u8 DexText_ABC[] = _("ABC");
const u8 DexText_DEF[] = _("DEF");
const u8 DexText_GHI[] = _("GHI");
const u8 DexText_JKL[] = _("JKL");
const u8 DexText_MNO[] = _("MNO");
const u8 DexText_PQR[] = _("PQR");
const u8 DexText_STU[] = _("STU");
const u8 DexText_VWX[] = _("VWX");
const u8 DexText_YZ[] = _("YZ");
const u8 DexText_Red[] = _("ROJO");
const u8 DexText_Blue[] = _("AZUL");
const u8 DexText_Yellow[] = _("AMARILLO");
const u8 DexText_Green[] = _("VERDE");
const u8 DexText_Black[] = _("NEGRO");
const u8 DexText_Brown[] = _("MARRÓN");
const u8 DexText_Purple[] = _("MORADO");
const u8 DexText_Gray[] = _("GRIS");
const u8 DexText_White[] = _("BLANCO");
const u8 DexText_Pink[] = _("ROSA");
const u8 DexText_HoennDex2[] = _("POKéDEX de HOENN");
const u8 DexText_NationalDex2[] = _("POKéDEX nacional");
const u8 DexText_ListByNumber[] = _("POKéMON ordenados según\nsu numeración.");
const u8 DexText_ListByABC2[] = _("POKéMON avistados y capturados\nordenados alfabéticamente.");
const u8 DexText_ListByHeavyToLightest[] = _("POKéMON capturados ordenados\nde mayor a menor peso.");
const u8 DexText_ListByLightToHeaviest[] = _("POKéMON capturados ordenados\nde menor a mayor peso.");
const u8 DexText_ListByTallToSmallest[] = _("POKéMON capturados ordenados\nde mayor a menor altura.");
const u8 DexText_ListBySmallToTallest[] = _("POKéMON capturados ordenados\nde menor a mayor altura.");
const u8 DexText_Terminator5[] = _("");
const u8 DexText_DontSpecify[] = _("CUALQUIERA.");
const u8 DexText_None[] = _("TODOS");
const u8 DexText_RightPointingTriangle[] = _("▶"); // right pointing triangle
const u8 DexText_Terminator6[] = _(" ");

const u8 gMenuText_WelcomeToHOFAndDexRating[] = _("¡Bienvenido al HALL DE LA FAMA!$POKéMON avistados: {STR_VAR_1}!\nPOKéMON capturados: {STR_VAR_2}!\p¡Calificación POKéDEX de PROF. ABEDUL!\pPROF. ABEDUL: Vamos a ver...\p");
const u8 gMenuText_HOFSaving[] = _("GUARDANDO...\nNO APAGUES LA CONSOLA.");
const u8 gMenuText_HOFCorrupt[] = _("Los datos del HALL DE LA FAMA\nestán corruptos.");
const u8 gMenuText_HOFNumber[] = _("No. del HALL DE LA FAMA ");
const u8 gMenuText_HOFCongratulations[] = _("¡CAMPEÓN DE LA LIGA!\n¡FELICIDADES!");

const u8 gOtherText_Number2[] = _("No. ");
const u8 gOtherText_Level3[] = _("Nv. ");
const u8 gOtherText_IDNumber[] = _("IDNo. /");
const u8 gOtherText_Name[] = _("NOMBRE /");
const u8 gOtherText_IDNumber2[] = _("IDNo. /");
const u8 gOtherText_BirchInTrouble[] = _("{HIGHLIGHT WHITE2}{COLOR DARK_GREY}El PROF. ABEDUL tiene problemas!\n¡Elige un POKéMON y ayúdale!");
const u8 gOtherText_DoYouChoosePoke[] = _("{HIGHLIGHT WHITE2}{COLOR DARK_GREY}¿Quieres este POKéMON?");
const u8 gOtherText_Poke[] = _("POKéMON");

const u8 gSystemText_SaveErrorExchangeBackup[] = _("Error al guardar.\pPor favor, cambia\nla memoria.");
const u8 gOtherText_FlyToWhere[] = _("¿VOLAR adónde?");

const u8 OtherText_Use[] = _("USAR");
const u8 OtherText_Toss[] = _("TIRAR");
const u8 OtherText_Register[] = _("REGISTRAR");
const u8 OtherText_Give2[] = _("DAR");
const u8 OtherText_CheckTag[] = _("CHECK TAG");
const u8 OtherText_Confirm[] = _("CONFIRMAR");
const u8 gOtherText_Walk[] = _("ANDAR");

const u8 gOtherText_Exit[] = _("SALIR");
const u8 gOtherText_CancelNoTerminator[] = _("SALIR");
const u8 gOtherText_CancelWithTerminator[] = _("$SALIR"); // with terminator at beginning?

const u8 OtherText_Item[] = _("OBJETO");
const u8 OtherText_Mail[] = _("CORREO");
const u8 OtherText_Take2[] = _("TOMAR");
const u8 OtherText_Store[] = _("GUARDAR");

const u8 gOtherText_Check[] = _("COMPROBAR");
const u8 gOtherText_None[] = _("NONE");

const u8 gOtherText_ThreeQuestions2[] = _("???");

const u8 gOtherText_FiveQuestions[] = _("?????");
const u8 gOtherText_Slash[] = _("/");

const u8 gOtherText_OneDash[] = _("-");
const u8 gOtherText_TwoDashes[] = _("--");
const u8 gOtherText_ThreeDashes2[] = _("---");
const u8 gOtherText_MaleSymbol2[] = _("♂");
const u8 gOtherText_FemaleSymbol2[] = _("♀");
const u8 gOtherText_Lv[] = _("Lv.");
const u8 gOtherText_TallPlusAndRightArrow[] = _("{TALL_PLUS}${RIGHT_ARROW}");
const u8 gMenuText_GoBackToPrev[] = _("Volver al\nmenú anterior.");
const u8 gOtherText_WhatWillYouDo[] = _("¿Qué quieres hacer?");

const u8 gOtherText_xString1[] = _("×{STR_VAR_1}");
const u8 gOtherText_Berry2[] = _(" BAYA");
const u8 gOtherText_Coins2[] = _("{STR_VAR_1} MONEDAS");
const u8 gOtherText_CloseBag[] = _("CERRAR LA MOCHILA");

const u8 OtherText_TheField3[] = _("al juego.");
const u8 OtherText_TheBattle[] = _("a la batalla.");
const u8 OtherText_ThePokeList[] = _("a la LISTA POKéMON.");
const u8 OtherText_TheShop[] = _("a la tienda.");
const u8 OtherText_TheField[] = _("al campo.");
const u8 OtherText_TheField2[] = _("al campo.");
const u8 OtherText_ThePC[] = _("al PC.");

const u8 *const gUnknown_0840E740[7] =
{
    OtherText_TheField3,
    OtherText_TheBattle,
    OtherText_ThePokeList,
    OtherText_TheShop,
    OtherText_TheField,
    OtherText_TheField2,
    OtherText_ThePC,
};

const u8 gOtherText_ReturnTo[] = _("Volver");
const u8 gOtherText_WhatWillYouDo2[] = _("¿Que quieres\nhacer?");
const u8 gOtherText_CantWriteMail[] = _("No puedes escribir\nuna CARTA aquí.");
const u8 gOtherText_NoPokemon[] = _("No hay POKéMON.{PAUSE_UNTIL_PRESS}");
const u8 gOtherText_SwitchWhichItem[] = _("¿Cambiar con qué\nobjeto?");
const u8 gOtherText_CantBeHeld[] = _("{STR_VAR_1} no se puede llevar.");
const u8 gOtherText_CantBeHeldHere[] = _("{STR_VAR_1} no puede llevarlo aquí.");
const u8 gOtherText_HowManyToDeposit[] = _("¿Cuántos\nwquieres depositar?");
const u8 gOtherText_DepositedItems[] = _("{STR_VAR_1}{STR_VAR_2}\ndepositados.");
const u8 gOtherText_NoRoomForItems[] = _("No hay habitación para\nguardar objetos.");
const u8 gOtherText_CantStoreSomeoneItem[] = _("No puedes guardar\nlos objetos de otros\nen el PC.");
const u8 gOtherText_TooImportant[] = _("¡Esto es muy\nimportante para\ntirarlo!");
const u8 gOtherText_HowManyToToss[] = _("¿Cuántos tirar?");
const u8 gOtherText_ThrewAwayItem[] = _("Tiró {STR_VAR_2}\n{STR_VAR_1}(s).");
const u8 gOtherText_OkayToThrowAwayPrompt[] = _("¿Quieres\ntirar {STR_VAR_2}\n{STR_VAR_1}?");
const u8 gOtherText_DadsAdvice[] = _("Consejo de PAPÁ:\n¡{PLAYER}, cada cosa en su\lmomento!{PAUSE_UNTIL_PRESS}");
const u8 gOtherText_CantGetOffBike[] = _("Aquí no puedes bajarte de la BICI.{PAUSE_UNTIL_PRESS}");
const u8 gOtherText_ItemfinderResponding[] = _("¡Oh!\n¡La máquina reacciona!\p¡Por aquí hay un objeto enterrado!{PAUSE_UNTIL_PRESS}");
const u8 gOtherText_ItemfinderItemUnderfoot[] = _("¡La máquina indica que hay algo just\ndebajo de tus pies!{PAUSE_UNTIL_PRESS}");
const u8 gOtherText_NoResponse[] = _("Mmm... ¡Nada!\nNo reacciona.{PAUSE_UNTIL_PRESS}");
const u8 gOtherText_Coins3[] = _("Tus MONEDAS:\n{STR_VAR_1}{PAUSE_UNTIL_PRESS}");
const u8 gOtherText_BootedTM[] = _("Tiró una MT.");
const u8 gOtherText_BootedHM[] = _("Tiró una MO.");
const u8 gOtherText_ContainsMove[] = _("Contenía\n{STR_VAR_1}.\p¿Enseñar {STR_VAR_1}\na un POKéMON?");
const u8 gOtherText_UsedItem[] = _("{PLAYER} usó el\n{STR_VAR_2}.{PAUSE_UNTIL_PRESS}");
const u8 gOtherText_RepelLingers[] = _("Pero los efectos del REPELENTE\npersistieron.{PAUSE_UNTIL_PRESS}");
const u8 gOtherText_UsedFlute[] = _("{PLAYER} usó\n{STR_VAR_2}.\pLos POKéMON salvajes serán\natraídos.{PAUSE_UNTIL_PRESS}");
const u8 gOtherText_UsedRepel[] = _("{PLAYER} usó\n{STR_VAR_2}.\pLos POKéMON salvajes serán\nahuyentados.{PAUSE_UNTIL_PRESS}");
const u8 gOtherText_BoxIsFull[] = _("La caja está llena.{PAUSE_UNTIL_PRESS}");
const u8 gOtherText_Size[] = _("TAMAÑO /");
const u8 gOtherText_Firm[] = _("FIRMA /");

const u8 gContestStatsText_Unknown1[] = _("{STR_VAR_1}.{STR_VAR_2}”");

const u8 ContestStatsText_VerySoft[] = _("Muy suave");
const u8 ContestStatsText_Soft[] = _("Suave");
const u8 ContestStatsText_Hard[] = _("Fuerte");
const u8 ContestStatsText_VeryHard[] = _("Muy fuerte");
const u8 ContestStatsText_SuperHard[] = _("Super fuerte");

const u8 ContestStatsText_RedPokeBlock[] = _("{POKEBLOCK} ROJO");
const u8 ContestStatsText_BluePokeBlock[] = _("{POKEBLOCK} AZUL");
const u8 ContestStatsText_PinkPokeBlock[] = _("{POKEBLOCK} ROSA");
const u8 ContestStatsText_GreenPokeBlock[] = _("{POKEBLOCK} VERDE");
const u8 ContestStatsText_YellowPokeBlock[] = _("{POKEBLOCK} AMARILLO");
const u8 ContestStatsText_PurplePokeBlock[] = _("{POKEBLOCK} MORADO");
const u8 ContestStatsText_IndigoPokeBlock[] = _("{POKEBLOCK} ÍNDIGO");
const u8 ContestStatsText_BrownPokeBlock[] = _("{POKEBLOCK} MARRÓN");
const u8 ContestStatsText_LiteBluePokeBlock[] = _("{POKEBLOCK} AZUL CLARO");
const u8 ContestStatsText_OlivePokeBlock[] = _("{POKEBLOCK} OLIVA");
const u8 ContestStatsText_GrayPokeBlock[] = _("{POKEBLOCK} GRIS");
const u8 ContestStatsText_BlackPokeBlock[] = _("{POKEBLOCK} NEGRO");
const u8 ContestStatsText_WhitePokeBlock[] = _("{POKEBLOCK} BLANCO");
const u8 ContestStatsText_GoldPokeBlock[] = _("{POKEBLOCK} DORADO");

const u8 gContestStatsText_Spicy[] = _("PICANTE");
const u8 gContestStatsText_Dry[] = _("SECO");
const u8 gContestStatsText_Sweet[] = _("DULCE");
const u8 gContestStatsText_Bitter[] = _("AMARGO");
const u8 gContestStatsText_Sour[] = _("AGRIO");
const u8 gContestStatsText_Tasty[] = _("SABROSO");
const u8 gContestStatsText_Feel[] = _("SENSACIÓN");

const u8 gContestStatsText_StowCase[] = _("Colocar CASE.");
const u8 gContestStatsText_ThrowAwayPrompt[] = _("¿Tirar este\n{STR_VAR_1}?");
const u8 gContestStatsText_WasThrownAway[] = _("Has tirado {STR_VAR_1}.");
const u8 gContestStatsText_NormallyAte[] = _("{STR_VAR_1} comío el\n{STR_VAR_2}.{PAUSE_UNTIL_PRESS}");
const u8 gContestStatsText_HappilyAte[] = _("{STR_VAR_1} comió felizmente\nel {STR_VAR_2}.{PAUSE_UNTIL_PRESS}");
const u8 gContestStatsText_DisdainfullyAte[] = _("{STR_VAR_1} comió sin ganas\nel {STR_VAR_2}.{PAUSE_UNTIL_PRESS}");

const u8 MartText_Buy[] = _("COMPRAR");
const u8 MartText_Sell[] = _("VENDER");
const u8 MartText_Quit2[] = _("SALIR");

const u8 gOtherText_QuitShopping[] = _("Dejar de comprar.");

const u8 gOtherText_HowManyYouWant[] = _("¿{STR_VAR_1}? Buena elección.\n¿Cuántas unidades quieres?");
const u8 gOtherText_ThatWillBe[] = _("{STR_VAR_1}... Y quieres {STR_VAR_2}, ¿no?\nTe costará {STR_VAR_3}¥.");
const u8 gOtherText_ThatWillBe2[] = _("{STR_VAR_1}, ¿no?\nTecostará {STR_VAR_2}¥. ¿Lo quieres?");
const u8 gOtherText_ThatWillBe3[] = _("¿Quieres {STR_VAR_1}?\nTe costará {STR_VAR_2}¥. ¿Está bien?");
const u8 gOtherText_HereYouGo[] = _("¡Aquí tienes!\nMuchas gracias.");
const u8 gOtherText_HereYouGo2[] = _("¡Muchas gracias!\nLo enviaré al PC de tu casa.");
const u8 gOtherText_HereYouGo3[] = _("¡Gracias!\nLo enviaré al PC de tu casa.");
const u8 gOtherText_NotEnoughMoney[] = _("No tienes suficiente dinero.{PAUSE_UNTIL_PRESS}");
const u8 gOtherText_NoRoomFor[] = _("No tienes más espacio para objetos.{PAUSE_UNTIL_PRESS}");
const u8 gOtherText_SpaceForIsFull[] = _("El espacio para {STR_VAR_1} está lleno.{PAUSE_UNTIL_PRESS}");
const u8 gOtherText_AnythingElse[] = _("¿Puedo ayudarte en\nalgo más?");
const u8 gOtherText_CanIHelpYou[] = _("¿Puedo ayudarte con algo más?");
const u8 gOtherText_FreePremierBall[] = _("Además, te voy a dar una\nHONOR BALL de regalo.{PAUSE_UNTIL_PRESS}");
const u8 gOtherText_CantBuyThat[] = _("¿{STR_VAR_2}? No, lo siento.\nNo puedo comprar eso.{PAUSE_UNTIL_PRESS}");
const u8 gOtherText_HowManyToSell[] = _("¿{STR_VAR_2}?\n¿Cuántas unidades quieres vender?");
const u8 gOtherText_CanPay[] = _("Puedo pagarte {STR_VAR_1}¥.\n¿Te parece bien?");
const u8 gOtherText_SoldItem[] = _("Recibiste {STR_VAR_1}¥\npor la venta.");

const u8 OtherText_Money[] = _("{STR_VAR_1}¥");
const u8 OtherText_Shift[] = _("CAMBIAR");
const u8 OtherText_SendOut[] = _("ENVIAR");
const u8 OtherText_Switch2[] = _("CAMBIO");
const u8 OtherText_Summary[] = _("DATOS");
const u8 OtherText_Moves[] = _("ATAQUES");
const u8 OtherText_Enter2[] = _("ENTRAR");
const u8 OtherText_NoEntry[] = _("NO ENTRADA");
const u8 OtherText_Take[] = _("TOMAR");
const u8 OtherText_Read2[] = _("LEER");

const u8 gOtherText_Hp2[] = _("PS");
const u8 gOtherText_SpAtk2[] = _("AT. ESP");
const u8 gOtherText_SpDef2[] = _("DF. ESP");
const u8 gOtherText_WontHaveAnyEffect[] = _("No tendrá ningún efecto.{PAUSE_UNTIL_PRESS}");

#if REVISION >= 1
const u8 gOtherText_CantUseOnPoke[] = _("This can’t be used on\nthat POKéMON.{PAUSE_UNTIL_PRESS}");
#else
const u8 gOtherText_CantUseOnPoke[] = _("This item can’t be used on\nthat POKéMON.{PAUSE_UNTIL_PRESS}");
#endif

const u8 gOtherText_CantBeSwitched[] = _("{STR_VAR_1} can’t be switched\nout!{PAUSE_UNTIL_PRESS}");
const u8 gOtherText_AlreadyBattle[] = _("¡{STR_VAR_1} ya está\nluchando!{PAUSE_UNTIL_PRESS}");
const u8 gOtherText_AlreadySelected[] = _("{STR_VAR_1} has already been\nselected.{PAUSE_UNTIL_PRESS}");
const u8 gOtherText_NoEnergyLeft[] = _("{STR_VAR_1} has no energy\nleft to battle!{PAUSE_UNTIL_PRESS}");
const u8 gOtherText_CantSwitchPokeWithYours[] = _("You can’t switch {STR_VAR_1}’s\nPOKéMON with one of yours!{PAUSE_UNTIL_PRESS}");
const u8 gOtherText_EGGCantBattle[] = _("An EGG can’t battle!{PAUSE_UNTIL_PRESS}");
const u8 gOtherText_CantBeUsedBadge[] = _("This can’t be used until a new\nBADGE is obtained.");
const u8 gOtherText_NoMoreThreePoke[] = _("No more than three POKéMON\nmay enter.");
const u8 gOtherText_SendRemovedMailPrompt[] = _("Send the removed MAIL to\nyour PC?");
const u8 gOtherText_MailWasSent[] = _("The MAIL was sent to your PC.{PAUSE_UNTIL_PRESS}");
const u8 gOtherText_MailboxIsFull[] = _("Your PC’s MAILBOX is full.{PAUSE_UNTIL_PRESS}");
const u8 gOtherText_MailRemovedMessageLost[] = _("If the MAIL is removed, the\nmessage will be lost. Okay?");
const u8 gOtherText_MailMustBeRemoved[] = _("MAIL must be removed before\nholding an item.{PAUSE_UNTIL_PRESS}");
const u8 gOtherText_WasGivenToHold[] = _("{STR_VAR_1} was given the\n{STR_VAR_2} to hold.{PAUSE_UNTIL_PRESS}");
const u8 gOtherText_AlreadyHolding[] = _("{STR_VAR_1} is already holding\none {STR_VAR_2}.\pWould you like to switch the\ntwo items?");
const u8 gOtherText_NotHoldingAnything[] = _("{STR_VAR_1} isn’t\nholding anything.{PAUSE_UNTIL_PRESS}");
const u8 gOtherText_ReceivedTheThingFrom[] = _("Received the {STR_VAR_2}\nfrom {STR_VAR_1}.{PAUSE_UNTIL_PRESS}");
const u8 gOtherText_MailTaken[] = _("MAIL was taken from the\nPOKéMON.{PAUSE_UNTIL_PRESS}");
const u8 gOtherText_TakenAndReplaced[] = _("The {STR_VAR_2} was taken and\nreplaced with the {STR_VAR_1}.{PAUSE_UNTIL_PRESS}");
const u8 gOtherText_PokeHoldingItemCantMail[] = _("This POKéMON is holding an item.\nIt cannot hold MAIL.{PAUSE_UNTIL_PRESS}");
const u8 gOtherText_MailTransferredMailbox[] = _("MAIL was transferred from\nthe MAILBOX.{PAUSE_UNTIL_PRESS}");
const u8 gOtherText_BagFullCannotRemoveItem[] = _("The BAG is full. The POKéMON’s\nitem could not be removed.{PAUSE_UNTIL_PRESS}");
const u8 gOtherText_LearnedMove[] = _("{STR_VAR_1} learned\n{STR_VAR_2}!");
const u8 gOtherText_NotCompatible[] = _("{STR_VAR_1} and {STR_VAR_2}\nare not compatible.\p{STR_VAR_2} can’t be learned.{PAUSE_UNTIL_PRESS}");
const u8 gOtherText_WantsToLearn[] = _("{STR_VAR_1} wants to learn the\nmove {STR_VAR_2}.\pHowever, {STR_VAR_1} already\nknows four moves.\pShould a move be deleted and\nreplaced with {STR_VAR_2}?");
const u8 gOtherText_StopTryingTo[] = _("Stop trying to teach\n{STR_VAR_2}?");
const u8 gOtherText_DidNotLearnMove2[] = _("{STR_VAR_1} did not learn the\nmove {STR_VAR_2}.{PAUSE_UNTIL_PRESS}");
const u8 gOtherText_WhichMoveToForget2[] = _("Which move should be forgotten?{PAUSE_UNTIL_PRESS}");
const u8 gOtherText_ForgetMove123_2[] = _("{PAUSE 32}1, {PAUSE 15}2, and{PAUSE 15}... {PAUSE 15}... {PAUSE 15}... {PAUSE 15}{PLAY_SE SE_KON}Poof!\p{STR_VAR_1} forgot how to\nuse {STR_VAR_2}.\pAnd...{PAUSE_UNTIL_PRESS}");
const u8 gOtherText_AlreadyKnows[] = _("{STR_VAR_1} already knows\n{STR_VAR_2}.{PAUSE_UNTIL_PRESS}");
const u8 gOtherText_HPRestoredBy[] = _("{STR_VAR_1}’s HP was restored by\n{STR_VAR_2} points.{PAUSE_UNTIL_PRESS}");
const u8 gOtherText_CuredPoisoning[] = _("{STR_VAR_1} was cured of its\npoisoning.{PAUSE_UNTIL_PRESS}");
const u8 gOtherText_CuredParalysis[] = _("{STR_VAR_1} was cured of\nparalysis.{PAUSE_UNTIL_PRESS}");
const u8 gOtherText_WokeUp[] = _("{STR_VAR_1} woke up.{PAUSE_UNTIL_PRESS}");
const u8 gOtherText_BurnHealed[] = _("{STR_VAR_1}’s burn was healed.{PAUSE_UNTIL_PRESS}");
const u8 gOtherText_ThawedOut[] = _("{STR_VAR_1} was thawed out.{PAUSE_UNTIL_PRESS}");
const u8 gOtherText_PPRestored[] = _("PP was restored.{PAUSE_UNTIL_PRESS}");
const u8 gOtherText_RegainedHealth[] = _("{STR_VAR_1} regained health.{PAUSE_UNTIL_PRESS}");
const u8 gOtherText_BecameHealthy[] = _("{STR_VAR_1} became healthy.{PAUSE_UNTIL_PRESS}");
const u8 gOtherText_PPIncreased[] = _("{STR_VAR_1}’s PP increased.{PAUSE_UNTIL_PRESS}");
const u8 gOtherText_ElevatedTo[] = _("{STR_VAR_1} was elevated to\nLv. {STR_VAR_2}.");
const u8 gOtherText_WasRaised[] = _("{STR_VAR_1}’s {STR_VAR_2} was\nraised.{PAUSE_UNTIL_PRESS}");
const u8 gOtherText_SnapConfusion[] = _("{STR_VAR_1} snapped out of its\nconfusion.{PAUSE_UNTIL_PRESS}");
const u8 gOtherText_GotOverLove[] = _("{STR_VAR_1} got over its\ninfatuation.{PAUSE_UNTIL_PRESS}");
const u8 OtherText_ChoosePoke[] = _("Elegir un POKéMON.");
const u8 OtherText_MovePokeTo[] = _("Move to where?");
const u8 OtherText_TeachWhat[] = _("Teach which POKéMON?");
const u8 OtherText_UseWhat[] = _("Use on which POKéMON?");
const u8 OtherText_GiveWhat[] = _("Give to which POKéMON?");
const u8 OtherText_DoWhat[] = _("{STR_VAR_1} seleccionado.");
const u8 OtherText_NothingToCut[] = _("There’s nothing to CUT.");
const u8 OtherText_CantSurf[] = _("You can’t SURF here.");
const u8 OtherText_AlreadySurfing[] = _("You’re already SURFING.");
const u8 OtherText_CantUseThatHere[] = _("Can’t use that here.");
const u8 OtherText_RestoreWhatMove[] = _("Restore which move?");
const u8 OtherText_BoostPP[] = _("Boost PP of which move?");
const u8 OtherText_DoWhatWithItem[] = _("Do what with an item?");
const u8 OtherText_NoPokeForBattle[] = _("No POKéMON for battle!");
const u8 OtherText_ChoosePoke2[] = _("Elegir un POKéMON.");
const u8 OtherText_NotEnoughHP[] = _("Not enough HP...");
const u8 OtherText_ThreePokeNeeded[] = _("Three POKéMON are needed.");
const u8 OtherText_PokeCantBeSame[] = _("POKéMON can’t be the same.");
const u8 OtherText_NoIdenticalHoldItems[] = _("No identical hold items.");
const u8 OtherText_TeachWhichPoke[] = _("Teach which POKéMON?");
const u8 gOtherText_Attack[] = _("ATAQUE");
const u8 gOtherText_Defense[] = _("DEFENSA");
const u8 gOtherText_SpAtk[] = _("AT. ESP");
const u8 gOtherText_SpDef[] = _("DF. ESP");
const u8 gOtherText_Speed[] = _("VELOC.");
const u8 gOtherText_HP[] = _("PS");
const u8 gOtherText_Terminator18[] = _("");
const u8 gOtherText_OriginalTrainer[] = _("EO/");
const u8 gOtherText_Type2[] = _("TIPO/");
const u8 gOtherText_Power2[] = _("POTENC.");
const u8 gOtherText_Accuracy2[] = _("PRECIS.");
const u8 gOtherText_Appeal2[] = _("EXHIB.");
const u8 gOtherText_Jam2[] = _("INHIB.");
const u8 gOtherText_Status[] = _("STATUS");
const u8 gOtherText_ExpPoints[] = _("PUNTOS EXP.");
const u8 gOtherText_NextLv[] = _("SIG. NIVEL");
const u8 gOtherText_Ribbons00[] = _("CINTAS: 00");

const u8 OtherText_Event[] = _("EVENTO");
const u8 OtherText_Switch[] = _("CANBIO");
const u8 OtherText_PokeInfo[] = _("INFO. POKéMON");
const u8 OtherText_PokeSkills[] = _("HABIL. POKéMON");
const u8 OtherText_BattleMoves[] = _("MOV. COMBATE");
const u8 OtherText_ContestMoves[] = _("MOV. CONCURSO"); // The "O" in "CONTEST" is actually a 0.
const u8 OtherText_Info[] = _("INFO.");

const u8 gOtherText_EggLongTime[] = _("It looks like this EGG will\ntake a long time to hatch.");
const u8 gOtherText_EggSomeTime[] = _("What will hatch from this?\nIt will take some time.");
const u8 gOtherText_EggSoon[] = _("It moves occasionally.\nIt should hatch soon.");
const u8 gOtherText_EggAbout[] = _("It’s making sounds.\nIt’s about to hatch!");
const u8 gOtherText_CantForgetHMs[] = _("HM moves can’t be\nforgotten now.");
const u8 gOtherText_PlayersBase[] = _("’s BASE");
const u8 gOtherText_OkayToDeleteFromRegistry[] = _("Is it okay to delete {STR_VAR_1}\nfrom the REGISTRY?");
const u8 gOtherText_RegisteredDataDeleted[] = _("The registered data was deleted.{PAUSE_UNTIL_PRESS}");

const u8 gSecretBaseText_NoRegistry[] = _("There is no REGISTRY.{PAUSE_UNTIL_PRESS}");
const u8 SecretBaseText_DelRegist[] = _("DEL REGIST.");
const u8 SecretBaseText_Decorate[] = _("DECORATE");
const u8 SecretBaseText_PutAway[] = _("PUT AWAY");
const u8 SecretBaseText_Toss[] = _("TOSS");
const u8 SecretBaseText_PutOutDecor[] = _("Escoger un objeto para decorar.");
const u8 SecretBaseText_StoreChosenDecor[] = _("Guardar el adorno escogido en el PC.");
const u8 SecretBaseText_ThrowAwayDecor[] = _("Eliminar los adornos no deseados.");
const u8 gSecretBaseText_NoDecors[] = _("No hay objetos para decorar.{PAUSE_UNTIL_PRESS}");
const u8 SecretBaseText_Desk[] = _("DESK");
const u8 SecretBaseText_Chair[] = _("CHAIR");
const u8 SecretBaseText_Plant[] = _("PLANT");
const u8 SecretBaseText_Ornament[] = _("ORNAMENT");
const u8 SecretBaseText_Mat[] = _("MAT");
const u8 SecretBaseText_Poster[] = _("POSTER");
const u8 SecretBaseText_Doll[] = _("DOLL");
const u8 SecretBaseText_Cushion[] = _("CUSHION");
const u8 gSecretBaseText_GoldRank[] = _("GOLD");
const u8 gSecretBaseText_SilverRank[] = _("SILVER");
const u8 gSecretBaseText_PlaceItHere[] = _("¿Colocarlo aquí?");
const u8 gSecretBaseText_CantBePlacedHere[] = _("No se puede colocar aquí.");
const u8 gSecretBaseText_CancelDecorating[] = _("¿Cancelar decoración?");
const u8 gSecretBaseText_InUseAlready[] = _("Esto ya está en uso.");
const u8 gSecretBaseText_NoMoreDecor[] = _("No se puede decorar más.\nLa mayor cantida de decoración es {STR_VAR_1}.");
const u8 gSecretBaseText_NoMoreDecor2[] = _("No se puede decorar más.\nLa mayor cantida de decoración es {STR_VAR_1}.$This can’t be placed here.\nIt must be on a DESK, etc.");
const u8 gSecretBaseText_DecorCantPlace[] = _("Esta decoración no se puede\nponer en tu propia habitación.");
const u8 gSecretBaseText_DecorInUse[] = _("Esta decoración está en uso.\nNo se puede remover.");
const u8 gSecretBaseText_WillBeDiscarded[] = _("Este {STR_VAR_1} será descartado.\n¿Está bien?");
const u8 gSecretBaseText_DecorThrownAway[] = _("El objeto de decoración se ha tirado.");
const u8 gSecretBaseText_StopPuttingAwayDecor[] = _("¿Dejar de guardar las decoraciones?");
const u8 gSecretBaseText_NoDecor[] = _("No hay objetos de decoración aquí.");
const u8 gSecretBaseText_ReturnDecor[] = _("¿Devolver este objeto al PC?");
const u8 gSecretBaseText_DecorReturned[] = _("La decoración se envió al PC.");
const u8 gSecretBaseText_NoDecorInUse[] = _("No hay decoración en uso.{PAUSE_UNTIL_PRESS}");
const u8 SecretBaseText_Tristan[] = _("TRISTAN");
const u8 SecretBaseText_Philip[] = _("PHILIP");
const u8 SecretBaseText_Dennis[] = _("DENNIS");
const u8 SecretBaseText_Roberto[] = _("ROBERTO");
const u8 SecretBaseText_TurnOff[] = _("DESCONEXIÓN");
const u8 SecretBaseText_Decoration[] = _("DECORACIÓN");
const u8 SecretBaseText_ItemStorage[] = _("ALMACÉN OBJ.");

const u8 gPCText_Mailbox[] = _("BUZÓN");
const u8 PCText_DepositItem[] = _("DEJAR OBJETO");
const u8 PCText_WithdrawItem[] = _("SACAR OBJETO");
const u8 PCText_TossItem[] = _("TIRAR OBJETO");
const u8 PCText_StoreItems[] = _("Guardar objetos en el PC.");
const u8 PCText_TakeOutItems[] = _("Sacar objetos del PC.");
const u8 PCText_ThrowAwayItems[] = _("Tirar objetos del PC PC.");

const u8 gOtherText_NoItems[] = _("No hay objetos.{PAUSE_UNTIL_PRESS}");
const u8 gOtherText_NoMoreRoom[] = _("No hay más espacio\nen la MOCHILA.");
const u8 gOtherText_HowManyToWithdraw[] = _("¿Cuántos quieres\nsacar?");
const u8 gOtherText_WithdrewThing[] = _("{STR_VAR_2} {STR_VAR_1}\nretirados.");
const u8 OtherText_Read[] = _("LEER");
const u8 gOtherText_MoveToBag[] = _("MOVER A LA MOCHILA");
const u8 OtherText_Give[] = _("DAR");
const u8 gOtherText_NoMailHere[] = _("Aquí no hay ninguna CARTA.{PAUSE_UNTIL_PRESS}");
const u8 gOtherText_WhatWillYouDoMail[] = _("¿Qué quieres hacer con la CARTA\nde {STR_VAR_1}?");
const u8 gOtherText_MessageWillBeLost[] = _("El mensaje se perderá.\n¿Está bien?");
const u8 gOtherText_BagIsFull[] = _("La mochila está llena.{PAUSE_UNTIL_PRESS}");
const u8 gOtherText_MailWasReturned[] = _("La CARTa volvió a la MOCHILA\ncon su mensaje borrado.{PAUSE_UNTIL_PRESS}");
const u8 gOtherText_Dad[] = _("PAPÁ");
const u8 gOtherText_Mom[] = _("MAMÁ");
const u8 gOtherText_Wallace[] = _("PLUBIO");
const u8 gOtherText_Steven[] = _("MÁXIMO");
const u8 gOtherText_Brawly[] = _("MARCIAL");
const u8 gOtherText_Winona[] = _("ALANA");
const u8 gOtherText_Phoebe[] = _("FÁTIMA");
const u8 gOtherText_Glacia[] = _("NÍVEA");
const u8 gContestText_ContestWinner[] = _("GANADOR DEL CONCURSO\n");
const u8 gOtherText_Unknown1[] = _("");// " ’s" 
const u8 OtherText_Cool[] = _("GUAY ");
const u8 OtherText_Beauty2[] = _("BELLO ");
const u8 OtherText_Cute[] = _("LINDO ");
const u8 OtherText_Smart[] = _("INTELIG. ");
const u8 OtherText_Tough[] = _("DURO ");
const u8 OtherText_NonstopSuperCool[] = _("Sin parar súper genial -\nlo inestimable ");
const u8 OtherText_Terminator6[] = _("");
const u8 OtherText_GoodLookingPoke[] = _("¡Hola!\nEl POKéMON guapo ");
const u8 OtherText_Terminator7[] = _("");
const u8 OtherText_MarvelousGreat[] = _("El maravilloso, inestimable, y\nmuy bueno ");
const u8 OtherText_Terminator8[]= _("");
const u8 OtherText_CenturyLastVenus[]= _("El Venus de este siglo -\nel precioso ");
const u8 OtherText_Terminator9[]= _("");
const u8 OtherText_Terminator10[]= _("");
const u8 OtherText_DazzlingSmile[]= _(" deslumbrante,\nsonrisa brillante");
const u8 OtherText_PokeCenterIdol[]= _("Ídolo del CENTRO POKEMON -\nel incomparable ");
const u8 OtherText_Terminator11[]= _("");
const u8 OtherText_LovelyAndSweet[]= _("El adorable y dulce ");
const u8 OtherText_Terminator12[]= _("");
const u8 OtherText_ThePretty[]= _("El bonito ");
const u8 OtherText_WinningPortrait[] = _("\nretrato ganador");
const u8 OtherText_GiveUsWink[] = _("¡Danos un giño!\nEl POKéMON lindo");
const u8 OtherText_Terminator13[] = _("");
const u8 OtherText_SmartnessMaestro[] = _("El maestro de la inteligencia -\nEl POKéMON sabio ");
const u8 OtherText_Terminator14[] = _("");
const u8 OtherText_ChosenPokeAmong[] = _("El POKéMON elegido -\nEl que está entre POKéMON ");
const u8 OtherText_Terminator15[] = _("");
const u8 OtherText_TheExcellent[] = _("El excelente ");
const u8 OtherText_ItsMomentOfElegance[] = _("\nmomento de elegancia");
const u8 OtherText_PowerfullyMuscular[] = _("El poderoso velocista\nmuscular ");
const u8 OtherText_Terminator16[] = _("");
const u8 OtherText_StrongErEst[] = _("El fuerte, más fuerte y\nmás fuerte ");
const u8 OtherText_Terminator17[] = _("");
const u8 OtherText_MightyTough[] = _("El poderoso\nhiper POKéMON ");
const u8 OtherText_Exclamation[] = _("!");
const u8 OtherText_Petalburg[] = _("PETALIA");
const u8 OtherText_Slateport[] = _("PORTUAL");
const u8 OtherText_Littleroot[] = _("VILLA RAÍZ"); // unused contest location?
const u8 OtherText_Lilycove[] = _("CALAGUA");
const u8 OtherText_Dewford[] = _("AZULIZA");
const u8 OtherText_Enter[] = _("ENTRAR");
const u8 OtherText_Info3[] = _("INFO.");
const u8 OtherText_WhatsAContest[] = _("¿Qué es un CONCURSO?");
const u8 OtherText_TypesOfContest[] = _("Tipos de CONCURSOS");
const u8 OtherText_Ranks[] = _("Rangos");
const u8 OtherText_Judging[] = _("Juzgando");
const u8 OtherText_CoolContest[] = _("CONC. CARISMA");
const u8 OtherText_BeautyContest[] = _("CONC. BELLEZA");
const u8 OtherText_CuteContest[] = _("CONC. DULZURA");
const u8 OtherText_SmartContest[] = _("CONC. INGENIO");
const u8 OtherText_ToughContest[] = _("CONC. DUREZA");
const u8 OtherText_Decoration[] = _("DECORACIÓN");
const u8 OtherText_PackUp[] = _("ENVOLVER");
const u8 OtherText_Count[] = _("CONTAR");
const u8 OtherText_Registry[] = _("REGISTRAR");
const u8 OtherText_Information[] = _("INFORMACIÓN");
const u8 OtherText_Mach[] = _("CARR");
const u8 OtherText_Acro[] = _("ACRO");
const u8 OtherText_Poison[] = _("VEN");
const u8 OtherText_Paralysis[] = _("PAR");
const u8 OtherText_Sleep[] = _("DOR");
const u8 OtherText_Burn[] = _("QUE");
const u8 OtherText_Frozen[] = _("CON");
const u8 OtherText_Quit[] = _("SALIR");
const u8 OtherText_SawIt[] = _("Lo ví");
const u8 OtherText_NotYet[] = _("Aún no");
const u8 OtherText_Yes[] = _("SÍ");
const u8 OtherText_No[] = _("NO");
const u8 OtherText_Info2[] = _("INFO");
const u8 OtherText_SingleBattle[] = _("BATALLA INDIV.");
const u8 OtherText_DoubleBattle[] = _("BATALLA DOBLE");
const u8 OtherText_MultiBattle[] = _("MULTIBATALLA");
const u8 OtherText_MrBriney[] = _("SR. ARENQUE");
const u8 OtherText_MakeAChallenge[] = _("Hacer un desafío.");
const u8 OtherText_ObtainInformation[] = _("Información.");
const u8 OtherText_Lv50_2[] = _("NV. 50");
const u8 OtherText_Lv100_2[] = _("NV. 100");
const u8 OtherText_Zigzagoon[] = _("ZIGZAGOON");
const u8 OtherText_Nincada[] = _("NINCADA");
const u8 OtherText_Poochyena[] = _("POOCHYENA");
const u8 OtherText_Nincada2[] = _("NINCADA");
const u8 OtherText_Lotad[] = _("LOTAD");
const u8 OtherText_Roselia[] = _("ROSELIA");
const u8 OtherText_Shroomish[] = _("SHROOMISH");
const u8 OtherText_Nincada3[] = _("NINCADA");
const u8 OtherText_Surskit[] = _("SURSKIT");
const u8 OtherText_Treecko[] = _("TREECKO");
const u8 OtherText_Torchic[] = _("TORCHIC");
const u8 OtherText_Mudkip[] = _("MUDKIP");
const u8 OtherText_Seedot[] = _("SEEDOT");
const u8 OtherText_Shroomish2[] = _("SHROOMISH");
const u8 OtherText_Spinda[] = _("SPINDA");
const u8 OtherText_Shroomish3[] = _("SHROOMISH");
const u8 OtherText_Zigzagoon2[] = _("ZIGZAGOON");
const u8 OtherText_Wurmple[] = _("WURMPLE");
const u8 OtherText_PokeBall[] = _("POKé BALL");
const u8 OtherText_SuperPotion[] = _("SUPER POCIÓN");
const u8 OtherText_SamePrice[] = _("Mismo precio");
const u8 OtherText_Yen135[] = _("135¥");
const u8 OtherText_Yen155[] = _("155¥");
const u8 OtherText_Yen175[] = _("175¥");
const u8 OtherText_CostMore[] = _("Costarán más.");
const u8 OtherText_CostLess[] = _("Costarán menos.");
const u8 OtherText_SamePrice2[] = _("Mismo precio");
const u8 OtherText_MaleSymbol[] = _("♂");
const u8 OtherText_FemaleSymbol[] = _("♀");
const u8 OtherText_Neither[] = _("Ninguno");
const u8 OtherText_Males[] = _("Machos");
const u8 OtherText_Females[] = _("Hembras");
const u8 OtherText_SameNumber[] = _("Mismo número");
const u8 OtherText_Male[] = _("Macho");
const u8 OtherText_Female[] = _("Hembra");
const u8 OtherText_ItDepends[] = _("Depende");
const u8 OtherText_Six2[] = _("6");
const u8 OtherText_Eight2[] = _("8");
const u8 OtherText_Ten[] = _("10");
const u8 OtherText_One[] = _("1");
const u8 OtherText_Two[] = _("2");
const u8 OtherText_Three[] = _("3");
const u8 OtherText_Six[] = _("6");
const u8 OtherText_Seven[] = _("7");
const u8 OtherText_Eight[] = _("8");
const u8 OtherText_FreshWater[] = _("AGUA FRESCA{CLEAR_TO 0x48}200¥");
const u8 OtherText_SodaPop[] = _("REFRESCO{CLEAR_TO 0x48}300¥");
const u8 OtherText_Lemonade[] = _("LIMONADA{CLEAR_TO 0x48}350¥");
const u8 OtherText_HowToRide[] = _("CÓMO MONTAR");
const u8 OtherText_HowToTurn[] = _("CÓMO GIRAR");
const u8 OtherText_SandySlopes[] = _("PENDIENTES ARENOSAS");
const u8 OtherText_Wheelies[] = _("CABALLITOS");
const u8 OtherText_BunnyHops[] = _("SALTITOS");
const u8 OtherText_Jumping[] = _("SALTANDO");
const u8 OtherText_Satisfied[] = _("Satisfecho");
const u8 OtherText_Dissatisfied[] = _("Insatisfecho");
const u8 OtherText_Deepseatooth[] = _("DIENTE DE MAR");
const u8 OtherText_Deepseascale[] = _("ESCALA DE MAR");
const u8 OtherText_BlueFlute2[] = _("FLAUTA AZUL");
const u8 OtherText_YellowFlute2[] = _("FLAUTA AMAR.");
const u8 OtherText_RedFlute2[] = _("FLAUTA ROJA");
const u8 OtherText_WhiteFlute2[] = _("FLAUTA BLANCA");
const u8 OtherText_BlackFlute2[] = _("FLAUTA NEGRA");
const u8 OtherText_GlassChair[] = _("SILLA DE VIDRIO");
const u8 OtherText_GlassDesk[] = _("MESA DE VIDRIO");
const u8 OtherText_TreeckoDoll[] = _("MUÑECO TREECKO 1,000 MONEDAS");
const u8 OtherText_TorchicDoll[] = _("MUÑECO TORCHIC 1,000 MONEDAS");
const u8 OtherText_MudkipDoll[] = _("MUÑECO MUDKIP   1,000 MONEDAS");
const u8 OtherText_50Coins[] = _("  50 MONEDAS    1,000¥");
const u8 OtherText_500Coins[] = _("500 MONEDAS  10,000¥");
const u8 OtherText_Excellent[] = _("Excelente!");
const u8 OtherText_NotSoHot[] = _("No tan caliente");
const u8 OtherText_RedShard[] = _("PARTE ROJA");
const u8 OtherText_YellowShard[] = _("PARTE AMAR.");
const u8 OtherText_BlueShard[] = _("PARTE AZUL");
const u8 OtherText_GreenShard[] = _("PARTE VERDE");
const u8 OtherText_BattleTower[] = _("TORRE BATALLA");
const u8 OtherText_Right[] = _("Derecha");
const u8 OtherText_Left[] = _("Izquierda");
const u8 OtherText_TM32[] = _("TM32  1,500 MONEDAS");
const u8 OtherText_TM29[] = _("TM29  3,500 MONEDAS");
const u8 OtherText_TM35[] = _("TM35  4,000 MONEDAS");
const u8 OtherText_TM24[] = _("TM24  4,000 MONEDAS");
const u8 OtherText_TM13[] = _("TM13  4,000 MONEDAS");
const u8 OtherText_1F_2[] = _("1F");
const u8 OtherText_2F_2[] = _("2F");
const u8 OtherText_3F_2[] = _("3F");
const u8 OtherText_4F_2[] = _("4F");
const u8 OtherText_5F_2[] = _("5F");
const u8 OtherText_Cool2[] = _("CARISMA");
const u8 OtherText_Beauty3[] = _("BELLEZA");
const u8 OtherText_Cute2[] = _("DULZURA");
const u8 OtherText_Smart2[] = _("INGENIO");
const u8 OtherText_Tough2[] = _("DUREZA");
const u8 OtherText_Normal[] = _("NORMAL");
const u8 OtherText_Super[] = _("SUPER");
const u8 OtherText_Hyper[] = _("HIPER");
const u8 OtherText_Master[] = _("MASTER");
const u8 OtherText_Cool3[] = _("CARISMA");
const u8 OtherText_Beauty4[] = _("BELLEZA");
const u8 OtherText_Cute3[] = _("DULZURA");
const u8 OtherText_Smart3[] = _("INGENIO");
const u8 OtherText_Tough3[] = _("DUREZA");
const u8 OtherText_Items[] = _("Objetos");
const u8 OtherText_KeyItems[] = _("Obj. clave");
const u8 OtherText_Balls[] = _("BALLS");
const u8 OtherText_TMsHMs[] = _("MT / MO");
const u8 OtherText_Berries[] = _("Bayas");

const u8 gPCText_SomeonesPC[] = _("PC de ALGUIEN");
const u8 gPCText_LanettesPC[] = _("PC de AREDIA");
const u8 gPCText_PlayersPC[] = _("PC de {PLAYER}");
const u8 gPCText_HallOfFame[] = _("HALL DE LA FAMA");
const u8 gPCText_LogOff[] = _("DESCONEXIÓN");

const u8 gOtherText_99Times[] = _("99 veces +");
const u8 gOtherText_1Minute[] = _("1 minuto +");
const u8 gOtherText_Seconds[] = _(" segundos");
const u8 gOtherText_Times[] = _(" veces$.");
const u8 gOtherText_BigGuy[] = _("Gran chico");
const u8 gOtherText_BigGirl[] = _("Gran chica");
const u8 gOtherText_Son[] = _("hijo");
const u8 gOtherText_Daughter[] = _("hija");
const u8 OtherText_BlueFlute[] = _("FLAUTA AZUL");
const u8 OtherText_YellowFlute[] = _("FLAUTA AMAR.");
const u8 OtherText_RedFlute[] = _("FLAUTA ROJA");
const u8 OtherText_WhiteFlute[] = _("FLAUTA BLANCA");
const u8 OtherText_BlackFlute[] = _("FLAUTA NEGRA");
const u8 OtherText_PrettyChair[] = _("SILLA BONITA");
const u8 OtherText_PrettyDesk[] = _("MESA BONITA");
const u8 OtherText_1F[] = _("P1");
const u8 OtherText_2F[] = _("P2");
const u8 OtherText_3F[] = _("P3");
const u8 OtherText_4F[] = _("P4");
const u8 OtherText_5F[] = _("P5");
const u8 OtherText_6F[] = _("P6");
const u8 OtherText_7F[] = _("P7");
const u8 OtherText_8F[] = _("P8");
const u8 OtherText_9F[] = _("P9");
const u8 OtherText_10F[] = _("P10");
const u8 OtherText_11F[] = _("P11");
const u8 OtherText_B1F[] = _("PB1");
const u8 OtherText_B2F[] = _("PB2");
const u8 OtherText_B3F[] = _("PB3");
const u8 OtherText_B4F[] = _("PB4");
const u8 OtherText_Rooftop[] = _("TEJADO");

const u8 gOtherText_NowOn[] = _("Ahora en:");

const u8 gPCText_Cancel[] = _("SALIR");

const u8 PCText_ExitBox[] = _("Salir de la CAJA.");
const u8 PCText_WhatYouDo[] = _("¿Qué quieres hacer?");
const u8 PCText_PickATheme[] = _("Por favor, elige un tema.");
const u8 PCText_PickAWallpaper[] = _("Elige un papel pintado.");
const u8 PCText_IsSelected[] = _(" seleccionado.");
const u8 PCText_JumpToWhichBox[] = _("¿Ir a qué CAJA?");
const u8 PCText_DepositInWhichBox[] = _("¿Dejar en qué CAJA?");
const u8 PCText_WasDeposited[] = _(" fue depositado.");
const u8 PCText_BoxIsFull[] = _("La CAJA está llena.");
const u8 PCText_ReleasePoke[] = _("¿Sueltas este POKéMON?");
const u8 PCText_WasReleased[] = _(" fue soltado.");
const u8 PCText_ByeBye[] = _("¡Adiós, !");
const u8 PCText_MarkPoke[] = _("Marca tu POKéMON.");
const u8 PCText_LastPoke[] = _("Este es tu último POKéMON!");
const u8 PCText_PartyFull[] = _("¡Tu equipo está lleno!");
const u8 PCText_HoldingPoke[] = _("¡Llevas un POKéMON!");
const u8 PCText_WhichOneWillTake[] = _("¿Cuál vas a elegir?");
const u8 PCText_CantReleaseEgg[] = _("No puede soltar un HUEVO.");
const u8 PCText_ContinueBox[] = _("¿Hacer más cambios?");
const u8 PCText_CameBack[] = _(" volvió!");
const u8 PCText_Worried[] = _("¿Estaba preocupado por ti?");
const u8 PCText_Surprise[] = _("... ... ... ... ...!");
const u8 PCText_PleaseRemoveMail[] = _("Por favor elimina la CARTA.");
const u8 PCText_Cancel2[] = _("SALIR");
const u8 PCText_Deposit[] = _("DEJAR");
const u8 PCText_Withdraw[] = _("SACAR");
const u8 PCText_Switch[] = _("CAMBIO");
const u8 PCText_Move[] = _("MOVER");
const u8 PCText_Place[] = _("COLOCAR");
const u8 PCText_Summary[] = _("DATOS");
const u8 PCText_Release[] = _("SOLTAR");
const u8 PCText_Mark[] = _("MARCAR");
const u8 PCText_Name[] = _("NOMBRE");
const u8 PCText_Jump[] = _("SALTAR");
const u8 PCText_Wallpaper[] = _("P. PINTADO");
const u8 PCText_Scenery1[] = _("PAISAJE 1");
const u8 PCText_Scenery2[] = _("PAISAJE 2");
const u8 PCText_Scenery3[] = _("PAISAJE 3");
const u8 PCText_Etc[] = _("OTROS");
const u8 PCText_Forest[] = _("BOSQUE");
const u8 PCText_City[] = _("CIUDAD");
const u8 PCText_Desert[] = _("DESIERTO");
const u8 PCText_Savanna[] = _("SABANA");
const u8 PCText_Crag[] = _("MONTAÑA");
const u8 PCText_Volcano[] = _("VOLCÁN");
const u8 PCText_Snow[] = _("NIEVE");
const u8 PCText_Cave[] = _("CUEVA");
const u8 PCText_Beach[] = _("PLAYA");
const u8 PCText_Seafloor[] = _("FLOR MAR");
const u8 PCText_River[] = _("RÍO");
const u8 PCText_Sky[] = _("CIELO");
const u8 PCText_Polka[] = _("LUNARES");
const u8 PCText_PokeCenter[] = _("CENTRO PKMN");
const u8 PCText_Machine[] = _("MAQUINARIA");
const u8 PCText_Plain[] = _("SENCILLO");
const u8 PCText_WhatDoYouWant[] = _("What do you want?");
const u8 PCText_WithdrawPoke[] = _("SACAR POKéMON");
const u8 PCText_DepositPoke[] = _("DEJAR POKéMON");
const u8 PCText_MovePoke[] = _("MOVER POKéMON");
const u8 PCText_SeeYa[] = _("¡NOS VEMOS!");
const u8 PCText_MovePokeToParty[] = _("Pasar un POKéMON guardado en\nalguna CAJA a tu equipo.");
const u8 PCText_StorePokeInBox[] = _("Guardar algún POKéMON de tu\nequipo en una CAJA.");
const u8 PCText_OrganizeBoxesParty[] = _("Ordenar los POKéMON de las\nCAJAS y de tu equipo.");
const u8 PCText_ReturnToPrevMenu[] = _("Regresar al menú anterior.");

const u8 gPCText_OnlyOne[] = _("Sólo llevas contigo un POKéMON.");
const u8 gPCText_PartyFull2[] = _("¡Tu equipo está lleno!");
const u8 gPCText_BOX[] = _("CAJA ");

// pokenav
const u8 PCText_CheckMap[] = _("{CLEAR 0}Ver el mapa de la región de HOENN.");
const u8 PCText_CheckPoke[] = _("{CLEAR 0}Ver POKéMON en detalle.");
const u8 PCText_CheckTrainer[] = _("{CLEAR 0}Ver información sobre ENTRENADORES.");
const u8 PCText_CheckRibbons[] = _("{CLEAR 0}Ver CINTAS obtenidas.");
const u8 PCText_PutAwayNav[] = _("{CLEAR 0}Guardar POKéNAV.");
const u8 PCText_NoRibbonWin[] = _("{CLEAR 0}No has conseguido CINTAS.");
const u8 PCText_NoTrainers[] = _("{CLEAR 0}No hay ENTRENADORES registrados.");
const u8 PCText_CheckParty[] = _("{CLEAR 0}Ver POKéMON del equipo en detalle.");
const u8 PCText_CheckPokeAll[] = _("{CLEAR 0}Ver todos los POKéMON en detalle.");
const u8 PCText_ReturnToNav[] = _("{CLEAR 0}Volver al menú anterior.");
const u8 PCText_FindCool[] = _("{CLEAR 0}Buscar POKéMON carismáticos.");
const u8 PCText_FindBeauty[] = _("{CLEAR 0}Buscar POKéMON bellos.");
const u8 PCText_FindCute[] = _("{CLEAR 0}Buscar POKéMON dulces.");
const u8 PCText_FindSmart[] = _("{CLEAR 0}Buscar POKéMON ingeniosos.");
const u8 PCText_FindTough[] = _("{CLEAR 0}Buscar POKéMON duros.");
const u8 PCText_ReturnToCondition[] = _("{CLEAR 0}Volver al menú anterior.");

const u8 gOtherText_NumberRegistered[] = _("N.º registrados");
const u8 gOtherText_NumberBattles[] = _("N.º combates");
const u8 gOtherText_Strategy[] = _("{PALETTE 5}ESTRATEGIA");
const u8 gOtherText_TrainersPokemon[] = _("{PALETTE 5}POKéMON");
const u8 gOtherText_SelfIntroduction[] = _("{PALETTE 5}PRESENTACIÓN");
const u8 gOtherText_Nature2[] = _("NATURALEZA/");
const u8 gOtherText_InParty[] = _("EN EQUIPO");
const u8 gOtherText_Number[] = _("N.º ");
const u8 gOtherText_Ribbons[] = _("CINTAS");
const u8 OtherText_MakeProfilePage1[] = _("Haz tu perfil personalizado");
const u8 OtherText_MakeProfilePage2[] = _("cuatro palabras.");
const u8 OtherText_MakeMessagePage1[] = _("Crea un mensaje con seis palabras.");
const u8 OtherText_MakeMessagePage2[] = _("Máx. dos. 12 letras por línea.");
const u8 OtherText_DescribeFeelingsPage1[] = _("Busca palabras que definan");
const u8 OtherText_DescribeFeelingsPage2[] = _("tus sentimientos ahora.");
const u8 OtherText_WithFourPhrases[] = _("Con cuatro frases,");
const u8 OtherText_CombineNinePhrasesPage1[] = _("Combina nueve frases y");
const u8 OtherText_CombineNinePhrasesPage2[] = _("crea un mensaje.");
const u8 OtherText_ImproveBardSongPage1[] = _("Cambia solo una palabra");
const u8 OtherText_ImproveBardSongPage2[] = _("y mejora la canción de BARDO.");
const u8 OtherText_YourProfile[] = _("Tu perfil ");
const u8 OtherText_YourFeelingBattle[] = _("Tus sentimientos en batalla");
const u8 OtherText_SetWinMessage[] = _("Lo que dices si ganas una batalla");
const u8 OtherText_SetLossMessage[] = _("Lo que dices si pierdes una batalla");
const u8 OtherText_TheAnswer[] = _("La respuesta");
const u8 OtherText_MailMessage[] = _("El mensaje de la CARTA");
const u8 OtherText_MailSalutation[] = _("El saludo de la CARTA");
const u8 OtherText_NewSong[] = _("La nueva canción");
const u8 OtherText_CombineTwoPhrasesPage1[] = _("Combina dos frases y");
const u8 OtherText_CombineTwoPhrasesPage2[] = _("crea algo a la moda.");
const u8 OtherText_ConfirmTrendyPage1[] = _("El dicho de moda");
const u8 OtherText_ConfirmTrendyPage2[] = _("es como se muestra ¿Sí?");
const u8 OtherText_HipsterPage1[] = _("Voy a combinar dos palabras y");
const u8 OtherText_HipsterPage2[] = _("a enseñarte un buen dicho.");

const u8 gOtherText_TextDeletedConfirmPage1[] = _("Todo el texto que se edita");
const u8 gOtherText_TextDeletedConfirmPage2[] = _("podrá borrarse. ¿Está bien?");
const u8 gOtherText_QuitEditing[] = _("¿Dejar de editar?");
const u8 gOtherText_EditedTextNoSavePage1[] = _("El texto editado no se guardará.");
const u8 gOtherText_EditedTextNoSavePage2[] = _("¿Está bien?");
const u8 gOtherText_EnterAPhraseOrWord[] = _("Por favor, introduce una frase o palabra.");
const u8 gOtherText_TextNoDelete[] = _("No puedes eliminar todo el texto.");
const u8 gOtherText_OnlyOnePhrase[] = _("Solo puedes cambiar una frase.");
const u8 gOtherText_OriginalSongRestored[] = _("La canción original se recuperará.");
const u8 gOtherText_TrendyAlready[] = _("¡Eso ya está de moda!");
const u8 gOtherText_CombineTwoPhrases[] = _("Combina dos palabras o frases.");
const u8 gOtherText_QuitGivingInfo[] = _("¿Dejar de dar información?");
const u8 gOtherText_StopGivingMail[] = _("¿Dejar de dar la CARTA POKéMON?");
const u8 gOtherText_Profile[] = _("PERFIL");
const u8 gOtherText_AtBattleStart[] = _("Al comienzo de la batalla.");
const u8 gOtherText_UponWinningBattle[] = _("Al ganar una batalla.");
const u8 gOtherText_UponLosingBattle[] = _("Al perder una batalla.");

// mauville_man?
const u8 gOtherText_TheBardsSong[] = _("La canción de BARDO");
const u8 gOtherText_WhatsHipHappening[] = _("¿Qué está de moda?");
const u8 gOtherText_Interview[] = _("Entrevista");
const u8 gOtherText_GoodSaying[] = _("Bien dicho");
const u8 OtherText_SoPretty[] = _(" muy lindo!");
const u8 OtherText_SoDarling[] = _(" muy querido!");
const u8 OtherText_SoRelaxed[] = _(" muy relajado!");
const u8 OtherText_SoSunny[] = _(" muy soleado!");
const u8 OtherText_SoDesirable[] = _(" muy deseable!");
const u8 OtherText_SoExciting[] = _(" muy emocionante!");
const u8 OtherText_SoAmusing[] = _(" muy divertido!");
const u8 OtherText_SoMagical[] = _(" muy mágico!");

const u8 gOtherText_Is[] = _(" es");
const u8 gOtherText_DontYouAgree[] = _("\n¿No estás de acuerdo?");

const u8 OtherText_WantVacationNicePlace[] = _("Quiero irme de vacaciones.\n¿Conoces algún lugar agradable?");
const u8 OtherText_BoughtCrayonsIsNice[] = _("¡Compré crayones con 120 colores!\n¿No crees que es genial?");
const u8 OtherText_IfWeCouldFloat[] = _("¿No molaría si pudiéramos flotar en\nuna nube de burbujas?");
const u8 OtherText_SandWashesAwayMakeSad[] = _("Cuando escribes en una playa,\nse lavan. Eso me pone triste.");
const u8 OtherText_WhatsBottomSeaLike[] = _("¿Cómo es el fondo del mar?\n¡Me encantaría ir alguna vez!");
const u8 OtherText_SeeSettingSun[] = _("Cuando ves la puesta de sol, ¿te dan\nganas de ir a casa?");
const u8 OtherText_LyingInGreenGrass[] = _("Tumbado en la hierba verde...\n¡Oh, es tan tan bueno!");
const u8 OtherText_SecretBasesWonderful[] = _("¡las BASES SECRETAS son maravillosas!\n¿Puedes sentir la emoción?");

const u8 OtherText_PokeLeague[] = _("LIGA POKéMON");
const u8 OtherText_PokeCenter[] = _("CENTRO POKéMON");

const u8 gOtherText_GetsAPokeBlock[] = _(" consigue un {POKEBLOCK}?");

const u8 OtherText_Coolness[] = _("Frescura ");
const u8 OtherText_Beauty[] = _("Belleza ");
const u8 OtherText_Cuteness[] = _("Monería ");
const u8 OtherText_Smartness[] = _("Elegancia ");
const u8 OtherText_Toughness[] = _("Tenacidad ");

const u8 gOtherText_WasEnhanced[] = _("¡Fue mejorado!");
const u8 gOtherText_NothingChanged[] = _("¡Nada cambió!");
const u8 gOtherText_WontEat[] = _("Ya no comerá más...");

const u8 gSystemText_SaveFailedBackupCheck[] = _("Error al guardar.\nComprobando la memoria de respaldo...\nPor favor, espera.\n{COLOR RED}“Tiempo aproximado: 1 minuto”");
const u8 gSystemText_BackupDamagedGameContinue[] = _("La memoria de respaldo está dañada o\nla batería interna se ha agotado.\nEl juego puede ser jugado. Sin embargo,\nel progreso no se puede guardar.");
const u8 gSystemText_GameplayEnded[] = _("{COLOR RED}“No se puede continuar.\nVolviendo a la pantalla principal...”");
const u8 gSystemText_CheckCompleteSaveAttempt[] = _("Verificación completada.\nIntentando guardar de nuevo.\nPor favor, espera.");
const u8 gSystemText_SaveCompletedGameEnd[] = _("Se ha guardado con éxito.\n{COLOR RED}“No se puede continuar.\nVolviendo a la pantalla principal.”");
const u8 gSystemText_SaveCompletedPressA[] = _("Se ha guardado con éxito.\n{COLOR RED}“Por favor, pulsa el botón A.”");

const u8 gOtherText_Ferry[] = _("FERRY");
const u8 gOtherText_SecretBase[] = _("BASE SECRETA");
const u8 gOtherText_Hideout[] = _("ESCONDITE");

const u8 gSystemText_ResetRTCPrompt[] = _("¿Reiniciar RTC?\nA: Confirmar, B: Cancelar");
const u8 gSystemText_PresentTime[] = _("Tiempo presente en el juego");
const u8 gSystemText_PreviousTime[] = _("Tiempo anterior en el juego");
const u8 gSystemText_PleaseResetTime[] = _("Por favor, reinicia el tiempo.");
const u8 gSystemText_ClockResetDataSave[] = _("El reloj se ha reiniciado.\nLa información se va a guardar.\pPor favor, espera.");
const u8 gSystemText_SaveCompleted[] = _("Se ha guardado con éxito.");
const u8 gSystemText_SaveFailed[] = _("Error al guardar...");
const u8 gSystemText_NoSaveFileNoTime[] = _("No hay juego guardado, la hora no\npuede ser fijada.");
const u8 gSystemText_ClockAdjustmentUsable[] = _("El sistema de hora del juego\nahora es utilizable.");
const u8 gSystemText_Saving[] = _("GUARDANDO...\nNO APAGUES LA CONSOLA.");

#elif GERMAN

// placeholder strings
const u8 gExpandedPlaceholder_Empty[] = _("");
const u8 gExpandedPlaceholder_Kun[] = _("");
const u8 gExpandedPlaceholder_Chan[] = _("");
const u8 gExpandedPlaceholder_Sapphire[] = _("SAPHIR");
const u8 gExpandedPlaceholder_Ruby[] = _("RUBIN");
const u8 gExpandedPlaceholder_Aqua[] = _("AQUA");
const u8 gExpandedPlaceholder_Magma[] = _("MAGMA");
const u8 gExpandedPlaceholder_Archie[] = _("ADRIAN");
const u8 gExpandedPlaceholder_Maxie[] = _("MARC");
const u8 gExpandedPlaceholder_Kyogre[] = _("KYOGRE");
const u8 gExpandedPlaceholder_Groudon[] = _("GROUDON");
const u8 gExpandedPlaceholder_Brendan[] = _("BRIX");
const u8 gExpandedPlaceholder_May[] = _("MAIKE");

// system text
const u8 gSystemText_Egg[] = _("EI");
const u8 gSystemText_Pokemon2[] = _("POKéMON");

// main menu text
const u8 gMainMenuString_NewGame[] = _("NEUES SPIEL");
const u8 gMainMenuString_Continue[] = _("WEITER");
const u8 gMainMenuString_Option[] = _("OPTIONEN");
const u8 gMainMenuString_MysteryEvents[] = _("GEHEIMGESCHEHEN");

// system text 2
const u8 SystemText_UpdatingSaveExternal[] = _("Neuer Spielstand mittels Übertra-\ngung externer Daten. Bitte warten.");
const u8 SystemText_SaveUpdated[] = _("Der Spielstand wurde erneuert.");
const u8 SystemText_SaveUpdatedExchangeBackup[] = _("Der Spielstand wurde gespeichert.\pDas Backup Memory kann keine \nweiteren Spieldaten sichern.\pBitte Backup Memory austauschen.\pBei Fragen bitte an die Nintendo\nKonsumentenberatung wenden.");
const u8 SystemText_SaveNotUpdated[] = _("Spielstand wurde nicht gesichert.\pBitte Backup Memory \naustauschen.\pBei Fragen bitte an die Nintendo\nKonsumentenberatung wenden.");

// save file text
const u8 gSaveFileCorruptMessage[] = _("Der Spielstand ist beschädigt. Der\nvorherige Spielstand wird geladen.");
const u8 gSaveFileDeletedMessage[] = _("Der Spielstand wurde gelöscht.");

// system text 3
const u8 gBoardNotInstalledMessage[] = _("Das ‘1M Sub-circuit Board’\nist nicht installiert.");
const u8 gBatteryDryMessage[] = _("Interne Batterie ist verbraucht.\nSpiel kann fortgesetzt werden.\pAber zeitbasierende Spiel-Events\nwerden nicht mehr initiiert.");

// main menu text 2
const u8 gMainMenuString_Player[] = _("SPIELER");
const u8 gMainMenuString_Pokedex[] = _("POKéDEX");
const u8 gMainMenuString_Time[] = _("SPIELZEIT");
const u8 gMainMenuString_Badges[] = _("ORDEN");

// birch text
const u8 gBirchText_Boy[] = _("JUNGE");
const u8 gBirchText_Girl[] = _("MÄDEL");
const u8 gBirchText_NewName[] = _("NEUER NAME");

#ifdef SAPPHIRE
const u8 gDefaultBoyName1[] = _("SEBOLD");
#else
const u8 gDefaultBoyName1[] = _("ROLAND");
#endif
const u8 gDefaultBoyName2[] = _("DANIEL");
const u8 gDefaultBoyName3[] = _("HELGE");
const u8 gDefaultBoyName4[] = _("JAN");

#ifdef SAPPHIRE
const u8 gDefaultGirlName1[] = _("MARTINA");
#else
const u8 gDefaultGirlName1[] = _("PETRA");
#endif
const u8 gDefaultGirlName2[] = _("TANJA");
const u8 gDefaultGirlName3[] = _("ANDREA");
const u8 gDefaultGirlName4[] = _("SARA");

const u8 gSystemText_IntroWeCall[] = _("Dies ist ein so genanntes\n“POKéMON”.");
const u8 gSystemText_NewPara[] = _("\p");

const u8 gDexText_UnknownPoke[] = _("?????");
const u8 gDexText_UnknownHeight[] = _("???,?  m");
const u8 gDexText_UnknownWeight[] = _("???,?  kg$");
const u8 gDexText_CryOf[] = _("{CLEAR_TO 2}RUF VON$");
const u8 gDexText_SizeComparedTo[] = _("GRÖSSE IM VERGLEICH ZU ");
const u8 gDexText_RegisterComplete[] = _("Neuer Eintrag aufgenommen.");
const u8 gDexText_Searching[] = _("Suche läuft.\nBitte warten...");
const u8 gDexText_SearchComplete[] = _("Suche beendet.");
const u8 gDexText_NoMatching[] = _("Es wurde keine Übereinstimmung ermittelt.");

const u8 DexText_SearchForPoke[] = _("Suche nach POKéMON anhand\nausgewählter Parameter.");
const u8 DexText_SwitchDex[] = _("Ordnungssystem des POKéDEX ändern.");
const u8 DexText_ReturnToDex[] = _("Kehre zurück zum POKéDEX.");
const u8 DexText_SelectDexMode[] = _("Wähle einen POKéDEX.");
const u8 DexText_SelectDexList[] = _("Wähle ein Ordnungssystem des POKéDEX.");
const u8 DexText_ListByABC[] = _("Nach Anfangsbuchstaben suchen.\n(Alle gesehenen POKéMON.)");
const u8 DexText_ListByColor[] = _("Nach Körperfarbe suchen.\n(Alle gesehenen POKéMON.)");
const u8 DexText_ListByType[] = _("Nach Elementklasse suchen.\n(Nur gefangene POKéMON.)");
const u8 DexText_ExecuteSearchSwitch[] = _("Suche/Ändern ausführen.");
const u8 DexText_HoennDex[] = _("HOENN DEX");
const u8 DexText_NationalDex[] = _("NATIONALER DEX");
const u8 DexText_NumericalMode[] = _("NUMERISCH");
const u8 DexText_ABCMode[] = _("VON A BIS Z");
const u8 DexText_HeaviestMode[] = _("NACH GEWICHT {0x86}");
const u8 DexText_LightestMode[] = _("NACH GEWICHT {0x85}");
const u8 DexText_TallestMode[] = _("NACH GRÖSSE {0x86}");
const u8 DexText_SmallestMode[] = _("NACH GRÖSSE {0x85}");
const u8 DexText_ABC[] = _("ABC");
const u8 DexText_DEF[] = _("DEF");
const u8 DexText_GHI[] = _("GHI");
const u8 DexText_JKL[] = _("JKL");
const u8 DexText_MNO[] = _("MNO");
const u8 DexText_PQR[] = _("PQR");
const u8 DexText_STU[] = _("STU");
const u8 DexText_VWX[] = _("VWX");
const u8 DexText_YZ[] = _("YZ");
const u8 DexText_Red[] = _("ROT");
const u8 DexText_Blue[] = _("BLAU");
const u8 DexText_Yellow[] = _("GELB");
const u8 DexText_Green[] = _("GRÜN");
const u8 DexText_Black[] = _("SCHWARZ");
const u8 DexText_Brown[] = _("BRAUN");
const u8 DexText_Purple[] = _("LILA");
const u8 DexText_Gray[] = _("GRAU");
const u8 DexText_White[] = _("WEISS");
const u8 DexText_Pink[] = _("ROSA");
const u8 DexText_HoennDex2[] = _("POKéDEX von HOENN");
const u8 DexText_NationalDex2[] = _("POKéDEX, erweiterte Edition");
const u8 DexText_ListByNumber[] = _("POKéMON werden anhand ihrer\nNummer sortiert.");
const u8 DexText_ListByABC2[] = _("Gesehene und gefangene POKéMON\nwerden alphabetisch geordnet.");
const u8 DexText_ListByHeavyToLightest[] = _("Gefangene POKéMON werden nach Gewicht\nsortiert, beginnend mit dem schwersten.");
const u8 DexText_ListByLightToHeaviest[] = _("Gefangene POKéMON werden nach Gewicht\nsortiert, beginnend mit dem leichtesten.");
const u8 DexText_ListByTallToSmallest[] = _("Gefangene POKéMON werden nach Größe\nsortiert, beginnend mit dem größten.");
const u8 DexText_ListBySmallToTallest[] = _("Gefangene POKéMON werden nach Größe\nsortiert, beginnend mit dem kleinsten.");
const u8 DexText_Terminator5[] = _("");
const u8 DexText_DontSpecify[] = _("KEINE ANGABE");
const u8 DexText_None[] = _("KEINER");
const u8 DexText_RightPointingTriangle[] = _("▶");
const u8 DexText_Terminator6[] = _(" ");

const u8 gMenuText_WelcomeToHOFAndDexRating[] = _("Willkommen in der RUHMESHALLE!$Gesehene POKéMON: {STR_VAR_1}!\nGefangene POKéMON: {STR_VAR_2}!\pPROF. BIRKs POKéDEX-Bewertung!\pPROF. BIRK: Sehen wir mal...\p");
const u8 gMenuText_HOFSaving[] = _("SPEICHERVORGANG...\nDAS GERÄT NICHT AUSSCHALTEN!");
const u8 gMenuText_HOFCorrupt[] = _("Die RH-Daten sind beschädigt.");
const u8 gMenuText_HOFNumber[] = _("RUHMESHALLE, Nr. ");
const u8 gMenuText_HOFCongratulations[] = _("CHAMP der POKéMON LIGA!\nHerzlichen Glückwunsch!");

const u8 gOtherText_Number2[] = _("Nr.");
const u8 gOtherText_Level3[] = _("Lv.");
const u8 gOtherText_IDNumber[] = _("ID.Nr. /");
const u8 gOtherText_Name[] = _("NAME /");
const u8 gOtherText_IDNumber2[] = _("ID.Nr. /");
const u8 gOtherText_BirchInTrouble[] = _("{HIGHLIGHT WHITE2}{COLOR DARK_GREY}PROF. BIRK ist in Schwierigkeiten!\nSchnapp’ dir ein POKéMON und hilf ihm!");
const u8 gOtherText_DoYouChoosePoke[] = _("{HIGHLIGHT WHITE2}{COLOR DARK_GREY}Wählst du dieses POKéMON?");
const u8 gOtherText_Poke[] = _("POKéMON");

const u8 gSystemText_SaveErrorExchangeBackup[] = _("Fehler beim Speichern!\pBitte Backup Memory\naustauschen.");
const u8 gOtherText_FlyToWhere[] = _("Wohin willst du FLIEGEN?");

const u8 OtherText_Use[] = _("O.K.");
const u8 OtherText_Toss[] = _("MÜLL");
const u8 OtherText_Register[] = _("WÄHLEN");
const u8 OtherText_Give2[] = _("GEBEN");
const u8 OtherText_CheckTag[] = _("PRÜFEN");
const u8 OtherText_Confirm[] = _("O.K.");
const u8 gOtherText_Walk[] = _("LAUFEN");

const u8 gOtherText_Exit[] = _("BEENDEN");
const u8 gOtherText_CancelNoTerminator[] = _("ZURÜCK");
const u8 gOtherText_CancelWithTerminator[] = _("$ZURÜCK");

const u8 OtherText_Item[] = _("ITEM");
const u8 OtherText_Mail[] = _("BRIEF");
const u8 OtherText_Take2[] = _("NEHMEN");
const u8 OtherText_Store[] = _("GEBEN");

const u8 gOtherText_Check[] = _("PRÜFEN");
const u8 gOtherText_None[] = _("KEINES");

const u8 gOtherText_ThreeQuestions2[] = _("???");

const u8 gOtherText_FiveQuestions[] = _("?????");
const u8 gOtherText_Slash[] = _("/");

const u8 gOtherText_OneDash[] = _("-");
const u8 gOtherText_TwoDashes[] = _("--");
const u8 gOtherText_ThreeDashes2[] = _("---");
const u8 gOtherText_MaleSymbol2[] = _("♂");
const u8 gOtherText_FemaleSymbol2[] = _("♀");
const u8 gOtherText_Lv[] = _("Lv.");
const u8 gOtherText_TallPlusAndRightArrow[] = _("{TALL_PLUS}${RIGHT_ARROW}");
const u8 gMenuText_GoBackToPrev[] = _("Kehre zurück zum\nvorherigen Menü.");
const u8 gOtherText_WhatWillYouDo[] = _("Was möchtest du tun?");

const u8 gOtherText_xString1[] = _("×{STR_VAR_1}");
const u8 gOtherText_Berry2[] = _("BEERE");
const u8 gOtherText_Coins2[] = _("{STR_VAR_1} MÜNZ.");
const u8 gOtherText_CloseBag[] = _("BEUTEL SCHLIESSEN");

const u8 OtherText_TheField3[] = _("zum Hauptmenü.");
const u8 OtherText_TheBattle[] = _("zum Kampf.");
const u8 OtherText_ThePokeList[] = _("zur POKéMON-LISTE.");
const u8 OtherText_TheShop[] = _("zum Geschäft.");
const u8 OtherText_TheField[] = _("zum Hauptmenü.");
const u8 OtherText_TheField2[] = _("zum Hauptmenü.");
const u8 OtherText_ThePC[] = _("zum PC.");

const u8 *const gUnknown_0840E740[7] =
{
    OtherText_TheField3,
    OtherText_TheBattle,
    OtherText_ThePokeList,
    OtherText_TheShop,
    OtherText_TheField,
    OtherText_TheField2,
    OtherText_ThePC,
};

const u8 gOtherText_ReturnTo[] = _("Zurück ");
const u8 gOtherText_WhatWillYouDo2[] = _("Was möchtest\ndu tun?");
const u8 gOtherText_CantWriteMail[] = _("Du kannst keinen\nBRIEF schreiben.");
const u8 gOtherText_NoPokemon[] = _("Hier ist kein\nPOKéMON.{PAUSE_UNTIL_PRESS}");
const u8 gOtherText_SwitchWhichItem[] = _("Gegen welches Item\naustauschen?");
const u8 gOtherText_CantBeHeld[] = _("{STR_VAR_1} ist nicht zu geben.");
const u8 gOtherText_CantBeHeldHere[] = _("{STR_VAR_1} ist hier nicht zu geben.");
const u8 gOtherText_HowManyToDeposit[] = _("Wie viele möchtest\ndu ablegen?");
const u8 gOtherText_DepositedItems[] = _("{STR_VAR_2}× {STR_VAR_1}\nwurde abgelegt.");
const u8 gOtherText_NoRoomForItems[] = _("Kein Platz für\nweitere Items.");
const u8 gOtherText_CantStoreSomeoneItem[] = _("Du kannst kein\nItem eines anderen\nauf dem PC lagern.");
const u8 gOtherText_TooImportant[] = _("Das ist viel zu\nwichtig, um es\nwegzuwerfen!");
const u8 gOtherText_HowManyToToss[] = _("Wie viel in den Müll?");
const u8 gOtherText_ThrewAwayItem[] = _("{STR_VAR_2} × {STR_VAR_1}\nweggeworfen.");
const u8 gOtherText_OkayToThrowAwayPrompt[] = _("Willst du wirklich\n{STR_VAR_2} × {STR_VAR_1}\nwegwerfen?");
const u8 gOtherText_DadsAdvice[] = _("VATI sagt immer...\n{PLAYER}, dies ist weder der rechte\lOrt noch der rechte Zeitpunkt dafür!{PAUSE_UNTIL_PRESS}");
const u8 gOtherText_CantGetOffBike[] = _("Du kannst hier nicht vom RAD steigen.{PAUSE_UNTIL_PRESS}");
const u8 gOtherText_ItemfinderResponding[] = _("Oh!\nDas Gerät zeigt etwas an!\pHier muss ein Item vergraben sein!{PAUSE_UNTIL_PRESS}");
const u8 gOtherText_ItemfinderItemUnderfoot[] = _("Das Gerät macht direkt unter\ndeinen Füßen etwas aus!{PAUSE_UNTIL_PRESS}");
const u8 gOtherText_NoResponse[] = _("... ... ... ... Nichts!\nKeine Anzeige.{PAUSE_UNTIL_PRESS}");
const u8 gOtherText_Coins3[] = _("Deine MÜNZEN:\n{STR_VAR_1}{PAUSE_UNTIL_PRESS}");
const u8 gOtherText_BootedTM[] = _("Eine TM wurde aktiviert.");
const u8 gOtherText_BootedHM[] = _("Eine VM wurde aktiviert.");
const u8 gOtherText_ContainsMove[] = _("Sie enthält\n{STR_VAR_1}.\p{STR_VAR_1} einem\nPOKéMON beibringen?");
const u8 gOtherText_UsedItem[] = _("{PLAYER} setzt\n{STR_VAR_2} ein.{PAUSE_UNTIL_PRESS}");
const u8 gOtherText_RepelLingers[] = _("Aber SCHUTZ wirkt doch\nnoch!{PAUSE_UNTIL_PRESS}");
const u8 gOtherText_UsedFlute[] = _("{PLAYER} setzt\n{STR_VAR_2} ein.\pWilde POKéMON werden angezogen.{PAUSE_UNTIL_PRESS}");
const u8 gOtherText_UsedRepel[] = _("{PLAYER} setzt\n{STR_VAR_2} ein.\pWilde POKéMON werden abgehalten.{PAUSE_UNTIL_PRESS}");
const u8 gOtherText_BoxIsFull[] = _("Die BOXEN sind voll.{PAUSE_UNTIL_PRESS}");
const u8 gOtherText_Size[] = _("MASS:");
const u8 gOtherText_Firm[] = _("GÜTE:");

const u8 gContestStatsText_Unknown1[] = _("{STR_VAR_1},{STR_VAR_2} cm");

const u8 ContestStatsText_VerySoft[] = _("Sehr weich");
const u8 ContestStatsText_Soft[] = _("Weich");
const u8 ContestStatsText_Hard[] = _("Hart");
const u8 ContestStatsText_VeryHard[] = _("Sehr hart");
const u8 ContestStatsText_SuperHard[] = _("Steinhart");

const u8 ContestStatsText_RedPokeBlock[] = _("{POKEBLOCK} ROT");
const u8 ContestStatsText_BluePokeBlock[] = _("{POKEBLOCK} BLAU");
const u8 ContestStatsText_PinkPokeBlock[] = _("{POKEBLOCK} ROSA");
const u8 ContestStatsText_GreenPokeBlock[] = _("{POKEBLOCK} GRÜN");
const u8 ContestStatsText_YellowPokeBlock[] = _("{POKEBLOCK} GELB");
const u8 ContestStatsText_PurplePokeBlock[] = _("{POKEBLOCK} LILA");
const u8 ContestStatsText_IndigoPokeBlock[] = _("{POKEBLOCK} INDIGO");
const u8 ContestStatsText_BrownPokeBlock[] = _("{POKEBLOCK} BRAUN");
const u8 ContestStatsText_LiteBluePokeBlock[] = _("{POKEBLOCK} CYAN");
const u8 ContestStatsText_OlivePokeBlock[] = _("{POKEBLOCK} OLIV");
const u8 ContestStatsText_GrayPokeBlock[] = _("{POKEBLOCK} GRAU");
const u8 ContestStatsText_BlackPokeBlock[] = _("{POKEBLOCK} SCHWARZ");
const u8 ContestStatsText_WhitePokeBlock[] = _("{POKEBLOCK} WEISS");
const u8 ContestStatsText_GoldPokeBlock[] = _("{POKEBLOCK} GOLD");

const u8 gContestStatsText_Spicy[] = _("SCHARF");
const u8 gContestStatsText_Dry[] = _("TROCKEN");
const u8 gContestStatsText_Sweet[] = _("SÜSS");
const u8 gContestStatsText_Bitter[] = _("BITTER");
const u8 gContestStatsText_Sour[] = _("SAUER");
const u8 gContestStatsText_Tasty[] = _("LECKER");
const u8 gContestStatsText_Feel[] = _("WÜRZE");

const u8 gContestStatsText_StowCase[] = _("BOX verstauen.");
const u8 gContestStatsText_ThrowAwayPrompt[] = _("{STR_VAR_1}\nwegwerfen?");
const u8 gContestStatsText_WasThrownAway[] = _("{STR_VAR_1}\nwurde weggeworfen.");
const u8 gContestStatsText_NormallyAte[] = _("{STR_VAR_1} aß den\n{STR_VAR_2}.{PAUSE_UNTIL_PRESS}");
const u8 gContestStatsText_HappilyAte[] = _("{STR_VAR_1} aß gerne den\n{STR_VAR_2}.{PAUSE_UNTIL_PRESS}");
const u8 gContestStatsText_DisdainfullyAte[] = _("{STR_VAR_1} aß ungern den\n{STR_VAR_2}.{PAUSE_UNTIL_PRESS}");

const u8 MartText_Buy[] = _("KAUFEN");
const u8 MartText_Sell[] = _("VERKAUFEN");
const u8 MartText_Quit2[] = _("TSCHÜSS!");

const u8 gOtherText_QuitShopping[] = _("Einkauf beenden.");

const u8 gOtherText_HowManyYouWant[] = _("{STR_VAR_1}? Aber gerne.\nWie viele möchtest du?");
const u8 gOtherText_ThatWillBe[] = _("{STR_VAR_1}? Und du möchtest {STR_VAR_2}?\nDas macht dann ¥{STR_VAR_3}.");
const u8 gOtherText_ThatWillBe2[] = _("{STR_VAR_1} soll es sein?\nDas kostet ¥{STR_VAR_2}. Einverstanden?");
const u8 gOtherText_ThatWillBe3[] = _("Du wolltest {STR_VAR_1}?\nDas kostet ¥{STR_VAR_2}. Einverstanden?");
const u8 gOtherText_HereYouGo[] = _("Bitte sehr!\nUnd vielen Dank.");
const u8 gOtherText_HereYouGo2[] = _("Vielen Dank!\nEs wird auf deinen PC übertragen.");
const u8 gOtherText_HereYouGo3[] = _("Danke!\nEs wird auf deinen PC übertragen.");
const u8 gOtherText_NotEnoughMoney[] = _("Du hast nicht genug Geld.{PAUSE_UNTIL_PRESS}");
const u8 gOtherText_NoRoomFor[] = _("Du hast keinen Platz für weitere Items.{PAUSE_UNTIL_PRESS}");
const u8 gOtherText_SpaceForIsFull[] = _("Es ist kein Platz für {STR_VAR_1}.{PAUSE_UNTIL_PRESS}");
const u8 gOtherText_AnythingElse[] = _("Gibt es noch etwas, womit\nich dienen kann?");
const u8 gOtherText_CanIHelpYou[] = _("Kann ich dir sonst noch dienlich sein?");
const u8 gOtherText_FreePremierBall[] = _("Ich gebe dir noch einen PREMIERBALL.{PAUSE_UNTIL_PRESS}");
const u8 gOtherText_CantBuyThat[] = _("{STR_VAR_2}? Es tut mir Leid, aber\ndas kann ich nicht kaufen.{PAUSE_UNTIL_PRESS}");
const u8 gOtherText_HowManyToSell[] = _("{STR_VAR_2}?\nWie viele möchtest du verkaufen?");
const u8 gOtherText_CanPay[] = _("Ich gebe dir ¥{STR_VAR_1}.\nBist du damit einverstanden?");
const u8 gOtherText_SoldItem[] = _("{STR_VAR_2} wurde übergeben\nim Tausch gegen ¥{STR_VAR_1}.");

const u8 OtherText_Money[] = _("¥{STR_VAR_1}");
const u8 OtherText_Shift[] = _("TAUSCH");
const u8 OtherText_SendOut[] = _("AUSSENDEN");
const u8 OtherText_Switch2[] = _("TAUSCH");
const u8 OtherText_Summary[] = _("BERICHT");
const u8 OtherText_Moves[] = _("ATTACKEN");
const u8 OtherText_Enter2[] = _("EINTRAGEN");
const u8 OtherText_NoEntry[] = _("AUSTRAGEN");
const u8 OtherText_Take[] = _("NEHMEN");
const u8 OtherText_Read2[] = _("LESEN");

const u8 gOtherText_Hp2[] = _("KP");
const u8 gOtherText_SpAtk2[] = _("SP. ANG.");
const u8 gOtherText_SpDef2[] = _("SP. VER.");
const u8 gOtherText_WontHaveAnyEffect[] = _("Es wird keine Wirkung haben.{PAUSE_UNTIL_PRESS}");

const u8 gOtherText_CantUseOnPoke[] = _("Das kann nicht bei diesem\nPOKéMON eingesetzt werden.{PAUSE_UNTIL_PRESS}");

const u8 gOtherText_CantBeSwitched[] = _("{STR_VAR_1} kann nicht ausge-\ntauscht werden!{PAUSE_UNTIL_PRESS}");
const u8 gOtherText_AlreadyBattle[] = _("{STR_VAR_1}\nkämpft bereits!{PAUSE_UNTIL_PRESS}");
const u8 gOtherText_AlreadySelected[] = _("{STR_VAR_1} ist\nbereits ausgewählt.{PAUSE_UNTIL_PRESS}");
const u8 gOtherText_NoEnergyLeft[] = _("{STR_VAR_1} kann\nnicht kämpfen!{PAUSE_UNTIL_PRESS}");
const u8 gOtherText_CantSwitchPokeWithYours[] = _("Ein POKéMON von {STR_VAR_1} ist\nnicht gegen deins eintauschbar!{PAUSE_UNTIL_PRESS}");
const u8 gOtherText_EGGCantBattle[] = _("Ein EI kann nicht kämpfen!{PAUSE_UNTIL_PRESS}");
const u8 gOtherText_CantBeUsedBadge[] = _("Das ist erst einsetzbar, wenn\nein neuer ORDEN errungen wurde.");
const u8 gOtherText_NoMoreThreePoke[] = _("Es können nicht mehr als\ndrei POKéMON teilnehmen.");
const u8 gOtherText_SendRemovedMailPrompt[] = _("Den abgenommenen BRIEF\nauf deinen PC übertragen?");
const u8 gOtherText_MailWasSent[] = _("Der BRIEF wurde auf deinen\nPC übertragen.{PAUSE_UNTIL_PRESS}");
const u8 gOtherText_MailboxIsFull[] = _("Du kannst keine weiteren BRIEFE\nauf deinen PC übertragen.{PAUSE_UNTIL_PRESS}");
const u8 gOtherText_MailRemovedMessageLost[] = _("Wird der BRIEF entfernt, geht\nder Inhalt verloren, okay?");
const u8 gOtherText_MailMustBeRemoved[] = _("Der BRIEF muss entfernt werden,\num ein Item tragen zu können.{PAUSE_UNTIL_PRESS}");
const u8 gOtherText_WasGivenToHold[] = _("{STR_VAR_1} erhält\n{STR_VAR_2} zum Tragen.{PAUSE_UNTIL_PRESS}");
const u8 gOtherText_AlreadyHolding[] = _("{STR_VAR_1} trägt bereits\n{STR_VAR_2}.\pSollen die Items ausge-\ntauscht werden?");
const u8 gOtherText_NotHoldingAnything[] = _("{STR_VAR_1} trägt\nkein Item.{PAUSE_UNTIL_PRESS}");
const u8 gOtherText_ReceivedTheThingFrom[] = _("{STR_VAR_2} von\n{STR_VAR_1} erhalten.{PAUSE_UNTIL_PRESS}");
const u8 gOtherText_MailTaken[] = _("Der BRIEF wurde dem\nPOKéMON abgenommen.{PAUSE_UNTIL_PRESS}");
const u8 gOtherText_TakenAndReplaced[] = _("{STR_VAR_2} wurde gegen\n{STR_VAR_1} ausgetauscht.{PAUSE_UNTIL_PRESS}");
const u8 gOtherText_PokeHoldingItemCantMail[] = _("Dieses POKéMON trägt ein Item.\nEs kann keinen BRIEF tragen.{PAUSE_UNTIL_PRESS}");
const u8 gOtherText_MailTransferredMailbox[] = _("Der BRIEF wurde von deinem\nPC heruntergeladen.{PAUSE_UNTIL_PRESS}");
const u8 gOtherText_BagFullCannotRemoveItem[] = _("Der BEUTEL ist voll. Das Item des\nPOKéMON wurde nicht entfernt.{PAUSE_UNTIL_PRESS}");
const u8 gOtherText_LearnedMove[] = _("{STR_VAR_1} erlernt\n{STR_VAR_2}!");
const u8 gOtherText_NotCompatible[] = _("{STR_VAR_1} und {STR_VAR_2}\nsind nicht kompatibel.\p{STR_VAR_2} kann nicht \nerlernt werden.{PAUSE_UNTIL_PRESS}");
const u8 gOtherText_WantsToLearn[] = _("{STR_VAR_1} versucht,\n{STR_VAR_2} zu erlernen.\pAber {STR_VAR_1} kann maximal\nvier Attacken erlernen.\pSoll eine andere Attacke durch\n{STR_VAR_2} ersetzt werden?");
const u8 gOtherText_StopTryingTo[] = _("{STR_VAR_2} nicht\nerlernen?");
const u8 gOtherText_DidNotLearnMove2[] = _("{STR_VAR_1} hat {STR_VAR_2}\nnicht erlernt.{PAUSE_UNTIL_PRESS}");
const u8 gOtherText_WhichMoveToForget2[] = _("Welche Attacke soll vergessen\nwerden?{PAUSE_UNTIL_PRESS}");
const u8 gOtherText_ForgetMove123_2[] = _("{PAUSE 32}1, {PAUSE 15}2 und{PAUSE 15}... {PAUSE 15}... {PAUSE 15}... {PAUSE 15}{PLAY_SE 0x38 0x00} Schwupp!\p{STR_VAR_1} hat\n{STR_VAR_2} vergessen.\pUnd...{PAUSE_UNTIL_PRESS}");
const u8 gOtherText_AlreadyKnows[] = _("{STR_VAR_1} kennt\n{STR_VAR_2}.{PAUSE_UNTIL_PRESS}");
const u8 gOtherText_HPRestoredBy[] = _("Die KP von {STR_VAR_1} wurden\num {STR_VAR_2} Punkte aufgefüllt.{PAUSE_UNTIL_PRESS}");
const u8 gOtherText_CuredPoisoning[] = _("Die Vergiftung von {STR_VAR_1}\nwurde geheilt.{PAUSE_UNTIL_PRESS}");
const u8 gOtherText_CuredParalysis[] = _("Die Paralyse von {STR_VAR_1}\nwurde aufgehoben.{PAUSE_UNTIL_PRESS}");
const u8 gOtherText_WokeUp[] = _("{STR_VAR_1} ist aufgewacht.{PAUSE_UNTIL_PRESS}");
const u8 gOtherText_BurnHealed[] = _("Verbrennung von {STR_VAR_1}\nwurde geheilt.{PAUSE_UNTIL_PRESS}");
const u8 gOtherText_ThawedOut[] = _("{STR_VAR_1} wurde aufgetaut.{PAUSE_UNTIL_PRESS}");
const u8 gOtherText_PPRestored[] = _("AP wurden aufgefüllt.{PAUSE_UNTIL_PRESS}");
const u8 gOtherText_RegainedHealth[] = _("{STR_VAR_1} erholte sich.{PAUSE_UNTIL_PRESS}");
const u8 gOtherText_BecameHealthy[] = _("{STR_VAR_1} erholte sich.{PAUSE_UNTIL_PRESS}");
const u8 gOtherText_PPIncreased[] = _("AP von {STR_VAR_1}\nwurden angehoben.{PAUSE_UNTIL_PRESS}");
const u8 gOtherText_ElevatedTo[] = _("{STR_VAR_1} erreicht\nLv. {STR_VAR_2}.");
const u8 gOtherText_WasRaised[] = _("{STR_VAR_2} von\n{STR_VAR_1} wurde angehoben.{PAUSE_UNTIL_PRESS}");
const u8 gOtherText_SnapConfusion[] = _("{STR_VAR_1} ist nicht\nmehr verwirrt.{PAUSE_UNTIL_PRESS}");
const u8 gOtherText_GotOverLove[] = _("{STR_VAR_1} fühlt sich nicht\nmehr angezogen.{PAUSE_UNTIL_PRESS}");
const u8 OtherText_ChoosePoke[] = _("Wähle ein POKéMON.");
const u8 OtherText_MovePokeTo[] = _("An wessen Stelle setzen?");
const u8 OtherText_TeachWhat[] = _("Welches POKéMON lehren?");
const u8 OtherText_UseWhat[] = _("Welches POKéMON?");
const u8 OtherText_GiveWhat[] = _("Welchem POKéMON geben?");
const u8 OtherText_DoWhat[] = _("Was tun mit {STR_VAR_1}?");
const u8 OtherText_NothingToCut[] = _("Hier nicht einsetzbar.");
const u8 OtherText_CantSurf[] = _("SURFER nicht einsetzbar.");
const u8 OtherText_AlreadySurfing[] = _("SURFER ist eingesetzt.");
const u8 OtherText_CantUseThatHere[] = _("Hier nicht einsetzbar.");
const u8 OtherText_RestoreWhatMove[] = _("Welche Attacke auffüllen?");
const u8 OtherText_BoostPP[] = _("AP welcher Attacke heben?");
const u8 OtherText_DoWhatWithItem[] = _("Was willst du mit dem Item?");
const u8 OtherText_NoPokeForBattle[] = _("Kein POKéMON kampfbereit!");
const u8 OtherText_ChoosePoke2[] = _("Wähle ein POKéMON.");
const u8 OtherText_NotEnoughHP[] = _("Nicht genügend KP...");
const u8 OtherText_ThreePokeNeeded[] = _("Drei POKéMON sind nötig.");
const u8 OtherText_PokeCantBeSame[] = _("Nicht dieselben POKéMON!");
const u8 OtherText_NoIdenticalHoldItems[] = _("Nicht dieselben Items!");
const u8 OtherText_TeachWhichPoke[] = _("Welches POKéMON lehren?");
const u8 gOtherText_Attack[] = _("ANGRIFF");
const u8 gOtherText_Defense[] = _("VERT.");
const u8 gOtherText_SpAtk[] = _("SP.ANG.");
const u8 gOtherText_SpDef[] = _("SP.VER.");
const u8 gOtherText_Speed[] = _("INIT.");
const u8 gOtherText_HP[] = _("KP");
const u8 gOtherText_Terminator18[] = _("");
const u8 gOtherText_OriginalTrainer[] = _("OT:");
const u8 gOtherText_Type2[] = _("TYP:");
const u8 gOtherText_Power2[] = _("STÄRKE");
const u8 gOtherText_Accuracy2[] = _("GENAU.");
const u8 gOtherText_Appeal2[] = _("AUSDR.");
const u8 gOtherText_Jam2[] = _("EINDR.");
const u8 gOtherText_Status[] = _("STATUS");
const u8 gOtherText_ExpPoints[] = _("E.-PUNKTE");
const u8 gOtherText_NextLv[] = _("NÄCHST. Lv.");
const u8 gOtherText_Ribbons00[] = _("BÄNDER: 00");

const u8 OtherText_Event[] = _("GESCHEHEN");
const u8 OtherText_Switch[] = _("TAUSCH");
const u8 OtherText_PokeInfo[] = _("POKéMON-INFO");
const u8 OtherText_PokeSkills[] = _("POKéMON-FÄHIG.");
const u8 OtherText_BattleMoves[] = _("ATTACKEN");
const u8 OtherText_ContestMoves[] = _("WETT.-ATTACKEN");
const u8 OtherText_Info[] = _("INFO");

const u8 gOtherText_EggLongTime[] = _("Dieses EI braucht sicher\nnoch lange, bis es schlüpft.");
const u8 gOtherText_EggSomeTime[] = _("Was da wohl schlüpfen wird?\nEs wird sicher lange dauern.");
const u8 gOtherText_EggSoon[] = _("Es bewegt sich manchmal.\nVielleicht schlüpft es bald?");
const u8 gOtherText_EggAbout[] = _("Es macht Geräusche.\nSicher schlüpft es bald!");
const u8 gOtherText_CantForgetHMs[] = _("VM-Attacken können jetzt\nnicht vergessen werden.");
const u8 gOtherText_PlayersBase[] = _("BASIS v. {PLAYER}");
const u8 gOtherText_OkayToDeleteFromRegistry[] = _("Soll {STR_VAR_1} aus dem GRUNDBUCH\ngelöscht werden?");
const u8 gOtherText_RegisteredDataDeleted[] = _("Eingetragene Daten wurden gelöscht.{PAUSE_UNTIL_PRESS}");

const u8 gSecretBaseText_NoRegistry[] = _("Es gibt kein GRUNDBUCH.{PAUSE_UNTIL_PRESS}");
const u8 SecretBaseText_DelRegist[] = _("EINTR. LÖSCHEN");
const u8 SecretBaseText_Decorate[] = _("DEKORIEREN");
const u8 SecretBaseText_PutAway[] = _("WEGNEHMEN");
const u8 SecretBaseText_Toss[] = _("WEGWERFEN");
const u8 SecretBaseText_PutOutDecor[] = _("Wähle eine Dekoration \nund stelle sie auf.");
const u8 SecretBaseText_StoreChosenDecor[] = _("Wähle eine Dekoration und \nübertrage sie auf deinen PC.");
const u8 SecretBaseText_ThrowAwayDecor[] = _("Wähle eine Dekoration\nund wirf sie weg.");
const u8 gSecretBaseText_NoDecors[] = _("Es gibt keine Dekoration.{PAUSE_UNTIL_PRESS}");
const u8 SecretBaseText_Desk[] = _("TISCH");
const u8 SecretBaseText_Chair[] = _("STUHL");
const u8 SecretBaseText_Plant[] = _("PFLANZE");
const u8 SecretBaseText_Ornament[] = _("ORNAMENT");
const u8 SecretBaseText_Mat[] = _("MATTE");
const u8 SecretBaseText_Poster[] = _("POSTER");
const u8 SecretBaseText_Doll[] = _("PUPPE");
const u8 SecretBaseText_Cushion[] = _("KISSEN");
const u8 gSecretBaseText_GoldRank[] = _("GOLD");
const u8 gSecretBaseText_SilverRank[] = _("SILBER");
const u8 gSecretBaseText_PlaceItHere[] = _("Hierhin platzieren?");
const u8 gSecretBaseText_CantBePlacedHere[] = _("Kann hier nicht platziert werden.");
const u8 gSecretBaseText_CancelDecorating[] = _("Dekorieren beenden?");
const u8 gSecretBaseText_InUseAlready[] = _("Das wurde bereits platziert.");
const u8 gSecretBaseText_NoMoreDecor[] = _("Mehr kann nicht dekoriert werden. Es\nist nur Platz für {STR_VAR_1} Dekorationen.");
const u8 gSecretBaseText_NoMoreDecor2[] = _("Mehr kann nicht dekoriert werden. Es\nist nur Platz für {STR_VAR_1} Dekorationen.");
const u8 gSecretBaseText_DecorMustPlaceOnTable[] = _("Das geht nicht. Es muss auf einem\nTISCH oder Ähnlichem stehen.");
const u8 gSecretBaseText_DecorCantPlace[] = _("Die Dekoration kann nicht in deinem\neigenen Zimmer aufgestellt werden.");
const u8 gSecretBaseText_DecorInUse[] = _("Diese Dekoration wurde platziert.\nDu kannst sie nicht wegwerfen.");
const u8 gSecretBaseText_WillBeDiscarded[] = _("{STR_VAR_1} wird weggeworfen.\nEinverstanden?");
const u8 gSecretBaseText_DecorThrownAway[] = _("Die Dekoration wurde weggeworfen.");
const u8 gSecretBaseText_StopPuttingAwayDecor[] = _("Wegnehmen von Dekoration beenden?");
const u8 gSecretBaseText_NoDecor[] = _("Hier ist keine Dekoration.");
const u8 gSecretBaseText_ReturnDecor[] = _("Diese Dekoration auf \nden PC übertragen?");
const u8 gSecretBaseText_DecorReturned[] = _("Die Dekoration wurde auf\nden PC übertragen.");
const u8 gSecretBaseText_NoDecorInUse[] = _("Es sind keine Dekorationen platziert.{PAUSE_UNTIL_PRESS}");
const u8 SecretBaseText_Tristan[] = _("TATIAN");
const u8 SecretBaseText_Philip[] = _("LARS");
const u8 SecretBaseText_Dennis[] = _("KLAAS");
const u8 SecretBaseText_Roberto[] = _("HAINER");
const u8 SecretBaseText_TurnOff[] = _("AUSSCHALTEN");
const u8 SecretBaseText_Decoration[] = _("DEKORATION");
const u8 SecretBaseText_ItemStorage[] = _("ITEM-LAGER");

const u8 gPCText_Mailbox[] = _("BRIEFBOX");
const u8 PCText_DepositItem[] = _("ITEM ABLEGEN");
const u8 PCText_WithdrawItem[] = _("ITEM NEHMEN");
const u8 PCText_TossItem[] = _("ITEM IN MÜLL");
const u8 PCText_StoreItems[] = _("Lagere Items auf deinem PC.");
const u8 PCText_TakeOutItems[] = _("Nimm Items von deinem PC.");
const u8 PCText_ThrowAwayItems[] = _("Wirf gelagerte Items weg.");

const u8 gOtherText_NoItems[] = _("Es gibt keine Items.{PAUSE_UNTIL_PRESS}");
const u8 gOtherText_NoMoreRoom[] = _("In deinem BEUTEL\nist kein Platz mehr.");
const u8 gOtherText_HowManyToWithdraw[] = _("Wie viele möchtest\ndu aufnehmen?");
const u8 gOtherText_WithdrewThing[] = _("{STR_VAR_2} × {STR_VAR_1}\naufgenommen.");
const u8 OtherText_Read[] = _("LESEN");
const u8 gOtherText_MoveToBag[] = _("IN BEUTEL GEBEN");
const u8 OtherText_Give[] = _("GEBEN");
const u8 gOtherText_NoMailHere[] = _("Hier ist kein BRIEF.{PAUSE_UNTIL_PRESS}");
const u8 gOtherText_WhatWillYouDoMail[] = _("Was soll mit dem BRIEF von\n{STR_VAR_1} geschehen?");
const u8 gOtherText_MessageWillBeLost[] = _("Der Inhalt geht verloren.\nIst das in Ordnung für dich?");
const u8 gOtherText_BagIsFull[] = _("Der BEUTEL ist voll.{PAUSE_UNTIL_PRESS}");
const u8 gOtherText_MailWasReturned[] = _("Der BRIEF, dessen Inhalt gelöscht\nist, wurde im BEUTEL gelagert.{PAUSE_UNTIL_PRESS}");
const u8 gOtherText_Dad[] = _("VATI");
const u8 gOtherText_Mom[] = _("MUTTI");
const u8 gOtherText_Wallace[] = _("WASSILI");
const u8 gOtherText_Steven[] = _("TROY");
const u8 gOtherText_Brawly[] = _("KAMILLO");
const u8 gOtherText_Winona[] = _("WIBKE");
const u8 gOtherText_Phoebe[] = _("ANTONIA");
const u8 gOtherText_Glacia[] = _("FROSINA");
const u8 gContestText_ContestWinner[] = _("-WETTBEWERBSSIEGER\n");
const u8 gOtherText_Unknown1[] = _(" von ");
const u8 OtherText_Cool[] = _("COOL.");
const u8 OtherText_Beauty2[] = _("SCHÖN.");
const u8 OtherText_Cute[] = _("ANMUT");
const u8 OtherText_Smart[] = _("KLUG.");
const u8 OtherText_Tough[] = _("STÄRKE");
const u8 OtherText_NonstopSuperCool[] = _("Super-mega-cool ist\ndieses umwerfende ");
const u8 OtherText_Terminator6[] = _("");
const u8 OtherText_GoodLookingPoke[] = _("Das anbetungswürdige\nPOKéMON: ");
const u8 OtherText_Terminator7[] = _("");
const u8 OtherText_MarvelousGreat[] = _("Phantastisch, großartig -\nschlicht brillant: ");
const u8 OtherText_Terminator8[] = _("");
const u8 OtherText_CenturyLastVenus[] = _("Ein Bild von einem POKéMON!\nDas wunderschöne ");
const u8 OtherText_Terminator9[] = _("");
const u8 OtherText_Terminator10[] = _("Einfach umwerfend, das strahlende\nLächeln von ");
const u8 OtherText_DazzlingSmile[] = _("");
const u8 OtherText_PokeCenterIdol[] = _("Superstar des POKéMON-CENTERs -\ndas unvergleichliche ");
const u8 OtherText_Terminator11[] = _("");
const u8 OtherText_LovelyAndSweet[] = _("Das liebliche, zuckersüße ");
const u8 OtherText_Terminator12[] = _("");
const u8 OtherText_ThePretty[] = _("Das Gewinner-Portrait\nvon dem hübschen ");
const u8 OtherText_WinningPortrait[] = _("");
const u8 OtherText_GiveUsWink[] = _("Winke uns zu, du\ngoldiges ");
const u8 OtherText_Terminator13[] = _("");
const u8 OtherText_SmartnessMaestro[] = _("Der Gelehrte unter den\nPOKéMON! Das weise ");
const u8 OtherText_Terminator14[] = _("");
const u8 OtherText_ChosenPokeAmong[] = _("Das auserwählte und\neinzigartige POKéMON: ");
const u8 OtherText_Terminator15[] = _("");
const u8 OtherText_TheExcellent[] = _("Das grandiose ");
const u8 OtherText_ItsMomentOfElegance[] = _(" -\nder Inbegriff von Eleganz und Stil");
const u8 OtherText_PowerfullyMuscular[] = _("Der energische, kraftstrotzende\nÜberflieger: ");
const u8 OtherText_Terminator16[] = _("");
const u8 OtherText_StrongErEst[] = _("Stark, stärker, am stärksten -\ndas allerstärkste ");
const u8 OtherText_Terminator17[] = _("");
const u8 OtherText_MightyTough[] = _("Das mächtige, prächtige - das\nstärkste POKéMON: ");
const u8 OtherText_Exclamation[] = _("");
const u8 OtherText_Petalburg[] = _("BLÜTENBURG CITY");
const u8 OtherText_Slateport[] = _("GRAPHITPORT CITY");
const u8 OtherText_Littleroot[] = _("WURZELHEIM");
const u8 OtherText_Lilycove[] = _("SEEGRASULB CITY");
const u8 OtherText_Dewford[] = _("FAUSTAUHAVEN");
const u8 OtherText_Enter[] = _("JA");
const u8 OtherText_Info3[] = _("INFO");
const u8 OtherText_WhatsAContest[] = _("Der WETTBEWERB");
const u8 OtherText_TypesOfContest[] = _("WETTBEWERB-Arten");
const u8 OtherText_Ranks[] = _("Klassen");
const u8 OtherText_Judging[] = _("Bewertung");
const u8 OtherText_CoolContest[] = _("COOL.-WETTB.");
const u8 OtherText_BeautyContest[] = _("SCHÖN.-WETTB.");
const u8 OtherText_CuteContest[] = _("ANMUT-WETTB.");
const u8 OtherText_SmartContest[] = _("KLUG.-WETTB.");
const u8 OtherText_ToughContest[] = _("STÄRKE-WETTB.");
const u8 OtherText_Decoration[] = _("DEKORATION");
const u8 OtherText_PackUp[] = _("EINPACKEN");
const u8 OtherText_Count[] = _("ZÄHLEN");
const u8 OtherText_Registry[] = _("GRUNDBUCH");
const u8 OtherText_Information[] = _("INFORMATION");
const u8 OtherText_Mach[] = _("EIL");
const u8 OtherText_Acro[] = _("KUNST");
const u8 OtherText_Poison[] = _("GIF");
const u8 OtherText_Paralysis[] = _("PAR");
const u8 OtherText_Sleep[] = _("SLF");
const u8 OtherText_Burn[] = _("BRT");
const u8 OtherText_Frozen[] = _("GFR");
const u8 OtherText_Quit[] = _("ZURÜCK");
const u8 OtherText_SawIt[] = _("Gesehen");
const u8 OtherText_NotYet[] = _("Noch nicht");
const u8 OtherText_Yes[] = _("JA");
const u8 OtherText_No[] = _("NEIN");
const u8 OtherText_Info2[] = _("INFO");
const u8 OtherText_SingleBattle[] = _("EINZELKAMPF");
const u8 OtherText_DoubleBattle[] = _("DOPPELKAMPF");
const u8 OtherText_MultiBattle[] = _("MULTIKAMPF");
const u8 OtherText_MrBriney[] = _("MR. BRACK");
const u8 OtherText_MakeAChallenge[] = _("Zum Kampf fordern");
const u8 OtherText_ObtainInformation[] = _("Information dazu");
const u8 OtherText_Lv50_2[] = _("Lv. 50");
const u8 OtherText_Lv100_2[] = _("Lv. 100");
const u8 OtherText_Zigzagoon[] = _("ZIGZACHS");
const u8 OtherText_Nincada[] = _("NINCADA");
const u8 OtherText_Poochyena[] = _("FIFFYEN");
const u8 OtherText_Nincada2[] = _("NINCADA");
const u8 OtherText_Lotad[] = _("LOTURZEL");
const u8 OtherText_Roselia[] = _("ROSELIA");
const u8 OtherText_Shroomish[] = _("KNILZ");
const u8 OtherText_Nincada3[] = _("NINCADA");
const u8 OtherText_Surskit[] = _("GEHWEIHER");
const u8 OtherText_Treecko[] = _("GECKARBOR");
const u8 OtherText_Torchic[] = _("FLEMMLI");
const u8 OtherText_Mudkip[] = _("HYDROPI");
const u8 OtherText_Seedot[] = _("SAMURZEL");
const u8 OtherText_Shroomish2[] = _("KNILZ");
const u8 OtherText_Spinda[] = _("PANDIR");
const u8 OtherText_Shroomish3[] = _("KNILZ");
const u8 OtherText_Zigzagoon2[] = _("ZIGZACHS");
const u8 OtherText_Wurmple[] = _("WAUMPEL");
const u8 OtherText_PokeBall[] = _("POKéBALL");
const u8 OtherText_SuperPotion[] = _("SUPERTRANK");
const u8 OtherText_SamePrice[] = _("Zum selben Preis");
const u8 OtherText_Yen135[] = _("¥135");
const u8 OtherText_Yen155[] = _("¥155");
const u8 OtherText_Yen175[] = _("¥175");
const u8 OtherText_CostMore[] = _("Sie kosten mehr.");
const u8 OtherText_CostLess[] = _("Sie kosten weniger.");
const u8 OtherText_SamePrice2[] = _("Gleicher Preis");
const u8 OtherText_MaleSymbol[] = _("♂");
const u8 OtherText_FemaleSymbol[] = _("♀");
const u8 OtherText_Neither[] = _("Weder noch");
const u8 OtherText_Males[] = _("Männer");
const u8 OtherText_Females[] = _("Frauen");
const u8 OtherText_SameNumber[] = _("Gleich viele");
const u8 OtherText_Male[] = _("Männlich");
const u8 OtherText_Female[] = _("Weiblich");
const u8 OtherText_ItDepends[] = _("Ansichtssache");
const u8 OtherText_Six2[] = _("6");
const u8 OtherText_Eight2[] = _("8");
const u8 OtherText_Ten[] = _("10");
const u8 OtherText_One[] = _("1");
const u8 OtherText_Two[] = _("2");
const u8 OtherText_Three[] = _("3");
const u8 OtherText_Six[] = _("6");
const u8 OtherText_Seven[] = _("7");
const u8 OtherText_Eight[] = _("8");
const u8 OtherText_FreshWater[] = _("TAFELWASSER{CLEAR_TO 72}¥200");
const u8 OtherText_SodaPop[] = _("SPRUDEL{CLEAR_TO 72}¥300");
const u8 OtherText_Lemonade[] = _("LIMONADE{CLEAR_TO 72}¥350");
const u8 OtherText_HowToRide[] = _("RAD FAHREN");
const u8 OtherText_HowToTurn[] = _("KURVEN FAHREN");
const u8 OtherText_SandySlopes[] = _("SANDHÜGEL");
const u8 OtherText_Wheelies[] = _("WHEELIES");
const u8 OtherText_BunnyHops[] = _("HOPPELN");
const u8 OtherText_Jumping[] = _("SPRINGEN");
const u8 OtherText_Satisfied[] = _("Zufrieden");
const u8 OtherText_Dissatisfied[] = _("Unzufrieden");
const u8 OtherText_Deepseatooth[] = _("ABYSSZAHN");
const u8 OtherText_Deepseascale[] = _("ABYSSPLATTE");
const u8 OtherText_BlueFlute2[] = _("BLAUE FLÖTE");
const u8 OtherText_YellowFlute2[] = _("GELBE FLÖTE");
const u8 OtherText_RedFlute2[] = _("ROTE FLÖTE");
const u8 OtherText_WhiteFlute2[] = _("WEISSE FLÖTE");
const u8 OtherText_BlackFlute2[] = _("SCHWRZ. FLÖTE");
const u8 OtherText_GlassChair[] = _("GLASSTUHL");
const u8 OtherText_GlassDesk[] = _("GLASTISCH");
const u8 OtherText_TreeckoDoll[] = _("GECKARBOR-PUPPE 1.000 M.");
const u8 OtherText_TorchicDoll[] = _("FLEMMLI-PUPPE 1.000 M.");
const u8 OtherText_MudkipDoll[] = _("HYDROPI-PUPPE 1.000 M.");
const u8 OtherText_50Coins[] = _("  50 MÜNZEN    ¥1.000");
const u8 OtherText_500Coins[] = _("500 MÜNZEN  ¥10.000");
const u8 OtherText_Excellent[] = _("Klasse!");
const u8 OtherText_NotSoHot[] = _("Naja...");
const u8 OtherText_RedShard[] = _("PURPURSTÜCK");
const u8 OtherText_YellowShard[] = _("GELBSTÜCK");
const u8 OtherText_BlueShard[] = _("INDIGOSTÜCK");
const u8 OtherText_GreenShard[] = _("GRÜNSTÜCK");
const u8 OtherText_BattleTower[] = _("DUELLTURM");
const u8 OtherText_Right[] = _("Rechts");
const u8 OtherText_Left[] = _("Links");
const u8 OtherText_TM32[] = _("TM32  1.500 MÜNZEN");
const u8 OtherText_TM29[] = _("TM29  3.500 MÜNZEN");
const u8 OtherText_TM35[] = _("TM35  4.000 MÜNZEN");
const u8 OtherText_TM24[] = _("TM24  4.000 MÜNZEN");
const u8 OtherText_TM13[] = _("TM13  4.000 MÜNZEN");
const u8 OtherText_1F_2[] = _("EG");
const u8 OtherText_2F_2[] = _("1S");
const u8 OtherText_3F_2[] = _("2S");
const u8 OtherText_4F_2[] = _("3S");
const u8 OtherText_5F_2[] = _("4S");
const u8 OtherText_Cool2[] = _("COOL.");
const u8 OtherText_Beauty3[] = _("SCHÖN.");
const u8 OtherText_Cute2[] = _("ANMUT");
const u8 OtherText_Smart2[] = _("KLUG.");
const u8 OtherText_Tough2[] = _("STÄRKE");
const u8 OtherText_Normal[] = _("NORMAL");
const u8 OtherText_Super[] = _("SUPER");
const u8 OtherText_Hyper[] = _("HYPER");
const u8 OtherText_Master[] = _("MASTER");
const u8 OtherText_Cool3[] = _("COOL.");
const u8 OtherText_Beauty4[] = _("SCHÖN.");
const u8 OtherText_Cute3[] = _("ANMUT");
const u8 OtherText_Smart3[] = _("KLUG.");
const u8 OtherText_Tough3[] = _("STÄRKE");
const u8 OtherText_Items[] = _("ITEM");
const u8 OtherText_KeyItems[] = _("BASIS-ITEM");
const u8 OtherText_Balls[] = _("BALL");
const u8 OtherText_TMsHMs[] = _("TM/VM");
const u8 OtherText_Berries[] = _("BEEREN");

const u8 gPCText_SomeonesPC[] = _("JEMANDES PC");
const u8 gPCText_LanettesPC[] = _("LANETTES PC");
const u8 gPCText_PlayersPC[] = _("PC von {PLAYER}");
const u8 gPCText_HallOfFame[] = _("RUHMESHALLE");
const u8 gPCText_LogOff[] = _("AUSLOGGEN");

const u8 gOtherText_99Times[] = _("99-mal +");
const u8 gOtherText_1Minute[] = _("1 Minute +");
const u8 gOtherText_Seconds[] = _(" Sekunden");
const u8 gOtherText_Times[] = _("-mal$.");
const u8 gOtherText_BigGuy[] = _("");
const u8 gOtherText_BigGirl[] = _("");
const u8 gOtherText_Son[] = _("Sohn");
const u8 gOtherText_Daughter[] = _("Tochter");
const u8 OtherText_BlueFlute[] = _("BLAUE FLÖTE");
const u8 OtherText_YellowFlute[] = _("GELBE FLÖTE");
const u8 OtherText_RedFlute[] = _("ROTE FLÖTE");
const u8 OtherText_WhiteFlute[] = _("WEISSE FLÖTE");
const u8 OtherText_BlackFlute[] = _("SCHWRZ. FLÖTE");
const u8 OtherText_PrettyChair[] = _("EDLER STUHL");
const u8 OtherText_PrettyDesk[] = _("EDLER TISCH");
const u8 OtherText_1F[] = _("EG");
const u8 OtherText_2F[] = _("1S");
const u8 OtherText_3F[] = _("2S");
const u8 OtherText_4F[] = _("3S");
const u8 OtherText_5F[] = _("4S");
const u8 OtherText_6F[] = _("5S");
const u8 OtherText_7F[] = _("6S");
const u8 OtherText_8F[] = _("7S");
const u8 OtherText_9F[] = _("8S");
const u8 OtherText_10F[] = _("9S");
const u8 OtherText_11F[] = _("10S");
const u8 OtherText_B1F[] = _("U1S");
const u8 OtherText_B2F[] = _("U2S");
const u8 OtherText_B3F[] = _("U3S");
const u8 OtherText_B4F[] = _("U4S");
const u8 OtherText_Rooftop[] = _("DACH");

const u8 gOtherText_NowOn[] = _("Momentan im");

const u8 gPCText_Cancel[] = _("ZURÜCK");

const u8 PCText_ExitBox[] = _("Die BOX verlassen?");
const u8 PCText_WhatYouDo[] = _("Was möchtest du tun?");
const u8 PCText_PickATheme[] = _("Wähle eine Motivsammlung.");
const u8 PCText_PickAWallpaper[] = _("Wähle ein Hintergrundmotiv.");
const u8 PCText_IsSelected[] = _(" ist ausgewählt.");
const u8 PCText_JumpToWhichBox[] = _("Zu welcher BOX wechseln?");
const u8 PCText_DepositInWhichBox[] = _("In welche BOX ablegen?");
const u8 PCText_WasDeposited[] = _(" wurde abgelegt.");
const u8 PCText_BoxIsFull[] = _("Die BOX ist voll.");
const u8 PCText_ReleasePoke[] = _("Dieses POKéMON freilassen?");
const u8 PCText_WasReleased[] = _("{STR_VAR_1} ist wieder frei.");
const u8 PCText_ByeBye[] = _("Tschüss, !");
const u8 PCText_MarkPoke[] = _("Markiere dein POKéMON.");
const u8 PCText_LastPoke[] = _("Dein letztes POKéMON!");
const u8 PCText_PartyFull[] = _("Dein Team ist voll!");
const u8 PCText_HoldingPoke[] = _("Du hältst ein POKéMON!");
const u8 PCText_WhichOneWillTake[] = _("Welches wählst du aus?");
const u8 PCText_CantReleaseEgg[] = _("Du kannst kein EI freilass.!");
const u8 PCText_ContinueBox[] = _("Die BOX weiter bearbeiten?");
const u8 PCText_CameBack[] = _(" kam zurück!");
const u8 PCText_Worried[] = _("War es in Sorge um dich?");
const u8 PCText_Surprise[] = _("... ... ... ... ...!");
const u8 PCText_PleaseRemoveMail[] = _("BRIEF bitte entfernen.");
const u8 PCText_Cancel2[] = _("ZURÜCK");
const u8 PCText_Deposit[] = _("ABLEGEN");
const u8 PCText_Withdraw[] = _("NEHMEN");
const u8 PCText_Switch[] = _("TAUSCHEN");
const u8 PCText_Move[] = _("BEWEGEN");
const u8 PCText_Place[] = _("ABSETZEN");
const u8 PCText_Summary[] = _("BERICHT");
const u8 PCText_Release[] = _("ENTLASS.");
const u8 PCText_Mark[] = _("MARKIER.");
const u8 PCText_Name[] = _("BENENNEN");
const u8 PCText_Jump[] = _("WECHSELN");
const u8 PCText_Wallpaper[] = _("MOTIV");
const u8 PCText_Scenery1[] = _("LISTE 1");
const u8 PCText_Scenery2[] = _("LISTE 2");
const u8 PCText_Scenery3[] = _("LISTE 3");
const u8 PCText_Etc[] = _("SONSTIGES");
const u8 PCText_Forest[] = _("WALD");
const u8 PCText_City[] = _("MAUER");
const u8 PCText_Desert[] = _("WÜSTE");
const u8 PCText_Savanna[] = _("STEPPE");
const u8 PCText_Crag[] = _("GERÖLL");
const u8 PCText_Volcano[] = _("VULKAN");
const u8 PCText_Snow[] = _("SCHNEE");
const u8 PCText_Cave[] = _("HÖHLE");
const u8 PCText_Beach[] = _("STRAND");
const u8 PCText_Seafloor[] = _("TIEFSEE");
const u8 PCText_River[] = _("FLUSS");
const u8 PCText_Sky[] = _("HIMMEL");
const u8 PCText_Polka[] = _("PUNKTE");
const u8 PCText_PokeCenter[] = _("POKéCENTER");
const u8 PCText_Machine[] = _("MASCHINE");
const u8 PCText_Plain[] = _("WEISS");
const u8 PCText_WhatDoYouWant[] = _("Was willst du tun?");
const u8 PCText_WithdrawPoke[] = _("POKéMON NEHMEN");
const u8 PCText_DepositPoke[] = _("POKéMON ABLEGEN");
const u8 PCText_MovePoke[] = _("POKéMON BEWEGEN");
const u8 PCText_SeeYa[] = _("TSCHÜSSI!");
const u8 PCText_MovePokeToParty[] = _("Nimm POKéMON aus einer\nBOX in dein Team auf.");
const u8 PCText_StorePokeInBox[] = _("Lagere POKéMON aus deinem\nTeam in einer BOX.");
const u8 PCText_OrganizeBoxesParty[] = _("Ordne POKéMON in den BOXEN\nund/oder in deinem Team.");
const u8 PCText_ReturnToPrevMenu[] = _("Zurück zum vorherigen Menü.");

const u8 gPCText_OnlyOne[] = _("Du führst nur ein POKéMON mit dir.");
const u8 gPCText_PartyFull2[] = _("Dein Team ist voll!");
const u8 gPCText_BOX[] = _("BOX ");

// pokenav
const u8 PCText_CheckMap[] = _("{CLEAR 0}Karte der HOENN-Region");
const u8 PCText_CheckPoke[] = _("{CLEAR 0}POKéMON-Daten im Detail");
const u8 PCText_CheckTrainer[] = _("{CLEAR 0}TRAINER-Daten im Detail");
const u8 PCText_CheckRibbons[] = _("{CLEAR 0}Einsicht über BÄNDER");
const u8 PCText_PutAwayNav[] = _("{CLEAR 0}POKéNAV schließen");
const u8 PCText_NoRibbonWin[] = _("{CLEAR 0}Es gibt keine BÄNDER.");
const u8 PCText_NoTrainers[] = _("{CLEAR 0}Keine TRAINER-Daten aufgenommen");
const u8 PCText_CheckParty[] = _("{CLEAR 0}Daten über POKéMON des Teams");
const u8 PCText_CheckPokeAll[] = _("{CLEAR 0}Daten über alle POKéMON");
const u8 PCText_ReturnToNav[] = _("{CLEAR 0}Zurück zum POKéNAV-Menü");
const u8 PCText_FindCool[] = _("{CLEAR 0}Nach coolen POKéMON suchen.");
const u8 PCText_FindBeauty[] = _("{CLEAR 0}Nach schönen POKéMON suchen.");
const u8 PCText_FindCute[] = _("{CLEAR 0}Nach anmutigen POKéMON suchen.");
const u8 PCText_FindSmart[] = _("{CLEAR 0}Nach klugen POKéMON suchen.");
const u8 PCText_FindTough[] = _("{CLEAR 0}Nach starken POKéMON suchen.");
const u8 PCText_ReturnToCondition[] = _("{CLEAR 0}Zurück zum Menüpunkt ZUSTAND");

const u8 gOtherText_NumberRegistered[] = _("Registrierte:");
const u8 gOtherText_NumberBattles[] = _("Kämpfe:");
const u8 gOtherText_Strategy[] = _("{PALETTE 5}TAKTIK:");
const u8 gOtherText_TrainersPokemon[] = _("{PALETTE 5}POKéMON:");
const u8 gOtherText_SelfIntroduction[] = _("{PALETTE 5}MOTTO:");
const u8 gOtherText_Nature2[] = _("NATUR/");
const u8 gOtherText_InParty[] = _("IM TEAM");
const u8 gOtherText_Number[] = _("Nr. ");
const u8 gOtherText_Ribbons[] = _("BÄNDER");
const u8 OtherText_MakeProfilePage1[] = _("Erstelle dein eigenes Profil:");
const u8 OtherText_MakeProfilePage2[] = _("Kombiniere 4 Wörter/Ausdrücke.");
const u8 OtherText_MakeMessagePage1[] = _("Verwende 6 Ausdrücke.");
const u8 OtherText_MakeMessagePage2[] = _("Max. pro Zeile 2-mal 12 Buchstaben");
const u8 OtherText_DescribeFeelingsPage1[] = _("Finde Worte, die deine momentanen");
const u8 OtherText_DescribeFeelingsPage2[] = _("Empfindungen beschreiben.");
const u8 OtherText_WithFourPhrases[] = _("Verwende 4 Ausdrücke und");
const u8 OtherText_CombineNinePhrasesPage1[] = _("Kombiniere 9 Ausdrücke und");
const u8 OtherText_CombineNinePhrasesPage2[] = _("erstelle eine Nachricht.");
const u8 OtherText_ImproveBardSongPage1[] = _("Ändere nur 1 Wort/Ausdruck");
const u8 OtherText_ImproveBardSongPage2[] = _("und verbessere das BARDEN-Lied.");
const u8 OtherText_YourProfile[] = _("Dein Profil");
const u8 OtherText_YourFeelingBattle[] = _("Deine Gefühle zum Kampfbeginn");
const u8 OtherText_SetWinMessage[] = _("Deine Worte im Fall des Sieges");
const u8 OtherText_SetLossMessage[] = _("Deine Worte im Fall der Niederlage");
const u8 OtherText_TheAnswer[] = _("Die Antwort");
const u8 OtherText_MailMessage[] = _("Der Inhalt des BRIEFES");
const u8 OtherText_MailSalutation[] = _("Der Gruß des BRIEFES");
const u8 OtherText_NewSong[] = _("Das neue Lied");
const u8 OtherText_CombineTwoPhrasesPage1[] = _("Kombiniere 2 Ausdrücke und");
const u8 OtherText_CombineTwoPhrasesPage2[] = _("schaffe einen hippen Spruch.");
const u8 OtherText_ConfirmTrendyPage1[] = _("Der hippe Spruch");
const u8 OtherText_ConfirmTrendyPage2[] = _("lautet also so. O.K.?");
const u8 OtherText_HipsterPage1[] = _("Kombiniere 2 Ausdrücke und");
const u8 OtherText_HipsterPage2[] = _("bringe ihr einen guten Spruch bei.");

const u8 gOtherText_TextDeletedConfirmPage1[] = _("Der gesamte verfasste Text wird");
const u8 gOtherText_TextDeletedConfirmPage2[] = _("gelöscht. Einverstanden?");
const u8 gOtherText_QuitEditing[] = _("Das Textverfassen beenden?");
const u8 gOtherText_EditedTextNoSavePage1[] = _("Der Text wird nicht gespeichert.");
const u8 gOtherText_EditedTextNoSavePage2[] = _("Ist das in Ordnung?");
const u8 gOtherText_EnterAPhraseOrWord[] = _("Bitte Wort/Ausdruck eingeben.");
const u8 gOtherText_TextNoDelete[] = _("Gesamter Text ist nicht löschbar.");
const u8 gOtherText_OnlyOnePhrase[] = _("Nur ein Ausdruck ist änderbar.");
const u8 gOtherText_OriginalSongRestored[] = _("Das Lied wird wiederhergestellt.");
const u8 gOtherText_TrendyAlready[] = _("Das ist bereits hip.");
const u8 gOtherText_CombineTwoPhrases[] = _("Kombiniere 2 Wörter/Ausdrücke.");
const u8 gOtherText_QuitGivingInfo[] = _("Keine weiteren Infos liefern?");
const u8 gOtherText_StopGivingMail[] = _("POKéMON keinen BRIEF geben?");
const u8 gOtherText_Profile[] = _("PROFIL");
const u8 gOtherText_AtBattleStart[] = _("Zum Kampfbeginn");
const u8 gOtherText_UponWinningBattle[] = _("Über den Sieg");
const u8 gOtherText_UponLosingBattle[] = _("Über die Niederlage");

// mauville_man?
const u8 gOtherText_TheBardsSong[] = _("Das BARDEN-Lied");
const u8 gOtherText_WhatsHipHappening[] = _("Was ist hip? Was ist top?");
const u8 gOtherText_Interview[] = _("Interview");
const u8 gOtherText_GoodSaying[] = _("Guter Spruch");
const u8 OtherText_SoPretty[] = _(" so hübsch!");
const u8 OtherText_SoDarling[] = _(" so reizend!");
const u8 OtherText_SoRelaxed[] = _(" so lässig!");
const u8 OtherText_SoSunny[] = _(" so überwältigend!");
const u8 OtherText_SoDesirable[] = _(" so erstrebenswert!");
const u8 OtherText_SoExciting[] = _(" so aufregend!");
const u8 OtherText_SoAmusing[] = _(" so amüsant!");
const u8 OtherText_SoMagical[] = _(" so zauberhaft!");

const u8 gOtherText_Is[] = _(" klingt");
const u8 gOtherText_DontYouAgree[] = _("\nFindest du nicht auch?");

const u8 OtherText_WantVacationNicePlace[] = _("Ich will unbedingt verreisen!\nKennst du ein hübsches Reiseziel?");
const u8 OtherText_BoughtCrayonsIsNice[] = _("Ich habe 120 verschiedene Farbstifte\ngekauft! Das ist doch toll, oder?");
const u8 OtherText_IfWeCouldFloat[] = _("Wäre es nicht herrlich, wir könnten auf\neiner Luftblasenwolke davonschweben?");
const u8 OtherText_SandWashesAwayMakeSad[] = _("Eine Botschaft in Sand geschrieben\nwird weggespült. Das ist traurig.");
const u8 OtherText_WhatsBottomSeaLike[] = _("Wie der Meeresgrund wohl ist? Ich\nwürde ihn so gerne einmal erleben!");
const u8 OtherText_SeeSettingSun[] = _("Sehnst du dich beim Anblick der unter-\ngehenden Sonne nach deinem Zuhause?");
const u8 OtherText_LyingInGreenGrass[] = _("Einfach so im grünen Gras liegen...\nOh, das ist so was von angenehm!");
const u8 OtherText_SecretBasesWonderful[] = _("GEHEIMBASEN sind superklasse!\nFindest du das nicht auch aufregend?");

const u8 OtherText_PokeLeague[] = _("POKéMON LIGA");
const u8 OtherText_PokeCenter[] = _("POKéMON-CENTER");

const u8 gOtherText_GetsAPokeBlock[] = _(" erhält einen {POKEBLOCK}?");

const u8 OtherText_Coolness[] = _("Coolness ");
const u8 OtherText_Beauty[] = _("Schönheit ");
const u8 OtherText_Cuteness[] = _("Anmut ");
const u8 OtherText_Smartness[] = _("Klugheit ");
const u8 OtherText_Toughness[] = _("Stärke ");

const u8 gOtherText_WasEnhanced[] = _("wurde erhöht!");
const u8 gOtherText_NothingChanged[] = _("Keine Veränderung eingetreten!");
const u8 gOtherText_WontEat[] = _("Es will nicht mehr essen.");

const u8 gSystemText_SaveFailedBackupCheck[] = _("Speicherfehler\nBackup Memory wird geprüft.\nBitte warten...\n{COLOR RED}“Benötigte Zeit: 1 Minute”");
const u8 gSystemText_BackupDamagedGameContinue[] = _("Backup Memory defekt oder\ninterne Batterie verbraucht!\nSpiel kann fortgesetzt werden.\nWeiteres Speichern nicht möglich.");
const u8 gSystemText_GameplayEnded[] = _("{COLOR RED}“Spiel fortsetzen nicht möglich.\nZurück zum Titelbildschirm...”");
const u8 gSystemText_CheckCompleteSaveAttempt[] = _("Überprüfung beendet.\nNeuer Speicherversuch erfolgt.\nBitte warten...");
const u8 gSystemText_SaveCompletedGameEnd[] = _("Speichern beendet.\n{COLOR RED}“Spiel fortsetzen nicht möglich.\nZurück zum Titelbildschirm.”");
const u8 gSystemText_SaveCompletedPressA[] = _("Speichern beendet.\n{COLOR RED}“Bitte A-Knopf drücken.”");

const u8 gOtherText_Ferry[] = _("FÄHRE");
const u8 gOtherText_SecretBase[] = _("GEHEIMBASIS");
const u8 gOtherText_Hideout[] = _("VERSTECK");

const u8 gSystemText_ResetRTCPrompt[] = _("Echtzeituhr zurücksetzen?\nA: Bestätigen, B: Zurück");
const u8 gSystemText_PresentTime[] = _("Aktuelle Uhrzeit im Spiel");
const u8 gSystemText_PreviousTime[] = _("Vorherige Uhrzeit im Spiel");
const u8 gSystemText_PleaseResetTime[] = _("Bitte die Zeit zurückstellen.");
const u8 gSystemText_ClockResetDataSave[] = _("Die Uhr wurde zurückgestellt. Daten\nwerden gesichert. Bitte warten...");
const u8 gSystemText_SaveCompleted[] = _("Speichern beendet.");
const u8 gSystemText_SaveFailed[] = _("Speichern fehlgeschlagen.");
const u8 gSystemText_NoSaveFileNoTime[] = _("Es existiert kein Speicherstand. Uhr-\nzeit kann nicht eingestellt werden.");
const u8 gSystemText_ClockAdjustmentUsable[] = _("Das spielinterne Zeiteingabe-\nSystem ist jetzt verfügbar.");
const u8 gSystemText_Saving[] = _("SPEICHERVORGANG...\nGERÄT NICHT AUSSCHALTEN!");
#endif
