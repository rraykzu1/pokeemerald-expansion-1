DewfordGrove_MapScripts::
	.byte 0

DewfordGrove_EventScript_NotChamp::
	lock
	goto_if_set FLAG_IS_CHAMPION, DewfordGrove_EventScript_Champion
	msgbox DewfordGrove_Text_NotChamp, MSGBOX_DEFAULT
	release
	end


DewfordGrove_EventScript_Champion::
	lock
	msgbox DewfordGrove_Text_Champion, MSGBOX_DEFAULT
	fadescreenswapbuffers FADE_TO_BLACK
	removeobject 1
	setflag FLAG_HIDE_GENTLEMEN
	fadescreenswapbuffers FADE_FROM_BLACK
	release
	end


DewfordGrove_Text_NotChamp:
	.string "Hello {PLAYER}! The door behind me is\n"
	.string "where a very powerful pokemon resides,\l"
	.string "You are probably not strong enough to\l"
	.string "beat it.$"

DewfordGrove_Text_Champion:
	.string "Oh? You're the champion now? Congrats!\n"
	.string "Well it seems you may be worthy to try\l"
	.string "and help us with the Pokemon.$"


