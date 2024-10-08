#include "binary_trees.h"

/**
 * binary_tree_preorder - preorder traversal
 * @tree: pointer to root node of tree
 * @func: pointer to function call for each node
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}

	func(tree->n);
	binary_tree_preorder(tree->left, func); /*traverse left*/
	binary_tree_preorder(tree->right, func); /*travers right*/
}
