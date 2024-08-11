#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks if node is leaf
 * @node: pointer to node to check
 * Return: 1 if node is leaf, or if NULL 0
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node->left != NULL || node->right != NULL || node == NULL)
	/*if node has a left or right then that means it is not a leaf*/
	{
		return (0);
	}

	return (1);

}
