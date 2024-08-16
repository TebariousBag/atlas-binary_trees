#include "binary_trees.h"

/**
 * binary_tree_uncle - finds uncle of node
 * @node: the node
 * Return: pointer to sibling or NULL
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
	 /*NULL case*/
	{
		return (NULL);
	}
	if (node->parent->parent->left == node->parent)
	/*check if node is left child of parent*/
	{
		return (node->parent->parent->right);
	}
	return (node->parent->parent->left); 
	/*if its not the left it must be right*/
}
