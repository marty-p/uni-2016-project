#ifndef __EDJ_CORE_STRUCTS_H__
#define __EDJ_CORE_STRUCTS_H__

#include "core.h"

/* enum list */
typedef enum
{
	DIFFICULTY_MODE_NUM = 3,
	CARD_TYPE_NUM = 9,
	PLAYER_TYPE_NUM = 2,
	CARD_COUNT_NUM = 3,
} Counters;

typedef enum
{
	EASY, //0
	MEDIUM, //1
	HARD, //2
} DifficultyMode;

typedef enum
{
	EXPLODING_DJANNI, //0
	MEOOOW, //1
	SHUFFLE, //2
	NOPE, //3
	SEE_THE_FUTURE, //4
	ATTACK, //5
	SKIP, //6
	FAVOR, //7
	DJANNI_CARDS, //8
} CardType;

typedef enum
{
	AI, //0
	REAL, //1
} PlayerType;

typedef enum
{
	N_EXPLODING_DJANNI, //0
	N_MEOOOW, //1
	N_OTHER_CARDS, //2
} CardCountType;

/* struct list */
typedef struct
{
	char title[CARD_TITLE_LEN+1];
	CardType type;
} Card;

typedef struct CardNode
{
	Card card;
	struct CardNode * next;
} CardNode;

typedef struct
{
	char name[PLAYER_NAME+1];
	_Bool is_alive;
	int card_count;
	PlayerType type;
	CardNode * card_list;
} Player;

typedef struct
{
	int total_count;
	CardNode * card_list;
} CardDeck;

typedef struct
{
	int turn;
	_Bool is_attacked;
} GameStatus;

typedef struct
{
	int count;
	CardNode * card_list;
} CardCount;

#endif
