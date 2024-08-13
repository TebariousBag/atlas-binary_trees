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

	if (tree->left != NULL || tree->right != NULL) /*if has child*/
	{
		nodes += 1; /*count increase*/
	}
	
			nodes += binary_tree_nodes(tree->left); /*count left*/
			nodes += binary_tree_nodes(tree->right); /*count right*/

	return (nodes);
}
