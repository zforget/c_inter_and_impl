#include <stdio.h>
#include "mem.h"

typedef  struct ST
{
    int a;
    int b;
}ST;

int main(int argc, char *argv[])
{
    void *p = NULL;
    int i = 0;
    ST *s = NULL;
    
    p = ALLOC(2147483647); // max
    printf("addr : %0x\n", p);
    FREE(p);
    printf("addr : %0x, after free\n", p);

    TRY
        p = ALLOC(0); 
    EXCEPT(Assert_Failed)
        printf("assert failed!\n");
    END_TRY;
    
    TRY
        p = ALLOC(-1); 
    EXCEPT(Assert_Failed)
        printf("assert failed!\n");
    END_TRY;

    p = ALLOC(1024);
    printf("addr : %0x\n", p);
    p = RESIZE(p, 1024 * 1024);
    printf("addr : %0x, after resize\n", p);
    p = RESIZE(p, 1024 * 5);
    printf("addr : %0x, after resize\n", p);
    FREE(p);


    p = CALLOC(10, 1);
    for (i = 0; i < 10; i++)
        assert(*((unsigned char *)p+i) == 0x00);
    FREE(p);

    NEW(s);
    printf("s : %0x\n", s);
    FREE(s);

    NEW0(s);
    printf("s->a : %d, s->b : %d\n", s->a, s->b);
    FREE(s);
    
    return 0;
}

