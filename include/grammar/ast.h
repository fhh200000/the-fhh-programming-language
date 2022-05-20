#ifndef AST_H
#define AST_H
#include <common.h>
#include <lexical/lexical.h>
typedef struct {
    inline_tree_node node;
    token_structure structure;
} ast_tree_node;
extern inline_tree_node ast_tree;
#endif
