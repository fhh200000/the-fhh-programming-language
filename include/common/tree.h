#ifndef TREE_H
#define TREE_H

typedef struct TreeNode {
    struct TreeNode* child;
    struct TreeNode* parent;
    struct TreeNode* sibling;
} inline_tree_node;

typedef struct {
    inline_tree_node entry;
} InlineTree;

void insert_tree_node_as_child(inline_tree_node* parent,inline_tree_node* data);

#endif

