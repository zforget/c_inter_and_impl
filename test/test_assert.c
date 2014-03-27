#include <stdio.h>
#include "assert.h"

int main(int argc, char *argv[])
{
    TRY
        assert(0);
    EXCEPT(Assert_Failed)
        printf("assert happened.\n");
    END_TRY;
    
    return 0;
}
