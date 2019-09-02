/*
 * blogc: A blog compiler.
 * Copyright (C) 2014-2019 Rafael G. Martins <rafael@rafaelmartins.eng.br>
 *
 * This program can be distributed under the terms of the BSD License.
 * See the file LICENSE.
 */

#ifndef _MAKE_UTILS_H
#define _MAKE_UTILS_H

#include <squareball.h>

char* bm_generate_filename(const char *dir, const char *prefix, const char *fname,
    const char *ext);
char* bm_generate_filename2(const char *dir, const char *prefix, const char *fname,
    const char *prefix2, const char *fname2, const char *ext);
char* bm_abspath(const char *path, sb_error_t **err);

#endif /* _MAKE_UTILS_H */
