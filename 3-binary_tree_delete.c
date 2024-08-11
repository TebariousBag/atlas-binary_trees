#include "binary_trees.h"

/**
 * binary_tree_delete - deletes entire binary tree
 * @tree: pointer to root of tree
 * Return: void
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree != NULL)
	{
		return;
	}

	binary_tree_delete(tree->right); /*gonna free left and right*/
	binary_tree_delete(tree->left);
	free(tree);
}
