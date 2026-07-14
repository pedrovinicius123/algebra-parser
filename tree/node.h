#ifndef NODE
#define NODE

#define FLAG_SUM 0
#define FLAG_MUL 1
#define FLAG_VAL -1

struct NODE_TREE {
    struct NODE_TREE *left;
    struct NODE_TREE *right;
    char* val;
    int flag;
};

typedef NODE_TREE* node;
#endif 