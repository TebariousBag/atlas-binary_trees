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
