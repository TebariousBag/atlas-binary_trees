#include "binary_trees.h"

/**
 * binary_tree_inorder - inorder traversal
 * @tree: pointer to root node of tree
 * @func: pointer to function call for each node
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}

	binary_tree_inorder(tree->left, func); /*traverse left*/
	func(tree->n); /*then go to root*/
	binary_tree_inorder(tree->right, func); /*travers right*/
}
