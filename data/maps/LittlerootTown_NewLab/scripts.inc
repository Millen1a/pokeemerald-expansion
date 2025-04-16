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
	waitmovement 4
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


LittlerootTown_NewLab_Block_Down::
# 39 "data/maps/LittlerootTown_NewLab/scripts.pory"
	lockall
# 40 "data/maps/LittlerootTown_NewLab/scripts.pory"
	applymovement 4, LittlerootTown_NewPokemon_Movement_1
# 41 "data/maps/LittlerootTown_NewLab/scripts.pory"
	message LittlerootTown_NewLab_Block_Down_Text_0
# 42 "data/maps/LittlerootTown_NewLab/scripts.pory"
	waitmessage
# 43 "data/maps/LittlerootTown_NewLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_NewLab_Block_Down_Movement_0
# 44 "data/maps/LittlerootTown_NewLab/scripts.pory"
	waitmovement 0
# 45 "data/maps/LittlerootTown_NewLab/scripts.pory"
	applymovement 4, LittlerootTown_NewLab_Block_Down_Movement_1
# 46 "data/maps/LittlerootTown_NewLab/scripts.pory"
	releaseall
	return


LittlerootTown_NewLab_Block_Left::
# 50 "data/maps/LittlerootTown_NewLab/scripts.pory"
	lockall
# 51 "data/maps/LittlerootTown_NewLab/scripts.pory"
	applymovement 4, LittlerootTown_NewPokemon_Movement_1
# 52 "data/maps/LittlerootTown_NewLab/scripts.pory"
	message LittlerootTown_NewLab_Block_Down_Text_0
# 53 "data/maps/LittlerootTown_NewLab/scripts.pory"
	waitmessage
# 54 "data/maps/LittlerootTown_NewLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_NewLab_Block_Left_Movement_0
# 55 "data/maps/LittlerootTown_NewLab/scripts.pory"
	waitmovement 0
# 56 "data/maps/LittlerootTown_NewLab/scripts.pory"
	applymovement 4, LittlerootTown_NewLab_Block_Down_Movement_1
# 57 "data/maps/LittlerootTown_NewLab/scripts.pory"
	releaseall
	return


LittlerootTown_NewLab_Block_Right::
# 61 "data/maps/LittlerootTown_NewLab/scripts.pory"
	lockall
# 62 "data/maps/LittlerootTown_NewLab/scripts.pory"
	applymovement 4, LittlerootTown_NewPokemon_Movement_1
# 63 "data/maps/LittlerootTown_NewLab/scripts.pory"
	message LittlerootTown_NewLab_Block_Down_Text_0
# 64 "data/maps/LittlerootTown_NewLab/scripts.pory"
	waitmessage
# 65 "data/maps/LittlerootTown_NewLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_NewLab_Block_Right_Movement_0
# 66 "data/maps/LittlerootTown_NewLab/scripts.pory"
	waitmovement 0
# 67 "data/maps/LittlerootTown_NewLab/scripts.pory"
	applymovement 4, LittlerootTown_NewLab_Block_Down_Movement_1
# 68 "data/maps/LittlerootTown_NewLab/scripts.pory"
	releaseall
	return


LittlerootTown_NewLab_EventScript_Starter1::
# 72 "data/maps/LittlerootTown_NewLab/scripts.pory"
	lockall
# 73 "data/maps/LittlerootTown_NewLab/scripts.pory"
	goto_if_unset FLAG_RECEIVE_STARTER, LittlerootTown_NewLab_EventScript_Starter1_2
# 94 "data/maps/LittlerootTown_NewLab/scripts.pory"
	applymovement 4, LittlerootTown_NewPokemon_Movement_1
# 95 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_Starter1_Text_4
# 96 "data/maps/LittlerootTown_NewLab/scripts.pory"
	closemessage
LittlerootTown_NewLab_EventScript_Starter1_1:
# 98 "data/maps/LittlerootTown_NewLab/scripts.pory"
	releaseall
	return

LittlerootTown_NewLab_EventScript_Starter1_2:
# 74 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_Starter1_Text_0
# 76 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_Starter1_Text_1, MSGBOX_YESNO
# 77 "data/maps/LittlerootTown_NewLab/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq LittlerootTown_NewLab_EventScript_Starter1_6
LittlerootTown_NewLab_EventScript_Starter1_5:
# 80 "data/maps/LittlerootTown_NewLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LittlerootTown_NewLab_EventScript_Starter1_8
	goto LittlerootTown_NewLab_EventScript_Starter1_1

LittlerootTown_NewLab_EventScript_Starter1_6:
# 78 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_Starter1_Text_2
	goto LittlerootTown_NewLab_EventScript_Starter1_5

LittlerootTown_NewLab_EventScript_Starter1_8:
# 81 "data/maps/LittlerootTown_NewLab/scripts.pory"
	givemon SPECIES_GOTHITA, 5, ITEM_ORAN_BERRY, ITEM_POKE_BALL, NATURE_HARDY, , MON_FEMALE, , , , , , , 31, 31, 31, 31, 31, 31
# 82 "data/maps/LittlerootTown_NewLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 83 "data/maps/LittlerootTown_NewLab/scripts.pory"
	givemon SPECIES_RALTS, 5, ITEM_ORAN_BERRY, ITEM_PREMIER_BALL, NATURE_SERIOUS, , MON_FEMALE, , , , , , , 31, 31, 31, 31, 31, 31
# 84 "data/maps/LittlerootTown_NewLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 85 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setflag FLAG_RECEIVE_STARTERPAIR1
# 86 "data/maps/LittlerootTown_NewLab/scripts.pory"
	removeobject 1
# 87 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setflag FLAG_RECEIVE_STARTER
# 88 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_Starter1_Text_3
# 89 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setvar VAR_STARTER_MON, 1
# 90 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setvar VAR_ADVENTURE_STATE, 3
	goto LittlerootTown_NewLab_EventScript_Starter1_1


LittlerootTown_NewLab_EventScript_Starter2::
# 102 "data/maps/LittlerootTown_NewLab/scripts.pory"
	lockall
# 103 "data/maps/LittlerootTown_NewLab/scripts.pory"
	goto_if_unset FLAG_RECEIVE_STARTER, LittlerootTown_NewLab_EventScript_Starter2_2
# 128 "data/maps/LittlerootTown_NewLab/scripts.pory"
	applymovement 4, LittlerootTown_NewPokemon_Movement_1
# 129 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_Starter1_Text_4
# 130 "data/maps/LittlerootTown_NewLab/scripts.pory"
	closemessage
LittlerootTown_NewLab_EventScript_Starter2_1:
# 132 "data/maps/LittlerootTown_NewLab/scripts.pory"
	releaseall
	return

LittlerootTown_NewLab_EventScript_Starter2_2:
# 104 "data/maps/LittlerootTown_NewLab/scripts.pory"
	showmonpic SPECIES_TINKATINK, 4, 4
# 105 "data/maps/LittlerootTown_NewLab/scripts.pory"
	showmonpic SPECIES_ROOKIDEE, 12, 4
# 106 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_Starter2_Text_0
# 108 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_Starter1_Text_1, MSGBOX_YESNO
# 109 "data/maps/LittlerootTown_NewLab/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq LittlerootTown_NewLab_EventScript_Starter2_6
LittlerootTown_NewLab_EventScript_Starter2_5:
# 112 "data/maps/LittlerootTown_NewLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LittlerootTown_NewLab_EventScript_Starter2_9
LittlerootTown_NewLab_EventScript_Starter2_8:
# 124 "data/maps/LittlerootTown_NewLab/scripts.pory"
	hidemonpic
# 125 "data/maps/LittlerootTown_NewLab/scripts.pory"
	hidemonpic
	goto LittlerootTown_NewLab_EventScript_Starter2_1

LittlerootTown_NewLab_EventScript_Starter2_6:
# 110 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_Starter1_Text_2
	goto LittlerootTown_NewLab_EventScript_Starter2_5

LittlerootTown_NewLab_EventScript_Starter2_9:
# 113 "data/maps/LittlerootTown_NewLab/scripts.pory"
	givemon SPECIES_TINKATINK, 5, ITEM_ORAN_BERRY, ITEM_POKE_BALL, NATURE_HARDY, , MON_FEMALE, , , , , , , 31, 31, 31, 31, 31, 31
# 114 "data/maps/LittlerootTown_NewLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 115 "data/maps/LittlerootTown_NewLab/scripts.pory"
	givemon SPECIES_ROOKIDEE, 5, ITEM_ORAN_BERRY, ITEM_PREMIER_BALL, NATURE_SERIOUS, , MON_FEMALE, , , , , , , 31, 31, 31, 31, 31, 31
# 116 "data/maps/LittlerootTown_NewLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 117 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setflag FLAG_RECEIVE_STARTERPAIR2
# 118 "data/maps/LittlerootTown_NewLab/scripts.pory"
	removeobject 2
# 119 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setflag FLAG_RECEIVE_STARTER
# 120 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_Starter1_Text_3
# 121 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setvar VAR_STARTER_MON, 2
# 122 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setvar VAR_ADVENTURE_STATE, 3
	goto LittlerootTown_NewLab_EventScript_Starter2_8


LittlerootTown_NewLab_EventScript_Starter3::
# 136 "data/maps/LittlerootTown_NewLab/scripts.pory"
	lockall
# 137 "data/maps/LittlerootTown_NewLab/scripts.pory"
	goto_if_unset FLAG_RECEIVE_STARTER, LittlerootTown_NewLab_EventScript_Starter3_2
# 162 "data/maps/LittlerootTown_NewLab/scripts.pory"
	applymovement 4, LittlerootTown_NewPokemon_Movement_1
# 163 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_Starter1_Text_4
# 164 "data/maps/LittlerootTown_NewLab/scripts.pory"
	closemessage
LittlerootTown_NewLab_EventScript_Starter3_1:
# 166 "data/maps/LittlerootTown_NewLab/scripts.pory"
	releaseall
	return

LittlerootTown_NewLab_EventScript_Starter3_2:
# 138 "data/maps/LittlerootTown_NewLab/scripts.pory"
	showmonpic SPECIES_EEVEE, 4, 4
# 139 "data/maps/LittlerootTown_NewLab/scripts.pory"
	showmonpic SPECIES_PIKACHU, 12, 4
# 140 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_Starter3_Text_0
# 142 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_Starter1_Text_1, MSGBOX_YESNO
# 143 "data/maps/LittlerootTown_NewLab/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq LittlerootTown_NewLab_EventScript_Starter3_6
LittlerootTown_NewLab_EventScript_Starter3_5:
# 146 "data/maps/LittlerootTown_NewLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LittlerootTown_NewLab_EventScript_Starter3_9
LittlerootTown_NewLab_EventScript_Starter3_8:
# 158 "data/maps/LittlerootTown_NewLab/scripts.pory"
	hidemonpic
# 159 "data/maps/LittlerootTown_NewLab/scripts.pory"
	hidemonpic
	goto LittlerootTown_NewLab_EventScript_Starter3_1

LittlerootTown_NewLab_EventScript_Starter3_6:
# 144 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_Starter1_Text_2
	goto LittlerootTown_NewLab_EventScript_Starter3_5

LittlerootTown_NewLab_EventScript_Starter3_9:
# 147 "data/maps/LittlerootTown_NewLab/scripts.pory"
	givemon SPECIES_EEVEE, 5, ITEM_ORAN_BERRY, ITEM_POKE_BALL, NATURE_HARDY, , MON_FEMALE, , , , , , , 31, 31, 31, 31, 31, 31
# 148 "data/maps/LittlerootTown_NewLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 149 "data/maps/LittlerootTown_NewLab/scripts.pory"
	givemon SPECIES_PIKACHU, 5, ITEM_ORAN_BERRY, ITEM_PREMIER_BALL, NATURE_SERIOUS, , MON_FEMALE, , , , , , , 31, 31, 31, 31, 31, 31
# 150 "data/maps/LittlerootTown_NewLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 151 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setflag FLAG_RECEIVE_STARTERPAIR3
# 152 "data/maps/LittlerootTown_NewLab/scripts.pory"
	removeobject 3
# 153 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setflag FLAG_RECEIVE_STARTER
# 154 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_Starter1_Text_3
# 155 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setvar VAR_STARTER_MON, 3
# 156 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setvar VAR_ADVENTURE_STATE, 3
	goto LittlerootTown_NewLab_EventScript_Starter3_8


LittlerootTown_NewLab_PokeDexNavGetAsk::
# 170 "data/maps/LittlerootTown_NewLab/scripts.pory"
	goto_if_unset FLAG_SYS_POKEDEX_GET, LittlerootTown_NewLab_PokeDexNavGetAsk_2
	return

LittlerootTown_NewLab_PokeDexNavGetAsk_1:
	return

LittlerootTown_NewLab_PokeDexNavGetAsk_2:
# 170 "data/maps/LittlerootTown_NewLab/scripts.pory"
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
LittlerootTown_NewLab_Block_Down_Movement_0:
# 43 "data/maps/LittlerootTown_NewLab/scripts.pory"
	walk_up
	step_end

# 45 "data/maps/LittlerootTown_NewLab/scripts.pory"
LittlerootTown_NewLab_Block_Down_Movement_1:
# 45 "data/maps/LittlerootTown_NewLab/scripts.pory"
	face_original_direction
	step_end

# 54 "data/maps/LittlerootTown_NewLab/scripts.pory"
LittlerootTown_NewLab_Block_Left_Movement_0:
# 54 "data/maps/LittlerootTown_NewLab/scripts.pory"
	walk_right
	step_end

# 65 "data/maps/LittlerootTown_NewLab/scripts.pory"
LittlerootTown_NewLab_Block_Right_Movement_0:
# 65 "data/maps/LittlerootTown_NewLab/scripts.pory"
	walk_left
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

LittlerootTown_NewLab_Block_Down_Text_0:
# 41 "data/maps/LittlerootTown_NewLab/scripts.pory"
	.string "Hey! It's dangerous to go out without\n"
	.string "some Pokemons!$"

LittlerootTown_NewLab_EventScript_Starter1_Text_0:
# 74 "data/maps/LittlerootTown_NewLab/scripts.pory"
	.string "Ralts and Gothita. These two seems\n"
	.string "inseparable when in our care.\p"
	.string "If you're looking for Pokemons with\n"
	.string "strong mental prowess, these two would\l"
	.string "serve you well.$"

LittlerootTown_NewLab_EventScript_Starter1_Text_1:
# 76 "data/maps/LittlerootTown_NewLab/scripts.pory"
	.string "Would you like to pick these two?$"

LittlerootTown_NewLab_EventScript_Starter1_Text_2:
# 78 "data/maps/LittlerootTown_NewLab/scripts.pory"
	.string "It's fine, take your time.$"

LittlerootTown_NewLab_EventScript_Starter1_Text_3:
# 88 "data/maps/LittlerootTown_NewLab/scripts.pory"
	.string "Alright. Take care of them.$"

LittlerootTown_NewLab_EventScript_Starter1_Text_4:
# 95 "data/maps/LittlerootTown_NewLab/scripts.pory"
	.string "Don't be greedy now.$"

LittlerootTown_NewLab_EventScript_Starter2_Text_0:
# 106 "data/maps/LittlerootTown_NewLab/scripts.pory"
	.string "Tinkatink and Rookidee. It's surprising\n"
	.string "how attached these two are.\p"
	.string "With Corviknight's speed and Tinkaton's\n"
	.string "physical power, they would serve you\l"
	.string "well against tough foes.$"

LittlerootTown_NewLab_EventScript_Starter3_Text_0:
# 140 "data/maps/LittlerootTown_NewLab/scripts.pory"
	.string "The team's favorite. Very well behaved!\p"
	.string "They will make a very versatile team\n"
	.string "with some serious, diligent care.$"
