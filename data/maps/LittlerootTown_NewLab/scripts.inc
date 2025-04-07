LittlerootTown_NewLab_MapScripts::
# 2 "data/maps/LittlerootTown_NewLab/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LittlerootTown_NewLab_OnTransition
# 3 "data/maps/LittlerootTown_NewLab/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LittlerootTown_NewLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

LittlerootTown_NewLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 4 "data/maps/LittlerootTown_NewLab/scripts.pory"
	map_script_2 VAR_ADVENTURE_STATE, 1, LittlerootTown_NewPokemon
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
	applymovement 4, LittlerootTown_NewPokemon_Movement_1
# 19 "data/maps/LittlerootTown_NewLab/scripts.pory"
	waitmovement 0
# 20 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewPokemon_Text_1
# 21 "data/maps/LittlerootTown_NewLab/scripts.pory"
	waitmessage
# 22 "data/maps/LittlerootTown_NewLab/scripts.pory"
	closemessage
# 23 "data/maps/LittlerootTown_NewLab/scripts.pory"
	applymovement 4, LittlerootTown_NewPokemon_Movement_2
# 24 "data/maps/LittlerootTown_NewLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_NewPokemon_Movement_2
# 25 "data/maps/LittlerootTown_NewLab/scripts.pory"
	waitmovement 0
# 26 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewPokemon_Text_2
# 27 "data/maps/LittlerootTown_NewLab/scripts.pory"
	applymovement 4, LittlerootTown_NewPokemon_Movement_1
# 28 "data/maps/LittlerootTown_NewLab/scripts.pory"
	waitmovement 0
# 29 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewPokemon_Text_3
# 30 "data/maps/LittlerootTown_NewLab/scripts.pory"
	waitmessage
# 31 "data/maps/LittlerootTown_NewLab/scripts.pory"
	closemessage
# 32 "data/maps/LittlerootTown_NewLab/scripts.pory"
	applymovement 4, LittlerootTown_NewPokemon_Movement_3
# 33 "data/maps/LittlerootTown_NewLab/scripts.pory"
	waitmovement 0
# 34 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setvar VAR_ADVENTURE_STATE, 2
# 35 "data/maps/LittlerootTown_NewLab/scripts.pory"
	releaseall
	return


LittlerootTown_NewLab_Block::
# 39 "data/maps/LittlerootTown_NewLab/scripts.pory"
	lockall
# 40 "data/maps/LittlerootTown_NewLab/scripts.pory"
	applymovement 4, LittlerootTown_NewPokemon_Movement_1
# 41 "data/maps/LittlerootTown_NewLab/scripts.pory"
	message LittlerootTown_NewLab_Block_Text_0
# 42 "data/maps/LittlerootTown_NewLab/scripts.pory"
	waitmessage
# 43 "data/maps/LittlerootTown_NewLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_NewLab_Block_Movement_0
# 44 "data/maps/LittlerootTown_NewLab/scripts.pory"
	waitmovement 0
# 45 "data/maps/LittlerootTown_NewLab/scripts.pory"
	applymovement 4, LittlerootTown_NewLab_Block_Movement_1
# 46 "data/maps/LittlerootTown_NewLab/scripts.pory"
	releaseall
	return


LittlerootTown_NewLab_EventScript_Starter1::
# 50 "data/maps/LittlerootTown_NewLab/scripts.pory"
	lockall
# 51 "data/maps/LittlerootTown_NewLab/scripts.pory"
	goto_if_unset FLAG_RECEIVE_STARTER, LittlerootTown_NewLab_EventScript_Starter1_2
# 76 "data/maps/LittlerootTown_NewLab/scripts.pory"
	applymovement 4, LittlerootTown_NewPokemon_Movement_1
# 77 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_Starter1_Text_4
# 78 "data/maps/LittlerootTown_NewLab/scripts.pory"
	closemessage
LittlerootTown_NewLab_EventScript_Starter1_1:
# 80 "data/maps/LittlerootTown_NewLab/scripts.pory"
	releaseall
	return

LittlerootTown_NewLab_EventScript_Starter1_2:
# 52 "data/maps/LittlerootTown_NewLab/scripts.pory"
	showmonpic SPECIES_GOTHITA, 4, 4
# 53 "data/maps/LittlerootTown_NewLab/scripts.pory"
	showmonpic SPECIES_RALTS, 12, 4
# 54 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_Starter1_Text_0
# 56 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_Starter1_Text_1, MSGBOX_YESNO
# 57 "data/maps/LittlerootTown_NewLab/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq LittlerootTown_NewLab_EventScript_Starter1_6
LittlerootTown_NewLab_EventScript_Starter1_5:
# 60 "data/maps/LittlerootTown_NewLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LittlerootTown_NewLab_EventScript_Starter1_9
LittlerootTown_NewLab_EventScript_Starter1_8:
# 72 "data/maps/LittlerootTown_NewLab/scripts.pory"
	hidemonpic
# 73 "data/maps/LittlerootTown_NewLab/scripts.pory"
	hidemonpic
	goto LittlerootTown_NewLab_EventScript_Starter1_1

LittlerootTown_NewLab_EventScript_Starter1_6:
# 58 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_Starter1_Text_2
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
	msgbox LittlerootTown_NewLab_EventScript_Starter1_Text_3
# 69 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setvar VAR_STARTER_MON, 1
# 70 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setvar VAR_ADVENTURE_STATE, 3
	goto LittlerootTown_NewLab_EventScript_Starter1_8


LittlerootTown_NewLab_EventScript_Starter2::
# 84 "data/maps/LittlerootTown_NewLab/scripts.pory"
	lockall
# 85 "data/maps/LittlerootTown_NewLab/scripts.pory"
	goto_if_unset FLAG_RECEIVE_STARTER, LittlerootTown_NewLab_EventScript_Starter2_2
# 110 "data/maps/LittlerootTown_NewLab/scripts.pory"
	applymovement 4, LittlerootTown_NewPokemon_Movement_1
# 111 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_Starter1_Text_4
# 112 "data/maps/LittlerootTown_NewLab/scripts.pory"
	closemessage
LittlerootTown_NewLab_EventScript_Starter2_1:
# 114 "data/maps/LittlerootTown_NewLab/scripts.pory"
	releaseall
	return

LittlerootTown_NewLab_EventScript_Starter2_2:
# 86 "data/maps/LittlerootTown_NewLab/scripts.pory"
	showmonpic SPECIES_TINKATINK, 4, 4
# 87 "data/maps/LittlerootTown_NewLab/scripts.pory"
	showmonpic SPECIES_ROOKIDEE, 12, 4
# 88 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_Starter2_Text_0
# 90 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_Starter1_Text_1, MSGBOX_YESNO
# 91 "data/maps/LittlerootTown_NewLab/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq LittlerootTown_NewLab_EventScript_Starter2_6
LittlerootTown_NewLab_EventScript_Starter2_5:
# 94 "data/maps/LittlerootTown_NewLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LittlerootTown_NewLab_EventScript_Starter2_9
LittlerootTown_NewLab_EventScript_Starter2_8:
# 106 "data/maps/LittlerootTown_NewLab/scripts.pory"
	hidemonpic
# 107 "data/maps/LittlerootTown_NewLab/scripts.pory"
	hidemonpic
	goto LittlerootTown_NewLab_EventScript_Starter2_1

LittlerootTown_NewLab_EventScript_Starter2_6:
# 92 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_Starter1_Text_2
	goto LittlerootTown_NewLab_EventScript_Starter2_5

LittlerootTown_NewLab_EventScript_Starter2_9:
# 95 "data/maps/LittlerootTown_NewLab/scripts.pory"
	givemon SPECIES_TINKATINK, 5, ITEM_ORAN_BERRY, ITEM_POKE_BALL, NATURE_HARDY, , MON_FEMALE, , , , , , , 31, 31, 31, 31, 31, 31
# 96 "data/maps/LittlerootTown_NewLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 97 "data/maps/LittlerootTown_NewLab/scripts.pory"
	givemon SPECIES_ROOKIDEE, 5, ITEM_ORAN_BERRY, ITEM_PREMIER_BALL, NATURE_SERIOUS, , MON_FEMALE, , , , , , , 31, 31, 31, 31, 31, 31
# 98 "data/maps/LittlerootTown_NewLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 99 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setflag FLAG_RECEIVE_STARTERPAIR2
# 100 "data/maps/LittlerootTown_NewLab/scripts.pory"
	removeobject 2
# 101 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setflag FLAG_RECEIVE_STARTER
# 102 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_Starter1_Text_3
# 103 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setvar VAR_STARTER_MON, 2
# 104 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setvar VAR_ADVENTURE_STATE, 3
	goto LittlerootTown_NewLab_EventScript_Starter2_8


LittlerootTown_NewLab_EventScript_Starter3::
# 118 "data/maps/LittlerootTown_NewLab/scripts.pory"
	lockall
# 119 "data/maps/LittlerootTown_NewLab/scripts.pory"
	goto_if_unset FLAG_RECEIVE_STARTER, LittlerootTown_NewLab_EventScript_Starter3_2
# 144 "data/maps/LittlerootTown_NewLab/scripts.pory"
	applymovement 4, LittlerootTown_NewPokemon_Movement_1
# 145 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_Starter1_Text_4
# 146 "data/maps/LittlerootTown_NewLab/scripts.pory"
	closemessage
LittlerootTown_NewLab_EventScript_Starter3_1:
# 148 "data/maps/LittlerootTown_NewLab/scripts.pory"
	releaseall
	return

LittlerootTown_NewLab_EventScript_Starter3_2:
# 120 "data/maps/LittlerootTown_NewLab/scripts.pory"
	showmonpic SPECIES_EEVEE, 4, 4
# 121 "data/maps/LittlerootTown_NewLab/scripts.pory"
	showmonpic SPECIES_PIKACHU, 12, 4
# 122 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_Starter3_Text_0
# 124 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_Starter1_Text_1, MSGBOX_YESNO
# 125 "data/maps/LittlerootTown_NewLab/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq LittlerootTown_NewLab_EventScript_Starter3_6
LittlerootTown_NewLab_EventScript_Starter3_5:
# 128 "data/maps/LittlerootTown_NewLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LittlerootTown_NewLab_EventScript_Starter3_9
LittlerootTown_NewLab_EventScript_Starter3_8:
# 140 "data/maps/LittlerootTown_NewLab/scripts.pory"
	hidemonpic
# 141 "data/maps/LittlerootTown_NewLab/scripts.pory"
	hidemonpic
	goto LittlerootTown_NewLab_EventScript_Starter3_1

LittlerootTown_NewLab_EventScript_Starter3_6:
# 126 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_Starter1_Text_2
	goto LittlerootTown_NewLab_EventScript_Starter3_5

LittlerootTown_NewLab_EventScript_Starter3_9:
# 129 "data/maps/LittlerootTown_NewLab/scripts.pory"
	givemon SPECIES_EEVEE, 5, ITEM_ORAN_BERRY, ITEM_POKE_BALL, NATURE_HARDY, , MON_FEMALE, , , , , , , 31, 31, 31, 31, 31, 31
# 130 "data/maps/LittlerootTown_NewLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 131 "data/maps/LittlerootTown_NewLab/scripts.pory"
	givemon SPECIES_PIKACHU, 5, ITEM_ORAN_BERRY, ITEM_PREMIER_BALL, NATURE_SERIOUS, , MON_FEMALE, , , , , , , 31, 31, 31, 31, 31, 31
# 132 "data/maps/LittlerootTown_NewLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 133 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setflag FLAG_RECEIVE_STARTERPAIR3
# 134 "data/maps/LittlerootTown_NewLab/scripts.pory"
	removeobject 3
# 135 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setflag FLAG_RECEIVE_STARTER
# 136 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_Starter1_Text_3
# 137 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setvar VAR_STARTER_MON, 3
# 138 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setvar VAR_ADVENTURE_STATE, 3
	goto LittlerootTown_NewLab_EventScript_Starter3_8


LittlerootTown_NewLab_PokeDexNavGetAsk::
# 152 "data/maps/LittlerootTown_NewLab/scripts.pory"
	goto_if_unset FLAG_SYS_POKEDEX_GET, LittlerootTown_NewLab_PokeDexNavGetAsk_2
	return

LittlerootTown_NewLab_PokeDexNavGetAsk_1:
	return

LittlerootTown_NewLab_PokeDexNavGetAsk_2:
# 152 "data/maps/LittlerootTown_NewLab/scripts.pory"
	goto_if_unset FLAG_SYS_POKENAV_GET, LittlerootTown_NewLab_PokeDexNavGetAsk_1
	return


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
# 17 "data/maps/LittlerootTown_NewLab/scripts.pory"
	walk_left
	step_end

# 18 "data/maps/LittlerootTown_NewLab/scripts.pory"
LittlerootTown_NewPokemon_Movement_1:
# 18 "data/maps/LittlerootTown_NewLab/scripts.pory"
	face_player
	step_end

# 23 "data/maps/LittlerootTown_NewLab/scripts.pory"
LittlerootTown_NewPokemon_Movement_2:
# 23 "data/maps/LittlerootTown_NewLab/scripts.pory"
	walk_right
# 23 "data/maps/LittlerootTown_NewLab/scripts.pory"
	walk_right
# 23 "data/maps/LittlerootTown_NewLab/scripts.pory"
	face_up
	step_end

# 32 "data/maps/LittlerootTown_NewLab/scripts.pory"
LittlerootTown_NewPokemon_Movement_3:
# 32 "data/maps/LittlerootTown_NewLab/scripts.pory"
	walk_left
# 32 "data/maps/LittlerootTown_NewLab/scripts.pory"
	face_original_direction
	step_end

# 43 "data/maps/LittlerootTown_NewLab/scripts.pory"
LittlerootTown_NewLab_Block_Movement_0:
# 43 "data/maps/LittlerootTown_NewLab/scripts.pory"
	walk_up
	step_end

# 45 "data/maps/LittlerootTown_NewLab/scripts.pory"
LittlerootTown_NewLab_Block_Movement_1:
# 45 "data/maps/LittlerootTown_NewLab/scripts.pory"
	face_original_direction
	step_end

LittlerootTown_NewPokemon_Text_0:
# 14 "data/maps/LittlerootTown_NewLab/scripts.pory"
	.string "Oh, you're here! Thanks for coming.$"

LittlerootTown_NewPokemon_Text_1:
# 20 "data/maps/LittlerootTown_NewLab/scripts.pory"
	.string "As you know, you've been interning\n"
	.string "under me for a while, but I think you're\l"
	.string "ready to spread your wings and explore\l"
	.string "the region proper.\p"
	.string "$"

LittlerootTown_NewPokemon_Text_2:
# 26 "data/maps/LittlerootTown_NewLab/scripts.pory"
	.string "So we pick these little ones to help you\n"
	.string "on your journeys.$"

LittlerootTown_NewPokemon_Text_3:
# 29 "data/maps/LittlerootTown_NewLab/scripts.pory"
	.string "Go ahead. Please choose which of these\n"
	.string "two you'd like to bring along.$"

LittlerootTown_NewLab_Block_Text_0:
# 41 "data/maps/LittlerootTown_NewLab/scripts.pory"
	.string "Hey! It's dangerous to go out without\n"
	.string "some Pokemons!$"

LittlerootTown_NewLab_EventScript_Starter1_Text_0:
# 54 "data/maps/LittlerootTown_NewLab/scripts.pory"
	.string "Ralts and Gothita. These two seems\n"
	.string "inseparable when in our care.\p"
	.string "If you're looking for Pokemons with\n"
	.string "strong mental prowess, these two would\l"
	.string "serve you well.$"

LittlerootTown_NewLab_EventScript_Starter1_Text_1:
# 56 "data/maps/LittlerootTown_NewLab/scripts.pory"
	.string "Would you like to pick these two?$"

LittlerootTown_NewLab_EventScript_Starter1_Text_2:
# 58 "data/maps/LittlerootTown_NewLab/scripts.pory"
	.string "It's fine, take your time.$"

LittlerootTown_NewLab_EventScript_Starter1_Text_3:
# 68 "data/maps/LittlerootTown_NewLab/scripts.pory"
	.string "Alright. Take care of them.$"

LittlerootTown_NewLab_EventScript_Starter1_Text_4:
# 77 "data/maps/LittlerootTown_NewLab/scripts.pory"
	.string "Don't be greedy now.$"

LittlerootTown_NewLab_EventScript_Starter2_Text_0:
# 88 "data/maps/LittlerootTown_NewLab/scripts.pory"
	.string "Tinkatink and Rookidee. It's surprising\n"
	.string "how attached these two are.\p"
	.string "With Corviknight's speed and Tinkaton's\n"
	.string "physical power, they would serve you\l"
	.string "well against tough foes.$"

LittlerootTown_NewLab_EventScript_Starter3_Text_0:
# 122 "data/maps/LittlerootTown_NewLab/scripts.pory"
	.string "The team's favorite. Very well behaved!\p"
	.string "They will make a very versatile team\n"
	.string "with some serious, diligent care.$"
