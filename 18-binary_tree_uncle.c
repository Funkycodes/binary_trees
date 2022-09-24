#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: Pointer to the node to find the sibling
 *
 * Return: Pointer to the uncle node, or NULL otherwise
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	return ((!node) ? NULL : binary_tree_sibling(node->parent));
}


/**
 * binary_tree_sibling - Finds the sibling of a node
 * @node: Pointer to the node to find the sibling
 *
 * Return: Pointer to the sibling node, or NULL otherwise
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *s;

	if (!node || !(node->parent))
		return (NULL);
	s = (node->parent->right != node) ? node->parent->right : node->parent->left;
	return (s);
}
