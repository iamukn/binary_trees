/**
 * main - writes a binary tree that returns a node
 *
 * return: Always 0
 */
#include "binary_trees.h"

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
binary_tree_t *mem;
mem =malloc (sizeof(binary_tree_t));
if (mem == NULL)
return(NULL);
mem->parent = parent;
mem->left = NULL;
mem->right = NULL;
mem->n = value;
free(mem);
return(mem);
}
