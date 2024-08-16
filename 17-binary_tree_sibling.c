#include "binary_trees.h"

/**
 * binary_tree_sibling - finds sibling of node
 * @node: pointer to node to find sibling
 * Return: pointer to sibling or NULL
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL) /*NULL case*/
	{
		return (NULL);
	}
	if (node->parent->left == node) /*check if node is left child*/
	{
		return (node->parent->right);
	}
	return (node->parent->left); /*if its not the left it must be right*/
}
