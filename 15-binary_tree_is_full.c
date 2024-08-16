#include "binary_trees.h"
/**
 * binary_tree_is_full - checks if binary tree is full
 * @tree: pointer to root of tree
 * Return: if NUlL return 0
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int left = 0;
	int right = 0;

	if (tree == NULL) /*null case*/
	{
		return (0);
	}
	else
	{
		if (tree->left && tree->right)
		{
			left = binary_tree_is_full(tree->left);
			right = binary_tree_is_full(tree->right);

			if (left == 0 || right == 0) /*if either side is is NULL*/
			{
				return (0);
			}
			return (1); /*else both full*/
		}
		else if (!tree->left && !tree->right)
		{
			return (1);
		}
		else /*if only one child than its not full*/
		{
			return (0);
		}
	}
}
