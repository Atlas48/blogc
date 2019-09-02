/*
 * blogc: A blog compiler.
 * Copyright (C) 2014-2019 Rafael G. Martins <rafael@rafaelmartins.eng.br>
 *
 * This program can be distributed under the terms of the BSD License.
 * See the file LICENSE.
 */

#ifndef _RENDERER_H
#define _RENDERER_H

#include <stdbool.h>
#include <squareball.h>

const char* blogc_get_variable(const char *name, sb_trie_t *global, sb_trie_t *local);
char* blogc_format_date(const char *date, sb_trie_t *global, sb_trie_t *local);
char* blogc_format_variable(const char *name, sb_trie_t *global, sb_trie_t *local,
    sb_slist_t *foreach_var);
sb_slist_t* blogc_split_list_variable(const char *name, sb_trie_t *global,
    sb_trie_t *local);
char* blogc_render(sb_slist_t *tmpl, sb_slist_t *sources, sb_trie_t *listing_entr,
    sb_trie_t *config, bool listing);

#endif /* _RENDERER_H */
