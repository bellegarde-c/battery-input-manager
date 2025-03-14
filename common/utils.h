/*
 * Copyright Cedric Bellegarde <cedric.bellegarde@adishatz.org>
 */

#define GFOREACH(list, item) \
    for(GList *__glist = list; \
        __glist && (item = __glist->data, TRUE); \
        __glist = __glist->next)
