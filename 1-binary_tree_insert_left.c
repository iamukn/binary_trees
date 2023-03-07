#include "binary_trees.h"

/**
 * binary_tree_insert_left - The structure.
 * @parent: The parent node
 * @value: The data of the node
 *
 * Return: Alway 0
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
binary_tree_t *node, *twice;

node = malloc(sizeof(binary_tree_t));
node->parent = parent;
node->left = NULL;
node->right = NULL;
node->data = value;
twice = parent->left;
if (parent->left != NULL)
{
node->parent->left = node;
node->left = twice;
}

return (node);
}
