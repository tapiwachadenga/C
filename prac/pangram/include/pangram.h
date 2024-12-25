#ifndef PANGRAM_H
#define PANGRAM_H

#include <stdbool.h>

bool is_pangram(const char *sentence);

char *remove_non_alphas(char *);

char *remove_char_duplicates(char *);

#endif
