#include "binary_trees.h"
/**
 * binary_tree_insert_right - add a node in the left of the parent
 * if it exists it move down one level and add the new node first
 * @parent: parent of the node
 * @value: value of the node
 * Return: NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *add_node;

	if (parent == NULL)
	{
		return (NULL);
	}

	add_node = binary_tree_node(parent, value);
	if (add_node == NULL)
	{
		return (NULL);
	}
	if (parent->right != NULL)
	{
		add_node->right = parent->right;
		parent->right->parent = add_node;
	}
	parent->right = add_node;
	return (add_node);
}
