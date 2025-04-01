LittlerootTown_NewLab_MapScripts::
# 2 "data/maps/LittlerootTown_NewLab/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LittlerootTown_NewLab_PokemonGet
	.byte 0


LittlerootTown_NewLab_PokemonGet::
# 6 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
	return


LittlerootTown_NewLab_NorthEntry::
# 10 "data/maps/LittlerootTown_NewLab/scripts.pory"
	lockall
# 11 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_NorthEntry_Text_0
# 12 "data/maps/LittlerootTown_NewLab/scripts.pory"
	closemessage
# 13 "data/maps/LittlerootTown_NewLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerWalkToTableNorth
# 14 "data/maps/LittlerootTown_NewLab/scripts.pory"
	waitmovement 0
# 15 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_NorthEntry_Text_1
# 16 "data/maps/LittlerootTown_NewLab/scripts.pory"
	closemessage
# 17 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setvar VAR_GET_NEWSTARTER, 1
# 18 "data/maps/LittlerootTown_NewLab/scripts.pory"
	releaseall
	return


# 21 "data/maps/LittlerootTown_NewLab/scripts.pory"
PlayerWalkToTableNorth:
# 22 "data/maps/LittlerootTown_NewLab/scripts.pory"
	walk_up
# 23 "data/maps/LittlerootTown_NewLab/scripts.pory"
	walk_up
# 24 "data/maps/LittlerootTown_NewLab/scripts.pory"
	walk_up
# 25 "data/maps/LittlerootTown_NewLab/scripts.pory"
	walk_up
# 26 "data/maps/LittlerootTown_NewLab/scripts.pory"
	walk_up
	step_end

LittlerootTown_NewLab_Block::
# 30 "data/maps/LittlerootTown_NewLab/scripts.pory"
	lockall
# 31 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_Block_Text_0
# 32 "data/maps/LittlerootTown_NewLab/scripts.pory"
	closemessage
# 33 "data/maps/LittlerootTown_NewLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, StopPlayer
# 34 "data/maps/LittlerootTown_NewLab/scripts.pory"
	waitmovement 0
# 35 "data/maps/LittlerootTown_NewLab/scripts.pory"
	releaseall
	return


# 39 "data/maps/LittlerootTown_NewLab/scripts.pory"
StopPlayer:
# 40 "data/maps/LittlerootTown_NewLab/scripts.pory"
	walk_up
	step_end

LittlerootTown_NewLab_EventScript_Starter1::
# 44 "data/maps/LittlerootTown_NewLab/scripts.pory"
	lockall
# 45 "data/maps/LittlerootTown_NewLab/scripts.pory"
	goto_if_unset FLAG_RECEIVE_STARTER, LittlerootTown_NewLab_EventScript_Starter1_2
# 67 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_Starter1_Text_3
LittlerootTown_NewLab_EventScript_Starter1_1:
# 69 "data/maps/LittlerootTown_NewLab/scripts.pory"
	releaseall
	return

LittlerootTown_NewLab_EventScript_Starter1_2:
# 46 "data/maps/LittlerootTown_NewLab/scripts.pory"
	showmonpic SPECIES_GOTHITA, 7, 4
# 47 "data/maps/LittlerootTown_NewLab/scripts.pory"
	showmonpic SPECIES_RALTS, 8, 4
# 48 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_Starter1_Text_0, MSGBOX_YESNO
# 49 "data/maps/LittlerootTown_NewLab/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq LittlerootTown_NewLab_EventScript_Starter1_6
LittlerootTown_NewLab_EventScript_Starter1_5:
# 52 "data/maps/LittlerootTown_NewLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LittlerootTown_NewLab_EventScript_Starter1_9
LittlerootTown_NewLab_EventScript_Starter1_8:
# 62 "data/maps/LittlerootTown_NewLab/scripts.pory"
	hidemonpic
# 63 "data/maps/LittlerootTown_NewLab/scripts.pory"
	hidemonpic
# 64 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setvar VAR_GET_NEWSTARTER, 2
	goto LittlerootTown_NewLab_EventScript_Starter1_1

LittlerootTown_NewLab_EventScript_Starter1_6:
# 50 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_Starter1_Text_1
	goto LittlerootTown_NewLab_EventScript_Starter1_5

LittlerootTown_NewLab_EventScript_Starter1_9:
# 53 "data/maps/LittlerootTown_NewLab/scripts.pory"
	givemon SPECIES_GOTHITA, 5, ITEM_ORAN_BERRY, ITEM_POKE_BALL, NATURE_HARDY, , MON_FEMALE, , , , , , , 31, 31, 31, 31, 31, 31
# 54 "data/maps/LittlerootTown_NewLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 55 "data/maps/LittlerootTown_NewLab/scripts.pory"
	givemon SPECIES_RALTS, 5, ITEM_ORAN_BERRY, ITEM_PREMIER_BALL, NATURE_SERIOUS, , MON_FEMALE, , , , , , , 31, 31, 31, 31, 31, 31
# 56 "data/maps/LittlerootTown_NewLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 57 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setflag FLAG_RECEIVE_STARTERPAIR1
# 58 "data/maps/LittlerootTown_NewLab/scripts.pory"
	removeobject 1
# 59 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setflag FLAG_RECEIVE_STARTER
# 60 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_Starter1_Text_2
	goto LittlerootTown_NewLab_EventScript_Starter1_8


LittlerootTown_NewLab_EventScript_Starter2::
# 73 "data/maps/LittlerootTown_NewLab/scripts.pory"
	lockall
# 74 "data/maps/LittlerootTown_NewLab/scripts.pory"
	goto_if_unset FLAG_RECEIVE_STARTER, LittlerootTown_NewLab_EventScript_Starter2_2
# 96 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_Starter1_Text_3
LittlerootTown_NewLab_EventScript_Starter2_1:
# 98 "data/maps/LittlerootTown_NewLab/scripts.pory"
	releaseall
	return

LittlerootTown_NewLab_EventScript_Starter2_2:
# 75 "data/maps/LittlerootTown_NewLab/scripts.pory"
	showmonpic SPECIES_TINKATINK, 7, 4
# 76 "data/maps/LittlerootTown_NewLab/scripts.pory"
	showmonpic SPECIES_ROOKIDEE, 8, 4
# 77 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_Starter1_Text_0, MSGBOX_YESNO
# 78 "data/maps/LittlerootTown_NewLab/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq LittlerootTown_NewLab_EventScript_Starter2_6
LittlerootTown_NewLab_EventScript_Starter2_5:
# 81 "data/maps/LittlerootTown_NewLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LittlerootTown_NewLab_EventScript_Starter2_9
LittlerootTown_NewLab_EventScript_Starter2_8:
# 91 "data/maps/LittlerootTown_NewLab/scripts.pory"
	hidemonpic
# 92 "data/maps/LittlerootTown_NewLab/scripts.pory"
	hidemonpic
# 93 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setvar VAR_GET_NEWSTARTER, 2
	goto LittlerootTown_NewLab_EventScript_Starter2_1

LittlerootTown_NewLab_EventScript_Starter2_6:
# 79 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_Starter1_Text_1
	goto LittlerootTown_NewLab_EventScript_Starter2_5

LittlerootTown_NewLab_EventScript_Starter2_9:
# 82 "data/maps/LittlerootTown_NewLab/scripts.pory"
	givemon SPECIES_TINKATINK, 5, ITEM_ORAN_BERRY, ITEM_POKE_BALL, NATURE_HARDY, , MON_FEMALE, , , , , , , 31, 31, 31, 31, 31, 31
# 83 "data/maps/LittlerootTown_NewLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 84 "data/maps/LittlerootTown_NewLab/scripts.pory"
	givemon SPECIES_ROOKIDEE, 5, ITEM_ORAN_BERRY, ITEM_PREMIER_BALL, NATURE_SERIOUS, , MON_FEMALE, , , , , , , 31, 31, 31, 31, 31, 31
# 85 "data/maps/LittlerootTown_NewLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 86 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setflag FLAG_RECEIVE_STARTERPAIR2
# 87 "data/maps/LittlerootTown_NewLab/scripts.pory"
	removeobject 2
# 88 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setflag FLAG_RECEIVE_STARTER
# 89 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_Starter1_Text_2
	goto LittlerootTown_NewLab_EventScript_Starter2_8


LittlerootTown_NewLab_EventScript_Starter3::
# 102 "data/maps/LittlerootTown_NewLab/scripts.pory"
	lockall
# 103 "data/maps/LittlerootTown_NewLab/scripts.pory"
	goto_if_unset FLAG_RECEIVE_STARTER, LittlerootTown_NewLab_EventScript_Starter3_2
# 125 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_Starter1_Text_3
LittlerootTown_NewLab_EventScript_Starter3_1:
# 127 "data/maps/LittlerootTown_NewLab/scripts.pory"
	releaseall
	return

LittlerootTown_NewLab_EventScript_Starter3_2:
# 104 "data/maps/LittlerootTown_NewLab/scripts.pory"
	showmonpic SPECIES_EEVEE, 7, 4
# 105 "data/maps/LittlerootTown_NewLab/scripts.pory"
	showmonpic SPECIES_PIKACHU, 8, 4
# 106 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_Starter1_Text_0, MSGBOX_YESNO
# 107 "data/maps/LittlerootTown_NewLab/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq LittlerootTown_NewLab_EventScript_Starter3_6
LittlerootTown_NewLab_EventScript_Starter3_5:
# 110 "data/maps/LittlerootTown_NewLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LittlerootTown_NewLab_EventScript_Starter3_9
LittlerootTown_NewLab_EventScript_Starter3_8:
# 120 "data/maps/LittlerootTown_NewLab/scripts.pory"
	hidemonpic
# 121 "data/maps/LittlerootTown_NewLab/scripts.pory"
	hidemonpic
# 122 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setvar VAR_GET_NEWSTARTER, 2
	goto LittlerootTown_NewLab_EventScript_Starter3_1

LittlerootTown_NewLab_EventScript_Starter3_6:
# 108 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_Starter1_Text_1
	goto LittlerootTown_NewLab_EventScript_Starter3_5

LittlerootTown_NewLab_EventScript_Starter3_9:
# 111 "data/maps/LittlerootTown_NewLab/scripts.pory"
	givemon SPECIES_EEVEE, 5, ITEM_ORAN_BERRY, ITEM_POKE_BALL, NATURE_HARDY, , MON_FEMALE, , , , , , , 31, 31, 31, 31, 31, 31
# 112 "data/maps/LittlerootTown_NewLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 113 "data/maps/LittlerootTown_NewLab/scripts.pory"
	givemon SPECIES_PIKACHU, 5, ITEM_ORAN_BERRY, ITEM_PREMIER_BALL, NATURE_SERIOUS, , MON_FEMALE, , , , , , , 31, 31, 31, 31, 31, 31
# 114 "data/maps/LittlerootTown_NewLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 115 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setflag FLAG_RECEIVE_STARTERPAIR3
# 116 "data/maps/LittlerootTown_NewLab/scripts.pory"
	removeobject 3
# 117 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setflag FLAG_RECEIVE_STARTER
# 118 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_Starter1_Text_2
	goto LittlerootTown_NewLab_EventScript_Starter3_8


LittlerootTown_NewLab_NorthEntry_Text_0:
# 11 "data/maps/LittlerootTown_NewLab/scripts.pory"
	.string "Oh, you're here!$"

LittlerootTown_NewLab_NorthEntry_Text_1:
# 15 "data/maps/LittlerootTown_NewLab/scripts.pory"
	.string "Go ahead and choose your Starter pair.$"

LittlerootTown_NewLab_Block_Text_0:
# 31 "data/maps/LittlerootTown_NewLab/scripts.pory"
	.string "It's dangerous to go out without a\n"
	.string "Pokemon.$"

LittlerootTown_NewLab_EventScript_Starter1_Text_0:
# 48 "data/maps/LittlerootTown_NewLab/scripts.pory"
	.string "Would you like to pick these two?$"

LittlerootTown_NewLab_EventScript_Starter1_Text_1:
# 50 "data/maps/LittlerootTown_NewLab/scripts.pory"
	.string "It's fine, take your time.$"

LittlerootTown_NewLab_EventScript_Starter1_Text_2:
# 60 "data/maps/LittlerootTown_NewLab/scripts.pory"
	.string "Alright. Take care of them.$"

LittlerootTown_NewLab_EventScript_Starter1_Text_3:
# 67 "data/maps/LittlerootTown_NewLab/scripts.pory"
	.string "Don't be greedy now.$"
