#include "binary_trees.h"
/**
 * binary_tree_t *binary_tree_insert_right - add a node
 * in the left of the parent
 * @parent: is a pointer to the node to insert the left-child in
 * @value: is the value to store in the new node
 * If parent already has a right-child, the new node must take its place
 * Return: NULL if it fails or the new node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
	{
		return (NULL);
	}

	new_node = binary_tree_node(parent, value);
	if (new_node == NULL)
	{
		return (NULL);
	}
	if (parent->right != NULL)
	{
		new_node->right = parent->right;
		parent->right->parent = new_node;
	}
	parent->right = new_node;
	return (new_node);
}
