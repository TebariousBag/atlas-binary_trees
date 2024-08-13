#include "binary_trees.h"
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
 * binary_tree_balance - balance of tree
 * @tree: pointer root of tree
 * Return: balance or 0 if NULL
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int left = 0;
	int right = 0;
	int total = 0;

	if (tree)
	{
		left = ((int)binary_tree_height(tree->left)); /*height of left*/
		right = ((int)binary_tree_height(tree->right)); /*height of right*/

		total = left - right; /*subtract to get balance*/
	}

	return (total);
}
