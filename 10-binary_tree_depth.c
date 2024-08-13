#include "binary_trees.h"

/**
 * binary_tree_depth - measures depth of node
 * @tree: pointer to node
 * Return: depth or 0 if NULL
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL)
	{
		return (0);
	}

	while (tree->parent)
	{
		depth++;
		tree = tree->parent;
	}

	return (depth);
}
