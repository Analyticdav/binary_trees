#include "binary_trees.h"

/**
 * binary_tree_node - A function to Create a binary node
 * @parent: node parent
 * @value: Value of the node
 * Return: the new node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *add_node;

	add_node = malloc(sizeof(binary_tree_t));
	if (add_node == NULL)
	{
		return (NULL);
	}
	add_node->n = value;
	add_node->parent = parent;
	add_node->left = NULL;
	add_node->right = NULL;
	return (add_node);
}
