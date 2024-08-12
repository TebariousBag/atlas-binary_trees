#include "binary_trees.h"

/**
 * binary_tree_postorder - inorder traversal
 * @tree: pointer to root node of tree
 * @func: pointer to function call for each node
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}

	binary_tree_postorder(tree->left, func); /*traverse left*/
	binary_tree_postorder(tree->right, func); /*travers right*/
	func(tree->n); /*then go to root*/
}
