#ifndef	HEX_H
#define HEX_H

typedef struct hex {
	char character;
	char* translation;
	size_t offset;
} hex;

void init_hex(hex*, const char, size_t);
void set_translation(hex*);
void change_translation(hex*, const char*);
void change_character(hex*);
void set_offset(hex*, size_t);
void delete_hex(hex*);

#endif //HEX_H