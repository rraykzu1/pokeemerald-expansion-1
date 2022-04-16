OldaleGrove_MapScripts::
	.byte 0

OldaleGrove_EventScript_Fisherman::
    lock
	faceplayer
	msgbox OldaleGrove_Text_Fisherman, MSGBOX_DEFAULT
	release
	end

OldaleGrove_Text_Fisherman::
     .string "Man, I'm Tired Of Fishing.$"