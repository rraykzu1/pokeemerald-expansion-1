#include "constants/spreads.h"

const struct TrainerMonSpread gSets[] = {
	// Trash trainers
	[SPREAD_0_IV_EV] =
	{
		.EVs = {},
		.IVs = {},
		.nature = NATURE_HARDY
	},
	
	[SPREAD_15_IV_0_EV] =
	{
		.EVs = {},
		.IVs = {15},
		.nature = NATURE_HARDY
	},
	
	[SPREAD_25_IV_0_EV] =
	{
		.EVs = {},
		.IVs = {25},
		.nature = NATURE_HARDY
	},
	
	[SPREAD_31_IV_0_EV] =
	{
		.EVs = {},
		.IVs = {31},
		.nature = NATURE_HARDY
	},
	
	[SPREAD_31_IV_20_EV] =
	{
		.EVs = {20},
		.IVs = {31},
		.nature = NATURE_HARDY
	},
	
	[SPREAD_31_IV_60_EV] =
	{
		.EVs = {60},
		.IVs = {31},
		.nature = NATURE_HARDY
	},
	
	[SPREAD_31_IV_80_EV] =
	{
		.EVs = {80},
		.IVs = {31},
		.nature = NATURE_HARDY
	},
	// Generic spreads
	[SPREAD_31_IV_ATK_SPEED_JOLLY] =
	{
		.EVs = {
			  0,	// HP
			0,	// Attack
			  0,	// Defense
			0,	// Speed
			  0,	// Special Attack
			  0		// Special Defense	
		},
		.IVs = {31},
		.nature = NATURE_JOLLY
	},
	
	[SPREAD_31_IV_ATK_SPEED_ADAMANT] =
	{
		.EVs = {
			  0,	// HP
			0,	// Attack
			  0,	// Defense
			0,	// Speed
			  0,	// Special Attack
			  0		// Special Defense
		},
		.IVs = {31},
		.nature = NATURE_ADAMANT
	},
	
	[SPREAD_31_IV_HP_ATK_ADAMANT] =
	{
		.EVs = {
			  0,	// HP
			  0,	// Attack
			  0,	// Defense
			  0,	// Speed
			  0,	// Special Attack
			  0		// Special Defense
		},
		.IVs = {31},
		.nature = NATURE_ADAMANT
	},

	[SPREAD_31_IV_HP_ATK_BRAVE] =
	{
		.EVs = {
			  0,	// HP
			  0,	// Attack
			  0,	// Defense
			  0,	// Speed
			  0,	// Special Attack
			  0		// Special Defense
		},
		.IVs = {
			31,		// HP
			31,		// Attack
			31,		// Defense
			 0,		// Speed
			31,		// Special Attack
			31		// Special Defense
		},
		.nature = NATURE_BRAVE
	},
	
	[SPREAD_31_IV_SPATK_SPEED_TIMID] =
	{
		.EVs = {
			  0,	// HP
			  0,	// Attack
			  0,	// Defense
			0,	// Speed
			0,	// Special Attack
			  0		// Special Defense
		},
		.IVs = {
			31,		// HP
			 0,		// Attack
			31,		// Defense
			31,		// Speed
			31,		// Special Attack
			31		// Special Defense
		},
		.nature = NATURE_TIMID
	},
	
	[SPREAD_31_IV_SPATK_SPEED_MODEST] =
	{
		.EVs = {
			  0,	// HP
			  0,	// Attack
			  0,	// Defense
			0,	// Speed
			0,	// Special Attack
			  0		// Special Defense
		},
		.IVs = {
			31,		// HP
			 0,		// Attack
			31,		// Defense
			31,		// Speed
			31,		// Special Attack
			31		// Special Defense
		},
		.nature = NATURE_MODEST
	},
	
	[SPREAD_31_IV_HP_SPATK_MODEST] =
	{
		.EVs = {
			0,	// HP
			  0,	// Attack
			  0,	// Defense
			  0,	// Speed
			0,	// Special Attack
			  0		// Special Defense
		},
		.IVs = {
			31,		// HP
			 0,		// Attack
			31,		// Defense
			31,		// Speed
			31,		// Special Attack
			31		// Special Defense
		},
		.nature = NATURE_MODEST
	},	
	
	[SPREAD_31_IV_HP_SPATK_QUIET] =
	{
		.EVs = {
			0,	// HP
			  0,	// Attack
			  0,	// Defense
			  0,	// Speed
			0,	// Special Attack
			  0		// Special Defense
		},
		.IVs = {
			31,		// HP
			 0,		// Attack
			31,		// Defense
			 0,		// Speed
			31,		// Special Attack
			31		// Special Defense
		},
		.nature = NATURE_QUIET
	},
	
	[SPREAD_31_IV_HP_DEF_IMPISH] =
	{
		.EVs = {
			0,	// HP
			  0,	// Attack
			0,	// Defense
			  0,	// Speed
			  0,	// Special Attack
			  0		// Special Defense
		},
		.IVs = {
			31,		// HP
			31,		// Attack
			31,		// Defense
			31,		// Speed
			31,		// Special Attack
			31		// Special Defense
		},
		.nature = NATURE_IMPISH
	},

	[SPREAD_31_IV_HP_DEF_BOLD] =
	{
		.EVs = {
			0,	// HP
			  0,	// Attack
			0,	// Defense
			  0,	// Speed
			  0,	// Special Attack
			  0		// Special Defense
		},
		.IVs = {
			31,		// HP
			 0,		// Attack
			31,		// Defense
			31,		// Speed
			31,		// Special Attack
			31		// Special Defense
		},
		.nature = NATURE_BOLD
	},
	
	[SPREAD_31_IV_HP_SPDEF_CALM] =
	{
	.EVs = {
			0,	// HP
			  0,	// Attack
			  0,	// Defense
			  0,	// Speed
			  0,	// Special Attack
			0		// Special Defense
		},
		.IVs = {
			31,		// HP
			 0,		// Attack
			31,		// Defense
			31,		// Speed
			31,		// Special Attack
			31		// Special Defense
		},
		.nature = NATURE_CALM
	},

	[SPREAD_31_IV_HP_SPDEF_CAREFUL] =
	{
	.EVs = {
			0,	// HP
			  0,	// Attack
			  0,	// Defense
			  0,	// Speed
			  0,	// Special Attack
			0		// Special Defense
		},
		.IVs = {
			31,		// HP
			31,		// Attack
			31,		// Defense
			31,		// Speed
			31,		// Special Attack
			31		// Special Defense
		},
		.nature = NATURE_CAREFUL
	},
	// Hidden Power Spreads
	[SPREAD_HP_FIRE_TIMID] =
	{
		.EVs = {
			  0,	// HP
			  0,	// Attack
			  0,	// Defense
			0,	// Speed
			0,	// Special Attack
			  0		// Special Defense
		},
		.IVs = {
			31,		// HP
			 0,		// Attack
			31,		// Defense
			30,		// Speed
			30,		// Special Attack
			31		// Special Defense
		},
		.nature = NATURE_TIMID
	},
	
	[SPREAD_HP_FIRE_MODEST] =
	{
		.EVs = {
			  0,	// HP
			  0,	// Attack
			  0,	// Defense
			0,	// Speed
			0,	// Special Attack
			  0		// Special Defense
		},
		.IVs = {
			31,		// HP
			 0,		// Attack
			31,		// Defense
			30,		// Speed
			30,		// Special Attack
			31		// Special Defense
		},
		.nature = NATURE_MODEST
	},
	
	[SPREAD_HP_FIRE_QUIET] =
	{
		.EVs = {
			  0,	// HP
			  0,	// Attack
			  0,	// Defense
			0,	// Speed
			0,	// Special Attack
			  0		// Special Defense
		},
		.IVs = {
			31,		// HP
			 0,		// Attack
			31,		// Defense
			 0,		// Speed
			30,		// Special Attack
			31		// Special Defense
		},
		.nature = NATURE_QUIET
	},
	
	[SPREAD_HP_ICE_TIMID] =
	{
		.EVs = {
			  0,	// HP
			  0,	// Attack
			  0,	// Defense
			0,	// Speed
			0,	// Special Attack
			  0		// Special Defense
		},
		.IVs = {
			31,		// HP
			 0,		// Attack
			30,		// Defense
			31,		// Speed
			31,		// Special Attack
			31		// Special Defense
		},
		.nature = NATURE_TIMID
	},
	
	[SPREAD_HP_ICE_MODEST] =
	{
		.EVs = {
			  0,	// HP
			  0,	// Attack
			  0,	// Defense
			0,	// Speed
			0,	// Special Attack
			  0		// Special Defense
		},
		.IVs = {
			31,		// HP
			 0,		// Attack
			30,		// Defense
			31,		// Speed
			31,		// Special Attack
			31		// Special Defense
		},
		.nature = NATURE_MODEST
	},
	
	[SPREAD_HP_ICE_QUIET] =
	{
		.EVs = {
			0,	// HP
			  0,	// Attack
			  0,	// Defense
			  0,	// Speed
			0,	// Special Attack
			  0		// Special Defense
		},
		.IVs = {
			31,		// HP
			 0,		// Attack
			30,		// Defense
			 1,		// Speed
			31,		// Special Attack
			31		// Special Defense
		},
		.nature = NATURE_QUIET
	},
	[SPREAD_HP_GRASS_TIMID] =
	{
		.EVs = {
			  0,	// HP
			  0,	// Attack
			  0,	// Defense
			0,	// Speed
			0,	// Special Attack
			  0		// Special Defense
		},
		.IVs = {
			30,		// HP
			 0,		// Attack
			31,		// Defense
			31,		// Speed
			30,		// Special Attack
			31		// Special Defense
		},
		.nature = NATURE_TIMID
	},
	
	[SPREAD_HP_GRASS_MODEST] =
	{
		.EVs = {
			  0,	// HP
			  0,	// Attack
			  0,	// Defense
			0,	// Speed
			0,	// Special Attack
			  0		// Special Defense
		},
		.IVs = {
			30,		// HP
			 0,		// Attack
			31,		// Defense
			31,		// Speed
			30,		// Special Attack
			31		// Special Defense
		},
		.nature = NATURE_MODEST
	},
	
	[SPREAD_HP_GRASS_QUIET] = {
		.EVs = {
			0,	// HP
			  0,	// Attack
			  0,	// Defense
			  0,	// Speed
			0,	// Special Attack
			  0		// Special Defense
		},
		.IVs = {
			30,		// HP
			 0,		// Attack
			31,		// Defense
			 1,		// Speed
			30,		// Special Attack
			31		// Special Defense
		},
		.nature = NATURE_QUIET
	},
	
	[SPREAD_ROXANNE_ONE_MON] = {
		.EVs = {
			  0,	// HP
			  0,	// Attack
			  0,	// Defense
			  0,	// Speed
			  0,	// Special Attack
			  0		// Special Defense
		},
		.IVs = {
			25,		// HP
			25,		// Attack
			25,		// Defense
			25,		// Speed
			25,		// Special Attack
			25		// Special Defense
		},
		.nature = NATURE_RELAXED
	},

	[SPREAD_ROXANNE_NOSEPASS] = {
		.EVs = {
			200,	// HP
			  0,	// Attack
			 92,	// Defense
			  0,	// Speed
			  0,	// Special Attack
			168		// Special Defense
		},
		.IVs = {
			31,		// HP
			31,		// Attack
			31,		// Defense
			31,		// Speed
			31,		// Special Attack
			31		// Special Defense
		},
		.nature = NATURE_CAREFUL
	},
		[SPREAD_BRAWLY_ONE_MON] = {
		.EVs = {
			  0,	// HP
			  0,	// Attack
			  0,	// Defense
			  0,	// Speed
			  0,	// Special Attack
			  0		// Special Defense
		},
		.IVs = {
			31,		// HP
			31,		// Attack
			31,		// Defense
			31,		// Speed
			31,		// Special Attack
			31		// Special Defense
		},
		.nature = NATURE_ADAMANT
	},
};