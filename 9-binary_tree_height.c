#include "binary_trees.h"

/**
 * 
 * 
 * 
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t hl = 0; /*height left*/
	size_t hr = 0; /*height right*/

	if (tree == NULL)
	{
	return (0);
	}
	if (tree->left != NULL)
	{
		hl = binary_tree_height(tree->left);
	}
	if (tree->right != NULL)
	{
		hr = binary_tree_height(tree->right);
	}

	return ((hl > hr) ? hl : hr) + 1;

}
