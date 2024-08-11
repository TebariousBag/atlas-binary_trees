#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts node as right child of a node
 * @parent: pointer to node to insert right child
 * @value: the value
 * Return: pointer to new node or NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));

	if (parent == NULL) /*if there is no parent*/
	{
		return (NULL);
	}
	if (new == NULL) /*memory alloc check*/
	{
		return (NULL);
	}

	new->n = value;
	new->parent = parent; /*new node parent*/
	new->left = NULL;
	new->right = parent->right; /*new node right is now the current left child*/
	parent->right = new; /*new node is the right child of parent*/

	if (new->right) /*if new has a right than new is now parent*/
	{
		new->right->parent = new;
	}
	return (new);
}
