#ifndef HEADERGUARD
#define HEARDERGUARD

void print_name(char *name, void (*f) (char *));
void array_iterator(intr *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));


#endif
