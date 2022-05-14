#include <common/tree.h>
//Child-brother Architecture.
void insert_tree_node_as_child(InlineTreeNode* parent,InlineTreeNode* data)
{
    if(parent->child) {
        InlineTreeNode* child = parent->child;
        while(child->sibling) {
            child = child->sibling;
        }
        child->sibling = data;
        data->parent = child->parent;
        return;
    }
    parent->child = data;
    data->parent = parent;
}
