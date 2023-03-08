#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserting a node to the right
 * @parent: The parent node
 * @value: The data for the node
 * If the parent has a right child, the child should be made the
 * subchild and the new child be made the direct child of the parent
 *
 * Return: Always (0);
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{

if (parent == NULL)
return (NULL);

tree *num;
num = binary_tree_node(parent, value);

if (parent->right != NULL)
{
num->right = parent->right;
parent->right = num;
}
parent->right = num;
}
