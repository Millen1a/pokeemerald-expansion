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
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_NewPokemon_Movement_0
# 18 "data/maps/LittlerootTown_NewLab/scripts.pory"
	waitmovement 0
# 19 "data/maps/LittlerootTown_NewLab/scripts.pory"
	applymovement 4, LittlerootTown_NewPokemon_Movement_1
# 20 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewPokemon_Text_1
# 21 "data/maps/LittlerootTown_NewLab/scripts.pory"
	waitmessage
# 22 "data/maps/LittlerootTown_NewLab/scripts.pory"
	applymovement 4, LittlerootTown_NewPokemon_Movement_2
# 23 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setvar VAR_GET_NEWSTARTER, 1
# 24 "data/maps/LittlerootTown_NewLab/scripts.pory"
	releaseall
	return


LittlerootTown_NewLab_Block::
# 28 "data/maps/LittlerootTown_NewLab/scripts.pory"
	lockall
# 29 "data/maps/LittlerootTown_NewLab/scripts.pory"
	applymovement 4, LittlerootTown_NewPokemon_Movement_1
# 30 "data/maps/LittlerootTown_NewLab/scripts.pory"
	message LittlerootTown_NewLab_Block_Text_0
# 31 "data/maps/LittlerootTown_NewLab/scripts.pory"
	waitmessage
# 32 "data/maps/LittlerootTown_NewLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_NewLab_Block_Movement_0
# 33 "data/maps/LittlerootTown_NewLab/scripts.pory"
	waitmovement 0
# 34 "data/maps/LittlerootTown_NewLab/scripts.pory"
	applymovement 4, LittlerootTown_NewPokemon_Movement_2
# 35 "data/maps/LittlerootTown_NewLab/scripts.pory"
	releaseall
	return


LittlerootTown_NewLab_EventScript_Starter1::
# 39 "data/maps/LittlerootTown_NewLab/scripts.pory"
	lockall
# 40 "data/maps/LittlerootTown_NewLab/scripts.pory"
	goto_if_unset FLAG_RECEIVE_STARTER, LittlerootTown_NewLab_EventScript_Starter1_2
# 64 "data/maps/LittlerootTown_NewLab/scripts.pory"
	applymovement 4, LittlerootTown_NewPokemon_Movement_1
# 65 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_Starter1_Text_4
# 66 "data/maps/LittlerootTown_NewLab/scripts.pory"
	closemessage
LittlerootTown_NewLab_EventScript_Starter1_1:
# 68 "data/maps/LittlerootTown_NewLab/scripts.pory"
	releaseall
	return

LittlerootTown_NewLab_EventScript_Starter1_2:
# 41 "data/maps/LittlerootTown_NewLab/scripts.pory"
	showmonpic SPECIES_GOTHITA, 4, 4
# 42 "data/maps/LittlerootTown_NewLab/scripts.pory"
	showmonpic SPECIES_RALTS, 12, 4
# 43 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_Starter1_Text_0
# 45 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_Starter1_Text_1, MSGBOX_YESNO
# 46 "data/maps/LittlerootTown_NewLab/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq LittlerootTown_NewLab_EventScript_Starter1_6
LittlerootTown_NewLab_EventScript_Starter1_5:
# 49 "data/maps/LittlerootTown_NewLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LittlerootTown_NewLab_EventScript_Starter1_9
LittlerootTown_NewLab_EventScript_Starter1_8:
# 60 "data/maps/LittlerootTown_NewLab/scripts.pory"
	hidemonpic
# 61 "data/maps/LittlerootTown_NewLab/scripts.pory"
	hidemonpic
	goto LittlerootTown_NewLab_EventScript_Starter1_1

LittlerootTown_NewLab_EventScript_Starter1_6:
# 47 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_Starter1_Text_2
	goto LittlerootTown_NewLab_EventScript_Starter1_5

LittlerootTown_NewLab_EventScript_Starter1_9:
# 50 "data/maps/LittlerootTown_NewLab/scripts.pory"
	givemon SPECIES_GOTHITA, 5, ITEM_ORAN_BERRY, ITEM_POKE_BALL, NATURE_HARDY, , MON_FEMALE, , , , , , , 31, 31, 31, 31, 31, 31
# 51 "data/maps/LittlerootTown_NewLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 52 "data/maps/LittlerootTown_NewLab/scripts.pory"
	givemon SPECIES_RALTS, 5, ITEM_ORAN_BERRY, ITEM_PREMIER_BALL, NATURE_SERIOUS, , MON_FEMALE, , , , , , , 31, 31, 31, 31, 31, 31
# 53 "data/maps/LittlerootTown_NewLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 54 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setflag FLAG_RECEIVE_STARTERPAIR1
# 55 "data/maps/LittlerootTown_NewLab/scripts.pory"
	removeobject 1
# 56 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setflag FLAG_RECEIVE_STARTER
# 57 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_Starter1_Text_3
# 58 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setvar VAR_GET_NEWSTARTER, 2
	goto LittlerootTown_NewLab_EventScript_Starter1_8


LittlerootTown_NewLab_EventScript_Starter2::
# 72 "data/maps/LittlerootTown_NewLab/scripts.pory"
	lockall
# 73 "data/maps/LittlerootTown_NewLab/scripts.pory"
	goto_if_unset FLAG_RECEIVE_STARTER, LittlerootTown_NewLab_EventScript_Starter2_2
# 97 "data/maps/LittlerootTown_NewLab/scripts.pory"
	applymovement 4, LittlerootTown_NewPokemon_Movement_1
# 98 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_Starter1_Text_4
# 99 "data/maps/LittlerootTown_NewLab/scripts.pory"
	closemessage
LittlerootTown_NewLab_EventScript_Starter2_1:
# 101 "data/maps/LittlerootTown_NewLab/scripts.pory"
	releaseall
	return

LittlerootTown_NewLab_EventScript_Starter2_2:
# 74 "data/maps/LittlerootTown_NewLab/scripts.pory"
	showmonpic SPECIES_TINKATINK, 4, 4
# 75 "data/maps/LittlerootTown_NewLab/scripts.pory"
	showmonpic SPECIES_ROOKIDEE, 12, 4
# 76 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_Starter2_Text_0
# 78 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_Starter1_Text_1, MSGBOX_YESNO
# 79 "data/maps/LittlerootTown_NewLab/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq LittlerootTown_NewLab_EventScript_Starter2_6
LittlerootTown_NewLab_EventScript_Starter2_5:
# 82 "data/maps/LittlerootTown_NewLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LittlerootTown_NewLab_EventScript_Starter2_9
LittlerootTown_NewLab_EventScript_Starter2_8:
# 93 "data/maps/LittlerootTown_NewLab/scripts.pory"
	hidemonpic
# 94 "data/maps/LittlerootTown_NewLab/scripts.pory"
	hidemonpic
	goto LittlerootTown_NewLab_EventScript_Starter2_1

LittlerootTown_NewLab_EventScript_Starter2_6:
# 80 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_Starter1_Text_2
	goto LittlerootTown_NewLab_EventScript_Starter2_5

LittlerootTown_NewLab_EventScript_Starter2_9:
# 83 "data/maps/LittlerootTown_NewLab/scripts.pory"
	givemon SPECIES_TINKATINK, 5, ITEM_ORAN_BERRY, ITEM_POKE_BALL, NATURE_HARDY, , MON_FEMALE, , , , , , , 31, 31, 31, 31, 31, 31
# 84 "data/maps/LittlerootTown_NewLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 85 "data/maps/LittlerootTown_NewLab/scripts.pory"
	givemon SPECIES_ROOKIDEE, 5, ITEM_ORAN_BERRY, ITEM_PREMIER_BALL, NATURE_SERIOUS, , MON_FEMALE, , , , , , , 31, 31, 31, 31, 31, 31
# 86 "data/maps/LittlerootTown_NewLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 87 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setflag FLAG_RECEIVE_STARTERPAIR2
# 88 "data/maps/LittlerootTown_NewLab/scripts.pory"
	removeobject 2
# 89 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setflag FLAG_RECEIVE_STARTER
# 90 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_Starter1_Text_3
# 91 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setvar VAR_GET_NEWSTARTER, 2
	goto LittlerootTown_NewLab_EventScript_Starter2_8


LittlerootTown_NewLab_EventScript_Starter3::
# 105 "data/maps/LittlerootTown_NewLab/scripts.pory"
	lockall
# 106 "data/maps/LittlerootTown_NewLab/scripts.pory"
	goto_if_unset FLAG_RECEIVE_STARTER, LittlerootTown_NewLab_EventScript_Starter3_2
# 130 "data/maps/LittlerootTown_NewLab/scripts.pory"
	applymovement 4, LittlerootTown_NewPokemon_Movement_1
# 131 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_Starter1_Text_4
# 132 "data/maps/LittlerootTown_NewLab/scripts.pory"
	closemessage
LittlerootTown_NewLab_EventScript_Starter3_1:
# 134 "data/maps/LittlerootTown_NewLab/scripts.pory"
	releaseall
	return

LittlerootTown_NewLab_EventScript_Starter3_2:
# 107 "data/maps/LittlerootTown_NewLab/scripts.pory"
	showmonpic SPECIES_EEVEE, 4, 4
# 108 "data/maps/LittlerootTown_NewLab/scripts.pory"
	showmonpic SPECIES_PIKACHU, 12, 4
# 109 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_Starter3_Text_0
# 111 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_Starter1_Text_1, MSGBOX_YESNO
# 112 "data/maps/LittlerootTown_NewLab/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq LittlerootTown_NewLab_EventScript_Starter3_6
LittlerootTown_NewLab_EventScript_Starter3_5:
# 115 "data/maps/LittlerootTown_NewLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LittlerootTown_NewLab_EventScript_Starter3_9
LittlerootTown_NewLab_EventScript_Starter3_8:
# 126 "data/maps/LittlerootTown_NewLab/scripts.pory"
	hidemonpic
# 127 "data/maps/LittlerootTown_NewLab/scripts.pory"
	hidemonpic
	goto LittlerootTown_NewLab_EventScript_Starter3_1

LittlerootTown_NewLab_EventScript_Starter3_6:
# 113 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_Starter1_Text_2
	goto LittlerootTown_NewLab_EventScript_Starter3_5

LittlerootTown_NewLab_EventScript_Starter3_9:
# 116 "data/maps/LittlerootTown_NewLab/scripts.pory"
	givemon SPECIES_EEVEE, 5, ITEM_ORAN_BERRY, ITEM_POKE_BALL, NATURE_HARDY, , MON_FEMALE, , , , , , , 31, 31, 31, 31, 31, 31
# 117 "data/maps/LittlerootTown_NewLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 118 "data/maps/LittlerootTown_NewLab/scripts.pory"
	givemon SPECIES_PIKACHU, 5, ITEM_ORAN_BERRY, ITEM_PREMIER_BALL, NATURE_SERIOUS, , MON_FEMALE, , , , , , , 31, 31, 31, 31, 31, 31
# 119 "data/maps/LittlerootTown_NewLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 120 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setflag FLAG_RECEIVE_STARTERPAIR3
# 121 "data/maps/LittlerootTown_NewLab/scripts.pory"
	removeobject 3
# 122 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setflag FLAG_RECEIVE_STARTER
# 123 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_Starter1_Text_3
# 124 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setvar VAR_GET_NEWSTARTER, 2
	goto LittlerootTown_NewLab_EventScript_Starter3_8


# 17 "data/maps/LittlerootTown_NewLab/scripts.pory"
LittlerootTown_NewPokemon_Movement_0:
# 17 "data/maps/LittlerootTown_NewLab/scripts.pory"
	walk_up
# 17 "data/maps/LittlerootTown_NewLab/scripts.pory"
	walk_up
# 17 "data/maps/LittlerootTown_NewLab/scripts.pory"
	walk_up
# 17 "data/maps/LittlerootTown_NewLab/scripts.pory"
	walk_up
# 17 "data/maps/LittlerootTown_NewLab/scripts.pory"
	walk_up
# 17 "data/maps/LittlerootTown_NewLab/scripts.pory"
	walk_up
	step_end

# 19 "data/maps/LittlerootTown_NewLab/scripts.pory"
LittlerootTown_NewPokemon_Movement_1:
# 19 "data/maps/LittlerootTown_NewLab/scripts.pory"
	face_player
	step_end

# 22 "data/maps/LittlerootTown_NewLab/scripts.pory"
LittlerootTown_NewPokemon_Movement_2:
# 22 "data/maps/LittlerootTown_NewLab/scripts.pory"
	face_original_direction
	step_end

# 32 "data/maps/LittlerootTown_NewLab/scripts.pory"
LittlerootTown_NewLab_Block_Movement_0:
# 32 "data/maps/LittlerootTown_NewLab/scripts.pory"
	walk_up
	step_end

LittlerootTown_NewPokemon_Text_0:
# 14 "data/maps/LittlerootTown_NewLab/scripts.pory"
	.string "Oh, you're here!$"

LittlerootTown_NewPokemon_Text_1:
# 20 "data/maps/LittlerootTown_NewLab/scripts.pory"
	.string "Go ahead and choose your pair.$"

LittlerootTown_NewLab_Block_Text_0:
# 30 "data/maps/LittlerootTown_NewLab/scripts.pory"
	.string "Hey! It's dangerous to go out without\n"
	.string "some Pokemons!$"

LittlerootTown_NewLab_EventScript_Starter1_Text_0:
# 43 "data/maps/LittlerootTown_NewLab/scripts.pory"
	.string "Ralts and Gothita. These two seems\n"
	.string "inseparable when in our care, and none\l"
	.string "of us have the heart to separate them\l"
	.string "now.\p"
	.string "Regardless, if you're looking for\n"
	.string "Pokemon with strong mental prowess,\l"
	.string "these two would serve you well.$"

LittlerootTown_NewLab_EventScript_Starter1_Text_1:
# 45 "data/maps/LittlerootTown_NewLab/scripts.pory"
	.string "Would you like to pick these two?$"

LittlerootTown_NewLab_EventScript_Starter1_Text_2:
# 47 "data/maps/LittlerootTown_NewLab/scripts.pory"
	.string "It's fine, take your time.$"

LittlerootTown_NewLab_EventScript_Starter1_Text_3:
# 57 "data/maps/LittlerootTown_NewLab/scripts.pory"
	.string "Alright. Take care of them.$"

LittlerootTown_NewLab_EventScript_Starter1_Text_4:
# 65 "data/maps/LittlerootTown_NewLab/scripts.pory"
	.string "Don't be greedy now.$"

LittlerootTown_NewLab_EventScript_Starter2_Text_0:
# 76 "data/maps/LittlerootTown_NewLab/scripts.pory"
	.string "Tinkatink and Rookidee. Considering the\n"
	.string "relationship of these specieses in the\l"
	.string "wild, it's surprising how attached these\l"
	.string "two are.\p"
	.string "That's aside, with Corviknight's speed\n"
	.string "and Tinkaton's physical power, they\l"
	.string "would serve you well in battle.$"

LittlerootTown_NewLab_EventScript_Starter3_Text_0:
# 109 "data/maps/LittlerootTown_NewLab/scripts.pory"
	.string "Ah these two. The team's favorite. Very\n"
	.string "well behaved we nearly just want to\l"
	.string "give them permanent residence as our\l"
	.string "mascot!\p"
	.string "Haha, well, that's aside, they will make a\n"
	.string "very versatile team with some serious,\l"
	.string "diligent care.$"
