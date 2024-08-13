#include "binary_trees.h"

/**
 * binary_tree_leaves - counts leaves in tree
 * @tree: pointer to root of tree
 * Return: the number of leaves or 0 if NULL
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}
	else
	{
			leaves += binary_tree_leaves(tree->left); /*count left*/
			leaves += binary_tree_leaves(tree->right); /*count right*/
	}

	return (leaves);
}
