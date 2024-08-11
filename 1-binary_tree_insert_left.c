#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts node as left child of a node
 * @parent: pointer to node to insert left child
 * @value: the value
 * Return: pointer to new node or NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
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
	new->right = NULL;
	new->left = parent->left; /*new node left is now the current left child*/
	parent->left = new; /*new node is the left child of parent*/

	if (new->left) /*if new has a left than new is now parent*/
	{
		new->left->parent = new;
	}
	return (new);
}
