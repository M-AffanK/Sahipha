#include <stdlib.h>

#include "include/vector.h"

void init_vector(vector* v, size_t capacity, size_t element_size) {
	v->size = 0;
	v->capacity = capacity;
	v->element_size = element_size;
	v->data = malloc(capacity * element_size);
}

void resize_vector(vector* v) {
	v->capacity *= 2;
	void* temp = realloc(v->data, v->capacity * v->element_size);
	if (temp != NULL)
		v->data = temp;
}

void push_back(vector* v, void* element) {
	if (v->size == v->capacity) {
		resize_vector(v);
	}
	memcpy((char*)v->data + v->size * v->element_size, element, v->element_size);
	++v->size;
}

void pop_back(vector* v) {
	if (v->size > 0) {
		--v->size;
	}
}

void* get_element(vector* v, size_t index) {
	if (index < v->size) {
		return (char*)v->data + index * v->element_size;
	}
	return NULL;
}

void delete_vector(vector* v) {
	free(v->data);
	v->data = NULL;
	v->size = 0;
	v->capacity = 0;
	v->element_size = 0;
}