LittlerootTown_NewLab_MapScripts::
# 2 "data/maps/LittlerootTown_NewLab/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LittlerootTown_NewLab_OnTransition
# 3 "data/maps/LittlerootTown_NewLab/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LittlerootTown_NewLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

LittlerootTown_NewLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 4 "data/maps/LittlerootTown_NewLab/scripts.pory"
	map_script_2 VAR_GET_NEWSTARTER, 0, LittlerootTown_NewPokemon
	.2byte 0


LittlerootTown_NewLab_OnTransition::
# 9 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
	return


LittlerootTown_NewPokemon::
# 13 "data/maps/LittlerootTown_NewLab/scripts.pory"
	lockall
# 14 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewPokemon_Text_0
# 15 "data/maps/LittlerootTown_NewLab/scripts.pory"
	waitmessage
# 16 "data/maps/LittlerootTown_NewLab/scripts.pory"
	closemessage
# 17 "data/maps/LittlerootTown_NewLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerWalkToTableNorth
# 18 "data/maps/LittlerootTown_NewLab/scripts.pory"
	waitmovement 0
# 19 "data/maps/LittlerootTown_NewLab/scripts.pory"
	applymovement 4, ProfLookatPlayer
# 20 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewPokemon_Text_1
# 21 "data/maps/LittlerootTown_NewLab/scripts.pory"
	waitmessage
# 22 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setvar VAR_GET_NEWSTARTER, 1
# 23 "data/maps/LittlerootTown_NewLab/scripts.pory"
	releaseall
	return


# 26 "data/maps/LittlerootTown_NewLab/scripts.pory"
ProfLookatPlayer:
# 27 "data/maps/LittlerootTown_NewLab/scripts.pory"
	face_player
	step_end

# 30 "data/maps/LittlerootTown_NewLab/scripts.pory"
PlayerWalkToTableNorth:
# 31 "data/maps/LittlerootTown_NewLab/scripts.pory"
	walk_up
# 31 "data/maps/LittlerootTown_NewLab/scripts.pory"
	walk_up
# 31 "data/maps/LittlerootTown_NewLab/scripts.pory"
	walk_up
# 31 "data/maps/LittlerootTown_NewLab/scripts.pory"
	walk_up
# 31 "data/maps/LittlerootTown_NewLab/scripts.pory"
	walk_up
# 31 "data/maps/LittlerootTown_NewLab/scripts.pory"
	walk_up
	step_end

LittlerootTown_NewLab_Block::
# 35 "data/maps/LittlerootTown_NewLab/scripts.pory"
	lockall
# 36 "data/maps/LittlerootTown_NewLab/scripts.pory"
	applymovement 4, ProfLookatPlayer
# 37 "data/maps/LittlerootTown_NewLab/scripts.pory"
	message LittlerootTown_NewLab_Block_Text_0
# 38 "data/maps/LittlerootTown_NewLab/scripts.pory"
	waitmessage
# 39 "data/maps/LittlerootTown_NewLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NewLab_StopPlayer
# 40 "data/maps/LittlerootTown_NewLab/scripts.pory"
	waitmovement 0
# 41 "data/maps/LittlerootTown_NewLab/scripts.pory"
	releaseall
	return


# 45 "data/maps/LittlerootTown_NewLab/scripts.pory"
NewLab_StopPlayer:
# 46 "data/maps/LittlerootTown_NewLab/scripts.pory"
	walk_up
	step_end

LittlerootTown_NewLab_EventScript_Starter1::
# 50 "data/maps/LittlerootTown_NewLab/scripts.pory"
	lockall
# 51 "data/maps/LittlerootTown_NewLab/scripts.pory"
	goto_if_unset FLAG_RECEIVE_STARTER, LittlerootTown_NewLab_EventScript_Starter1_2
# 75 "data/maps/LittlerootTown_NewLab/scripts.pory"
	applymovement 4, ProfLookatPlayer
# 76 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_Starter1_Text_5
# 77 "data/maps/LittlerootTown_NewLab/scripts.pory"
	closemessage
LittlerootTown_NewLab_EventScript_Starter1_1:
# 79 "data/maps/LittlerootTown_NewLab/scripts.pory"
	releaseall
	return

LittlerootTown_NewLab_EventScript_Starter1_2:
# 52 "data/maps/LittlerootTown_NewLab/scripts.pory"
	showmonpic SPECIES_GOTHITA, 5, 4
# 53 "data/maps/LittlerootTown_NewLab/scripts.pory"
	showmonpic SPECIES_RALTS, 10, 4
# 54 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_Starter1_Text_0
# 55 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_Starter1_Text_1
# 56 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_Starter1_Text_2, MSGBOX_YESNO
# 57 "data/maps/LittlerootTown_NewLab/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq LittlerootTown_NewLab_EventScript_Starter1_6
LittlerootTown_NewLab_EventScript_Starter1_5:
# 60 "data/maps/LittlerootTown_NewLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LittlerootTown_NewLab_EventScript_Starter1_9
LittlerootTown_NewLab_EventScript_Starter1_8:
# 71 "data/maps/LittlerootTown_NewLab/scripts.pory"
	hidemonpic
# 72 "data/maps/LittlerootTown_NewLab/scripts.pory"
	hidemonpic
	goto LittlerootTown_NewLab_EventScript_Starter1_1

LittlerootTown_NewLab_EventScript_Starter1_6:
# 58 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_Starter1_Text_3
	goto LittlerootTown_NewLab_EventScript_Starter1_5

LittlerootTown_NewLab_EventScript_Starter1_9:
# 61 "data/maps/LittlerootTown_NewLab/scripts.pory"
	givemon SPECIES_GOTHITA, 5, ITEM_ORAN_BERRY, ITEM_POKE_BALL, NATURE_HARDY, , MON_FEMALE, , , , , , , 31, 31, 31, 31, 31, 31
# 62 "data/maps/LittlerootTown_NewLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 63 "data/maps/LittlerootTown_NewLab/scripts.pory"
	givemon SPECIES_RALTS, 5, ITEM_ORAN_BERRY, ITEM_PREMIER_BALL, NATURE_SERIOUS, , MON_FEMALE, , , , , , , 31, 31, 31, 31, 31, 31
# 64 "data/maps/LittlerootTown_NewLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 65 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setflag FLAG_RECEIVE_STARTERPAIR1
# 66 "data/maps/LittlerootTown_NewLab/scripts.pory"
	removeobject 1
# 67 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setflag FLAG_RECEIVE_STARTER
# 68 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_Starter1_Text_4
# 69 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setvar VAR_GET_NEWSTARTER, 2
	goto LittlerootTown_NewLab_EventScript_Starter1_8


LittlerootTown_NewLab_EventScript_Starter2::
# 83 "data/maps/LittlerootTown_NewLab/scripts.pory"
	lockall
# 84 "data/maps/LittlerootTown_NewLab/scripts.pory"
	goto_if_unset FLAG_RECEIVE_STARTER, LittlerootTown_NewLab_EventScript_Starter2_2
# 108 "data/maps/LittlerootTown_NewLab/scripts.pory"
	applymovement 4, ProfLookatPlayer
# 109 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_Starter1_Text_5
# 110 "data/maps/LittlerootTown_NewLab/scripts.pory"
	closemessage
LittlerootTown_NewLab_EventScript_Starter2_1:
# 112 "data/maps/LittlerootTown_NewLab/scripts.pory"
	releaseall
	return

LittlerootTown_NewLab_EventScript_Starter2_2:
# 85 "data/maps/LittlerootTown_NewLab/scripts.pory"
	showmonpic SPECIES_TINKATINK, 5, 4
# 86 "data/maps/LittlerootTown_NewLab/scripts.pory"
	showmonpic SPECIES_ROOKIDEE, 10, 4
# 87 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_Starter2_Text_0
# 88 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_Starter2_Text_1
# 89 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_Starter1_Text_2, MSGBOX_YESNO
# 90 "data/maps/LittlerootTown_NewLab/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq LittlerootTown_NewLab_EventScript_Starter2_6
LittlerootTown_NewLab_EventScript_Starter2_5:
# 93 "data/maps/LittlerootTown_NewLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LittlerootTown_NewLab_EventScript_Starter2_9
LittlerootTown_NewLab_EventScript_Starter2_8:
# 104 "data/maps/LittlerootTown_NewLab/scripts.pory"
	hidemonpic
# 105 "data/maps/LittlerootTown_NewLab/scripts.pory"
	hidemonpic
	goto LittlerootTown_NewLab_EventScript_Starter2_1

LittlerootTown_NewLab_EventScript_Starter2_6:
# 91 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_Starter1_Text_3
	goto LittlerootTown_NewLab_EventScript_Starter2_5

LittlerootTown_NewLab_EventScript_Starter2_9:
# 94 "data/maps/LittlerootTown_NewLab/scripts.pory"
	givemon SPECIES_TINKATINK, 5, ITEM_ORAN_BERRY, ITEM_POKE_BALL, NATURE_HARDY, , MON_FEMALE, , , , , , , 31, 31, 31, 31, 31, 31
# 95 "data/maps/LittlerootTown_NewLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 96 "data/maps/LittlerootTown_NewLab/scripts.pory"
	givemon SPECIES_ROOKIDEE, 5, ITEM_ORAN_BERRY, ITEM_PREMIER_BALL, NATURE_SERIOUS, , MON_FEMALE, , , , , , , 31, 31, 31, 31, 31, 31
# 97 "data/maps/LittlerootTown_NewLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 98 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setflag FLAG_RECEIVE_STARTERPAIR2
# 99 "data/maps/LittlerootTown_NewLab/scripts.pory"
	removeobject 2
# 100 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setflag FLAG_RECEIVE_STARTER
# 101 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_Starter1_Text_4
# 102 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setvar VAR_GET_NEWSTARTER, 2
	goto LittlerootTown_NewLab_EventScript_Starter2_8


LittlerootTown_NewLab_EventScript_Starter3::
# 116 "data/maps/LittlerootTown_NewLab/scripts.pory"
	lockall
# 117 "data/maps/LittlerootTown_NewLab/scripts.pory"
	goto_if_unset FLAG_RECEIVE_STARTER, LittlerootTown_NewLab_EventScript_Starter3_2
# 141 "data/maps/LittlerootTown_NewLab/scripts.pory"
	applymovement 4, ProfLookatPlayer
# 142 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_Starter1_Text_5
# 143 "data/maps/LittlerootTown_NewLab/scripts.pory"
	closemessage
LittlerootTown_NewLab_EventScript_Starter3_1:
# 145 "data/maps/LittlerootTown_NewLab/scripts.pory"
	releaseall
	return

LittlerootTown_NewLab_EventScript_Starter3_2:
# 118 "data/maps/LittlerootTown_NewLab/scripts.pory"
	showmonpic SPECIES_EEVEE, 5, 4
# 119 "data/maps/LittlerootTown_NewLab/scripts.pory"
	showmonpic SPECIES_PIKACHU, 10, 4
# 120 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_Starter3_Text_0
# 121 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_Starter3_Text_1
# 122 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_Starter1_Text_2, MSGBOX_YESNO
# 123 "data/maps/LittlerootTown_NewLab/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq LittlerootTown_NewLab_EventScript_Starter3_6
LittlerootTown_NewLab_EventScript_Starter3_5:
# 126 "data/maps/LittlerootTown_NewLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LittlerootTown_NewLab_EventScript_Starter3_9
LittlerootTown_NewLab_EventScript_Starter3_8:
# 137 "data/maps/LittlerootTown_NewLab/scripts.pory"
	hidemonpic
# 138 "data/maps/LittlerootTown_NewLab/scripts.pory"
	hidemonpic
	goto LittlerootTown_NewLab_EventScript_Starter3_1

LittlerootTown_NewLab_EventScript_Starter3_6:
# 124 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_Starter1_Text_3
	goto LittlerootTown_NewLab_EventScript_Starter3_5

LittlerootTown_NewLab_EventScript_Starter3_9:
# 127 "data/maps/LittlerootTown_NewLab/scripts.pory"
	givemon SPECIES_EEVEE, 5, ITEM_ORAN_BERRY, ITEM_POKE_BALL, NATURE_HARDY, , MON_FEMALE, , , , , , , 31, 31, 31, 31, 31, 31
# 128 "data/maps/LittlerootTown_NewLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 129 "data/maps/LittlerootTown_NewLab/scripts.pory"
	givemon SPECIES_PIKACHU, 5, ITEM_ORAN_BERRY, ITEM_PREMIER_BALL, NATURE_SERIOUS, , MON_FEMALE, , , , , , , 31, 31, 31, 31, 31, 31
# 130 "data/maps/LittlerootTown_NewLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 131 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setflag FLAG_RECEIVE_STARTERPAIR3
# 132 "data/maps/LittlerootTown_NewLab/scripts.pory"
	removeobject 3
# 133 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setflag FLAG_RECEIVE_STARTER
# 134 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_Starter1_Text_4
# 135 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setvar VAR_GET_NEWSTARTER, 2
	goto LittlerootTown_NewLab_EventScript_Starter3_8


LittlerootTown_NewPokemon_Text_0:
# 14 "data/maps/LittlerootTown_NewLab/scripts.pory"
	.string "Oh, you're here!$"

LittlerootTown_NewPokemon_Text_1:
# 20 "data/maps/LittlerootTown_NewLab/scripts.pory"
	.string "Go ahead and choose your pair.$"

LittlerootTown_NewLab_Block_Text_0:
# 37 "data/maps/LittlerootTown_NewLab/scripts.pory"
	.string "Hey! It's dangerous to go out without\n"
	.string "some Pokemons!$"

LittlerootTown_NewLab_EventScript_Starter1_Text_0:
# 54 "data/maps/LittlerootTown_NewLab/scripts.pory"
	.string "Ralts and Gothita. These two seems\n"
	.string "inseparable when in our care, and none\l"
	.string "of us have the heart to separate them\l"
	.string "now.$"

LittlerootTown_NewLab_EventScript_Starter1_Text_1:
# 55 "data/maps/LittlerootTown_NewLab/scripts.pory"
	.string "Regardless, if you're looking for\n"
	.string "Pokemon with strong mental prowess,\l"
	.string "these two would serve you well.$"

LittlerootTown_NewLab_EventScript_Starter1_Text_2:
# 56 "data/maps/LittlerootTown_NewLab/scripts.pory"
	.string "Would you like to pick these two?$"

LittlerootTown_NewLab_EventScript_Starter1_Text_3:
# 58 "data/maps/LittlerootTown_NewLab/scripts.pory"
	.string "It's fine, take your time.$"

LittlerootTown_NewLab_EventScript_Starter1_Text_4:
# 68 "data/maps/LittlerootTown_NewLab/scripts.pory"
	.string "Alright. Take care of them.$"

LittlerootTown_NewLab_EventScript_Starter1_Text_5:
# 76 "data/maps/LittlerootTown_NewLab/scripts.pory"
	.string "Don't be greedy now.$"

LittlerootTown_NewLab_EventScript_Starter2_Text_0:
# 87 "data/maps/LittlerootTown_NewLab/scripts.pory"
	.string "Tinkatink and Rookidee. Considering the\n"
	.string "relationship of these specieses in the\l"
	.string "wild, it's surprising how attached these\l"
	.string "two are.$"

LittlerootTown_NewLab_EventScript_Starter2_Text_1:
# 88 "data/maps/LittlerootTown_NewLab/scripts.pory"
	.string "That's aside, with Corviknight's speed\n"
	.string "and Tinkaton's physical power, they\l"
	.string "would serve you well in battle.$"

LittlerootTown_NewLab_EventScript_Starter3_Text_0:
# 120 "data/maps/LittlerootTown_NewLab/scripts.pory"
	.string "Ah these two. The team's favorite. Very\n"
	.string "well behaved we nearly just want to\l"
	.string "give them permanent residence as our\l"
	.string "mascot!$"

LittlerootTown_NewLab_EventScript_Starter3_Text_1:
# 121 "data/maps/LittlerootTown_NewLab/scripts.pory"
	.string "Haha, well, that's aside, they will make a\n"
	.string "very versatile team with some serious,\l"
	.string "diligent care.$"
