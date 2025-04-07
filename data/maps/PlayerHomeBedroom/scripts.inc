PlayerHomeBedroom_MapScripts::
	.byte 0


PlayerHomeBedroom_Blocker::
# 4 "data/maps/PlayerHomeBedroom/scripts.pory"
	lockall
# 5 "data/maps/PlayerHomeBedroom/scripts.pory"
	msgbox PlayerHomeBedroom_Blocker_Text_0
# 6 "data/maps/PlayerHomeBedroom/scripts.pory"
	waitmessage
# 7 "data/maps/PlayerHomeBedroom/scripts.pory"
	closemessage
# 8 "data/maps/PlayerHomeBedroom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerHomeBedroom_Blocker_Movement_0
# 9 "data/maps/PlayerHomeBedroom/scripts.pory"
	waitmovement 0
# 10 "data/maps/PlayerHomeBedroom/scripts.pory"
	releaseall
	return


PlayerHomeBedroom_EventScript_Wallclock::
# 14 "data/maps/PlayerHomeBedroom/scripts.pory"
	goto_if_unset FLAG_SET_WALL_CLOCK, PlayerHomeBedroom_EventScript_Wallclock_2
# 26 "data/maps/PlayerHomeBedroom/scripts.pory"
	lockall
# 27 "data/maps/PlayerHomeBedroom/scripts.pory"
	call PlayerHomeBedroom_CheckWallClock
# 28 "data/maps/PlayerHomeBedroom/scripts.pory"
	delay 20
PlayerHomeBedroom_EventScript_Wallclock_1:
# 30 "data/maps/PlayerHomeBedroom/scripts.pory"
	releaseall
	return

PlayerHomeBedroom_EventScript_Wallclock_2:
# 15 "data/maps/PlayerHomeBedroom/scripts.pory"
	lockall
# 16 "data/maps/PlayerHomeBedroom/scripts.pory"
	msgbox PlayerHomeBedroom_EventScript_Wallclock_Text_0
# 18 "data/maps/PlayerHomeBedroom/scripts.pory"
	call PlayerHomeBedroom_SetWallClock
# 19 "data/maps/PlayerHomeBedroom/scripts.pory"
	delay 20
# 20 "data/maps/PlayerHomeBedroom/scripts.pory"
	setflag FLAG_SET_WALL_CLOCK
# 21 "data/maps/PlayerHomeBedroom/scripts.pory"
	setvar VAR_ADVENTURE_STATE, 1
# 22 "data/maps/PlayerHomeBedroom/scripts.pory"
	call PlayerHomeBedroom_ClockNote
	goto PlayerHomeBedroom_EventScript_Wallclock_1


PlayerHomeBedroom_SetWallClock::
# 34 "data/maps/PlayerHomeBedroom/scripts.pory"
	fadescreen FADE_TO_BLACK
# 35 "data/maps/PlayerHomeBedroom/scripts.pory"
	special StartWallClock
# 36 "data/maps/PlayerHomeBedroom/scripts.pory"
	waitstate
	return


PlayerHomeBedroom_CheckWallClock::
# 41 "data/maps/PlayerHomeBedroom/scripts.pory"
	incrementgamestat GAME_STAT_CHECKED_CLOCK
# 42 "data/maps/PlayerHomeBedroom/scripts.pory"
	fadescreen FADE_TO_BLACK
# 43 "data/maps/PlayerHomeBedroom/scripts.pory"
	special Special_ViewWallClock
# 44 "data/maps/PlayerHomeBedroom/scripts.pory"
	waitstate
# 45 "data/maps/PlayerHomeBedroom/scripts.pory"
	releaseall
	end


PlayerHomeBedroom_ClockNote::
# 50 "data/maps/PlayerHomeBedroom/scripts.pory"
	msgbox PlayerHomeBedroom_ClockNote_Text_0
# 51 "data/maps/PlayerHomeBedroom/scripts.pory"
	waitmessage
# 52 "data/maps/PlayerHomeBedroom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerHomeBedroom_ClockNote_Movement_0
# 53 "data/maps/PlayerHomeBedroom/scripts.pory"
	msgbox PlayerHomeBedroom_ClockNote_Text_1
# 54 "data/maps/PlayerHomeBedroom/scripts.pory"
	waitmessage
# 55 "data/maps/PlayerHomeBedroom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerHomeBedroom_ClockNote_Movement_1
# 56 "data/maps/PlayerHomeBedroom/scripts.pory"
	msgbox PlayerHomeBedroom_ClockNote_Text_2
# 57 "data/maps/PlayerHomeBedroom/scripts.pory"
	closemessage
	return


PlayerHomeBedroom_ResearchNote::
# 61 "data/maps/PlayerHomeBedroom/scripts.pory"
	lockall
# 62 "data/maps/PlayerHomeBedroom/scripts.pory"
	msgbox PlayerHomeBedroom_ResearchNote_Text_0
# 64 "data/maps/PlayerHomeBedroom/scripts.pory"
	releaseall
	return


PlayerHomeBedroom_PC::
# 68 "data/maps/PlayerHomeBedroom/scripts.pory"
	lockall
# 69 "data/maps/PlayerHomeBedroom/scripts.pory"
	msgbox PlayerHomeBedroom_PC_Text_0
# 70 "data/maps/PlayerHomeBedroom/scripts.pory"
	releaseall
	return


# 8 "data/maps/PlayerHomeBedroom/scripts.pory"
PlayerHomeBedroom_Blocker_Movement_0:
# 8 "data/maps/PlayerHomeBedroom/scripts.pory"
	walk_right
# 8 "data/maps/PlayerHomeBedroom/scripts.pory"
	walk_right
	step_end

# 52 "data/maps/PlayerHomeBedroom/scripts.pory"
PlayerHomeBedroom_ClockNote_Movement_0:
# 52 "data/maps/PlayerHomeBedroom/scripts.pory"
	emote_exclamation_mark
	step_end

# 55 "data/maps/PlayerHomeBedroom/scripts.pory"
PlayerHomeBedroom_ClockNote_Movement_1:
# 55 "data/maps/PlayerHomeBedroom/scripts.pory"
	face_left
	step_end

PlayerHomeBedroom_Blocker_Text_0:
# 5 "data/maps/PlayerHomeBedroom/scripts.pory"
	.string "Wait.\n"
	.string "I wonder what time it is.$"

PlayerHomeBedroom_EventScript_Wallclock_Text_0:
# 16 "data/maps/PlayerHomeBedroom/scripts.pory"
	.string "Oh! It seems the clock is off.\p"
	.string "Better fix it before I set off.$"

PlayerHomeBedroom_ClockNote_Text_0:
# 50 "data/maps/PlayerHomeBedroom/scripts.pory"
	.string "Hm? What's this note on the wall?$"

PlayerHomeBedroom_ClockNote_Text_1:
# 53 "data/maps/PlayerHomeBedroom/scripts.pory"
	.string "Oh right! It's a reminder to go to the\n"
	.string "Professor!$"

PlayerHomeBedroom_ClockNote_Text_2:
# 56 "data/maps/PlayerHomeBedroom/scripts.pory"
	.string "I better get going then.$"

PlayerHomeBedroom_ResearchNote_Text_0:
# 62 "data/maps/PlayerHomeBedroom/scripts.pory"
	.string "My research note. It's full of notes\n"
	.string "about this region's Pokemon and nature.\p"
	.string "Glad the Professor let me intern under\n"
	.string "him nowadays.$"

PlayerHomeBedroom_PC_Text_0:
# 69 "data/maps/PlayerHomeBedroom/scripts.pory"
	.string "My PC. Unfortunately it's currently\n"
	.string "broken...$"
