/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   headless_insert.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenivorb <lenivorb@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/08 10:59:41 by lenivorb          #+#    #+#             */
/*   Updated: 2026/06/09 18:56:51 by lenivorb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// --- icludes ---

#include "list.h"
#include "list_core.h"

// --- DOC ---

/*
	... your comment here ...
*/

// --- prototype ---

void	headless_insert_node(t_node **node, t_node *new, int idx);
int		headless_insert(t_node **node, void *content, int idx);

// --- define ---

/*add_node_back() source out later
refactor slightly*/

void	headless_insert_node(t_node **node, t_node *new, int idx)
{
	t_node	*append;

	if ((!node) || (!(*node)) || (!new) || (idx < 0))
		return ;
	append = headless_cut(node, idx);
	if (!append)
		return ;
	new -> next = append;
	if (idx)
		suff = headless_by_idx_node(*node, (idx - 1))
	else
		*node = new;
	headless_reindex(*node);
}

int	headless_insert(t_node **node, void *content, int idx)
{
	t_node	*append;
	t_node	*new;

	if ((!node) || (!(*node)) || (!content) || (idx < 0))
		return ;
	new = init_new_node(content, 0);
	append = headless_cut(node, idx);
	if ((!append) || (!new))
		return (-1);
	new -> next = append;
	if (idx)
		suff = headless_by_idx_node(*node, (idx - 1));
	else
		*node = new;
	return (headless_reindex(*node));
}
