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
	applymovement 4, ProfLookatPlayer
# 16 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_NorthEntry_Text_1
# 17 "data/maps/LittlerootTown_NewLab/scripts.pory"
	closemessage
# 18 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setvar VAR_GET_NEWSTARTER, 1
# 19 "data/maps/LittlerootTown_NewLab/scripts.pory"
	releaseall
	return


# 22 "data/maps/LittlerootTown_NewLab/scripts.pory"
ProfLookatPlayer:
# 23 "data/maps/LittlerootTown_NewLab/scripts.pory"
	face_player
	step_end

# 26 "data/maps/LittlerootTown_NewLab/scripts.pory"
PlayerWalkToTableNorth:
# 27 "data/maps/LittlerootTown_NewLab/scripts.pory"
	walk_up
# 28 "data/maps/LittlerootTown_NewLab/scripts.pory"
	walk_up
# 29 "data/maps/LittlerootTown_NewLab/scripts.pory"
	walk_up
# 30 "data/maps/LittlerootTown_NewLab/scripts.pory"
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
	msgbox LittlerootTown_NewLab_Block_Text_0
# 38 "data/maps/LittlerootTown_NewLab/scripts.pory"
	closemessage
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
# 73 "data/maps/LittlerootTown_NewLab/scripts.pory"
	applymovement 4, ProfLookatPlayer
# 74 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_Starter1_Text_3
# 75 "data/maps/LittlerootTown_NewLab/scripts.pory"
	closemessage
LittlerootTown_NewLab_EventScript_Starter1_1:
# 77 "data/maps/LittlerootTown_NewLab/scripts.pory"
	releaseall
	return

LittlerootTown_NewLab_EventScript_Starter1_2:
# 52 "data/maps/LittlerootTown_NewLab/scripts.pory"
	showmonpic SPECIES_GOTHITA, 7, 4
# 53 "data/maps/LittlerootTown_NewLab/scripts.pory"
	showmonpic SPECIES_RALTS, 8, 4
# 54 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_Starter1_Text_0, MSGBOX_YESNO
# 55 "data/maps/LittlerootTown_NewLab/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq LittlerootTown_NewLab_EventScript_Starter1_6
LittlerootTown_NewLab_EventScript_Starter1_5:
# 58 "data/maps/LittlerootTown_NewLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LittlerootTown_NewLab_EventScript_Starter1_9
LittlerootTown_NewLab_EventScript_Starter1_8:
# 68 "data/maps/LittlerootTown_NewLab/scripts.pory"
	hidemonpic
# 69 "data/maps/LittlerootTown_NewLab/scripts.pory"
	hidemonpic
# 70 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setvar VAR_GET_NEWSTARTER, 2
	goto LittlerootTown_NewLab_EventScript_Starter1_1

LittlerootTown_NewLab_EventScript_Starter1_6:
# 56 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_Starter1_Text_1
	goto LittlerootTown_NewLab_EventScript_Starter1_5

LittlerootTown_NewLab_EventScript_Starter1_9:
# 59 "data/maps/LittlerootTown_NewLab/scripts.pory"
	givemon SPECIES_GOTHITA, 5, ITEM_ORAN_BERRY, ITEM_POKE_BALL, NATURE_HARDY, , MON_FEMALE, , , , , , , 31, 31, 31, 31, 31, 31
# 60 "data/maps/LittlerootTown_NewLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 61 "data/maps/LittlerootTown_NewLab/scripts.pory"
	givemon SPECIES_RALTS, 5, ITEM_ORAN_BERRY, ITEM_PREMIER_BALL, NATURE_SERIOUS, , MON_FEMALE, , , , , , , 31, 31, 31, 31, 31, 31
# 62 "data/maps/LittlerootTown_NewLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 63 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setflag FLAG_RECEIVE_STARTERPAIR1
# 64 "data/maps/LittlerootTown_NewLab/scripts.pory"
	removeobject 1
# 65 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setflag FLAG_RECEIVE_STARTER
# 66 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_Starter1_Text_2
	goto LittlerootTown_NewLab_EventScript_Starter1_8


LittlerootTown_NewLab_EventScript_Starter2::
# 81 "data/maps/LittlerootTown_NewLab/scripts.pory"
	lockall
# 82 "data/maps/LittlerootTown_NewLab/scripts.pory"
	goto_if_unset FLAG_RECEIVE_STARTER, LittlerootTown_NewLab_EventScript_Starter2_2
# 104 "data/maps/LittlerootTown_NewLab/scripts.pory"
	applymovement 4, ProfLookatPlayer
# 105 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_Starter1_Text_3
# 106 "data/maps/LittlerootTown_NewLab/scripts.pory"
	closemessage
LittlerootTown_NewLab_EventScript_Starter2_1:
# 108 "data/maps/LittlerootTown_NewLab/scripts.pory"
	releaseall
	return

LittlerootTown_NewLab_EventScript_Starter2_2:
# 83 "data/maps/LittlerootTown_NewLab/scripts.pory"
	showmonpic SPECIES_TINKATINK, 7, 4
# 84 "data/maps/LittlerootTown_NewLab/scripts.pory"
	showmonpic SPECIES_ROOKIDEE, 8, 4
# 85 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_Starter1_Text_0, MSGBOX_YESNO
# 86 "data/maps/LittlerootTown_NewLab/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq LittlerootTown_NewLab_EventScript_Starter2_6
LittlerootTown_NewLab_EventScript_Starter2_5:
# 89 "data/maps/LittlerootTown_NewLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LittlerootTown_NewLab_EventScript_Starter2_9
LittlerootTown_NewLab_EventScript_Starter2_8:
# 99 "data/maps/LittlerootTown_NewLab/scripts.pory"
	hidemonpic
# 100 "data/maps/LittlerootTown_NewLab/scripts.pory"
	hidemonpic
# 101 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setvar VAR_GET_NEWSTARTER, 2
	goto LittlerootTown_NewLab_EventScript_Starter2_1

LittlerootTown_NewLab_EventScript_Starter2_6:
# 87 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_Starter1_Text_1
	goto LittlerootTown_NewLab_EventScript_Starter2_5

LittlerootTown_NewLab_EventScript_Starter2_9:
# 90 "data/maps/LittlerootTown_NewLab/scripts.pory"
	givemon SPECIES_TINKATINK, 5, ITEM_ORAN_BERRY, ITEM_POKE_BALL, NATURE_HARDY, , MON_FEMALE, , , , , , , 31, 31, 31, 31, 31, 31
# 91 "data/maps/LittlerootTown_NewLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 92 "data/maps/LittlerootTown_NewLab/scripts.pory"
	givemon SPECIES_ROOKIDEE, 5, ITEM_ORAN_BERRY, ITEM_PREMIER_BALL, NATURE_SERIOUS, , MON_FEMALE, , , , , , , 31, 31, 31, 31, 31, 31
# 93 "data/maps/LittlerootTown_NewLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 94 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setflag FLAG_RECEIVE_STARTERPAIR2
# 95 "data/maps/LittlerootTown_NewLab/scripts.pory"
	removeobject 2
# 96 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setflag FLAG_RECEIVE_STARTER
# 97 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_Starter1_Text_2
	goto LittlerootTown_NewLab_EventScript_Starter2_8


LittlerootTown_NewLab_EventScript_Starter3::
# 112 "data/maps/LittlerootTown_NewLab/scripts.pory"
	lockall
# 113 "data/maps/LittlerootTown_NewLab/scripts.pory"
	goto_if_unset FLAG_RECEIVE_STARTER, LittlerootTown_NewLab_EventScript_Starter3_2
# 135 "data/maps/LittlerootTown_NewLab/scripts.pory"
	applymovement 4, ProfLookatPlayer
# 136 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_Starter1_Text_3
# 137 "data/maps/LittlerootTown_NewLab/scripts.pory"
	closemessage
LittlerootTown_NewLab_EventScript_Starter3_1:
# 139 "data/maps/LittlerootTown_NewLab/scripts.pory"
	releaseall
	return

LittlerootTown_NewLab_EventScript_Starter3_2:
# 114 "data/maps/LittlerootTown_NewLab/scripts.pory"
	showmonpic SPECIES_EEVEE, 7, 4
# 115 "data/maps/LittlerootTown_NewLab/scripts.pory"
	showmonpic SPECIES_PIKACHU, 8, 4
# 116 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_Starter1_Text_0, MSGBOX_YESNO
# 117 "data/maps/LittlerootTown_NewLab/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq LittlerootTown_NewLab_EventScript_Starter3_6
LittlerootTown_NewLab_EventScript_Starter3_5:
# 120 "data/maps/LittlerootTown_NewLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LittlerootTown_NewLab_EventScript_Starter3_9
LittlerootTown_NewLab_EventScript_Starter3_8:
# 130 "data/maps/LittlerootTown_NewLab/scripts.pory"
	hidemonpic
# 131 "data/maps/LittlerootTown_NewLab/scripts.pory"
	hidemonpic
# 132 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setvar VAR_GET_NEWSTARTER, 2
	goto LittlerootTown_NewLab_EventScript_Starter3_1

LittlerootTown_NewLab_EventScript_Starter3_6:
# 118 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_Starter1_Text_1
	goto LittlerootTown_NewLab_EventScript_Starter3_5

LittlerootTown_NewLab_EventScript_Starter3_9:
# 121 "data/maps/LittlerootTown_NewLab/scripts.pory"
	givemon SPECIES_EEVEE, 5, ITEM_ORAN_BERRY, ITEM_POKE_BALL, NATURE_HARDY, , MON_FEMALE, , , , , , , 31, 31, 31, 31, 31, 31
# 122 "data/maps/LittlerootTown_NewLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 123 "data/maps/LittlerootTown_NewLab/scripts.pory"
	givemon SPECIES_PIKACHU, 5, ITEM_ORAN_BERRY, ITEM_PREMIER_BALL, NATURE_SERIOUS, , MON_FEMALE, , , , , , , 31, 31, 31, 31, 31, 31
# 124 "data/maps/LittlerootTown_NewLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 125 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setflag FLAG_RECEIVE_STARTERPAIR3
# 126 "data/maps/LittlerootTown_NewLab/scripts.pory"
	removeobject 3
# 127 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setflag FLAG_RECEIVE_STARTER
# 128 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_Starter1_Text_2
	goto LittlerootTown_NewLab_EventScript_Starter3_8


LittlerootTown_NewLab_NorthEntry_Text_0:
# 11 "data/maps/LittlerootTown_NewLab/scripts.pory"
	.string "Oh, you're here!$"

LittlerootTown_NewLab_NorthEntry_Text_1:
# 16 "data/maps/LittlerootTown_NewLab/scripts.pory"
	.string "Go ahead and choose your Starter pair.$"

LittlerootTown_NewLab_Block_Text_0:
# 37 "data/maps/LittlerootTown_NewLab/scripts.pory"
	.string "Hey! It's dangerous to go out without a\n"
	.string "Pokemon.$"

LittlerootTown_NewLab_EventScript_Starter1_Text_0:
# 54 "data/maps/LittlerootTown_NewLab/scripts.pory"
	.string "Would you like to pick these two?$"

LittlerootTown_NewLab_EventScript_Starter1_Text_1:
# 56 "data/maps/LittlerootTown_NewLab/scripts.pory"
	.string "It's fine, take your time.$"

LittlerootTown_NewLab_EventScript_Starter1_Text_2:
# 66 "data/maps/LittlerootTown_NewLab/scripts.pory"
	.string "Alright. Take care of them.$"

LittlerootTown_NewLab_EventScript_Starter1_Text_3:
# 74 "data/maps/LittlerootTown_NewLab/scripts.pory"
	.string "Don't be greedy now.$"
