#ifndef	HEX_H
#define HEX_H

typedef struct hex {
	const char* word;
	const char* translation;
	size_t offset;
} hex;

void init_hex(hex*, const char*, size_t);
void set_translation(hex*, const char*);
void set_offset(hex*, size_t);
void delete_hex(hex*);

#endif //HEX_H