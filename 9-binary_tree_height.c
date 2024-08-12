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

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
	{
		return (0);
	}

	return ((hl > hr) ? hl : hr) + 1;

}
