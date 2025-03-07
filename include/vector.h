#ifndef VECTOR_H
#define VECTOR_H

typedef struct vector {
	size_t size;
	size_t element_size;
	size_t capacity;
	void* data;
} vector;

void init_vector(vector*, size_t, size_t);
void resize_vector(vector*);
void push_back(vector*, void*);
void pop_back();
void* get_element(vector*, size_t);
void delete_vector(vector*);

#endif //VECTOR_H