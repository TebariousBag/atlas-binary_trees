#include "binary_trees.h"

/**
 * binary_tree_nodes - count nodes with child
 * @tree: pointer to root
 * Return: count of nodes with child or 0
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
		size_t nodes = 0;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left == NULL && tree->right == NULL) /*no child*/
	{
		return (1);
	}
	else /*counting children*/
	{
			nodes += binary_tree_nodes(tree->left); /*count left*/
			nodes += binary_tree_nodes(tree->right); /*count right*/
	}

	return (nodes);
}
