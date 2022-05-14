#ifndef TREE_H
#define TREE_H

typedef struct TreeNode {
    struct TreeNode* child;
    struct TreeNode* parent;
    struct TreeNode* sibling;
} InlineTreeNode;

typedef struct {
    InlineTreeNode entry;
} InlineTree;

void insert_tree_node_as_child(InlineTreeNode* parent,InlineTreeNode* data);

#endif

