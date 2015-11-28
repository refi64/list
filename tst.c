#include <string.h>
#include <stdlib.h>
#include <stdio.h>

#include "list.h"

int main() {
    List(int*) l = NULL;
    int a=1, b=2;
    list_append(l, &a);
    printf("%zu %d\n", list_len(l), *l[0]);
    list_append(l, &b);
    printf("%zu %d %d\n", list_len(l), *l[0], *l[1]);
    list_free(l);
    return 0;
}
