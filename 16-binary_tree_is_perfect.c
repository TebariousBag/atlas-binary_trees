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

/**
* binary_tree_height - measures height of tree
* @tree: pointer to root
* Return: height or 0 if tree is NULL
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t hl = 0; /*height left*/
	size_t hr = 0; /*height right*/

	if (!tree)
	{
		return (0);
	}
	hl = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	hr = tree->right ? 1 + binary_tree_height(tree->right) : 0;

	return (hl > hr ? hl : hr);

}

/**
 * binary_tree_is_perfect - checks if tree is perfect
 * @tree: the tree to check
 * Return: if null return 0
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t hl = 0;
	size_t hr = 0;
	size_t leavesr = 0;
	size_t leavesl = 0;

	if (tree == 0)
	{
		return (0);
	}

	hl = binary_tree_height(tree->left);
	hr = binary_tree_height(tree->right);
	leavesl = binary_tree_leaves(tree->left);
	leavesr = binary_tree_leaves(tree->right);

	if ((hl == hr) && (leavesl == leavesr))
	{
		return (1);
	}
	return (0);
}
