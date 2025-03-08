#include <stdlib.h>
#include <stdio.h>

#include "include/hex.h"

void init_hex(hex* h, const char character, size_t offset) {
	h->character = character;
	h->translation = (char*)malloc(3);
	set_translation(h);
	h->offset = offset;
}

void set_translation(hex* h) {
	sprintf(h->translation, "%02X", h->character);
}

void change_translation(hex* h, const char* translation) {
	h->translation = translation;
}

void change_character(hex* h) {
	h->character = (char)strtol(h->translation, NULL, 16);
}

void set_offset(hex* h, size_t offset) {
	h->offset = offset;
}

void delete_hex(hex* h) {
	free(h->translation);
	h->translation = NULL;
	h->character = 0;
	h->offset = 0;
}