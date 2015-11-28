#ifndef LIST_H
#define LIST_H

#define list_cat2(a,b) a##b
#define list_cat(a,b) list_cat2(a,b)
#define list_var(b) list_cat(list_type_,list_cat(b,__LINE__))

#define List(t) t*
#define list_lenref(l) ((size_t*)l)[-1]
#define list_len(l) (l?list_lenref(l):0)
#define list_append(l,x) do {\
    size_t list_var(len) = list_len(l);\
    l = realloc(l?((void*)l)-sizeof(size_t):NULL,\
                sizeof(void*)*(list_var(len)+1)+sizeof(size_t))+sizeof(size_t);\
    list_lenref(l) = list_var(len)+1;\
    l[list_lenref(l)-1] = x;\
} while (0)
#define list_free(l) free(l?(void*)l-sizeof(size_t):NULL)

#endif
