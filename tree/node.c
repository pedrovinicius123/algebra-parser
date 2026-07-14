#include "node.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void div_expr(char* expr)
{
    int cnext_count, cprev_count, i, nexpr, flag;
    char current;

    cnext_count = 0;
    cprev_count = 0;
    nexpr = 0;
    
    int il, iu;
    i = 0;
    il = 0;
    
    while (current != ')' &&) {
        if (current == '(' && i > 0) il = i;
        i++;
    }

    iu = i;
    char* inner_expr = malloc(iu-il);
    if (!inner_expr) {
        free(inner_expr);
        perror("Failed to alloc inner_expr");
        return;
    }

    memcpy(inner_expr, expr+il, iu-il);
    

}
