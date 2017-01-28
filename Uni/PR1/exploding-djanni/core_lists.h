#ifndef __EDJ_CORE_LISTS_H__
#define __EDJ_CORE_LISTS_H__

#include "core.h"

/* prototype list */
extern void card_node_free(CardNode * first);
extern CardNode * card_node_insert_head(CardNode * first, Card card);
extern CardNode * card_node_insert_tail(CardNode * first, Card card);
extern int card_node_count(CardNode * first);
extern CardNode * card_node_remove_head(CardNode * first);
extern CardNode * card_node_remove(CardNode * first, int n);

#endif
