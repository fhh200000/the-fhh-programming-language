#include <common/tree.h>
//Child-brother Architecture.
void insert_tree_node_as_child(inline_tree_node* parent,inline_tree_node* data)
{
    if(parent->child) {
        inline_tree_node* child = parent->child;
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
