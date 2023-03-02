#include "binary_trees.h"
/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: pointer to node
 * Return: sibling or NULL
 */
binary_tree_t *binary_tree_sibling(const binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);
	if (node->parent->left && node->parent->left != node)
		return (node->parent->left);
	return (node->parent->right);
}
