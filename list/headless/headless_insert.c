/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   headless_insert.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenivorb <lenivorb@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/08 10:59:41 by lenivorb          #+#    #+#             */
/*   Updated: 2026/06/09 17:55:25 by lenivorb         ###   ########.fr       */
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

// --- define ---

/*add_node_back() source out later
refactor slightly*/

void	headless_insert_node(t_node **node, t_node *new, int idx)
{
	if ((!node) || (!(*nod)) || (!new) || (idx < 0))
		return ;
	append = headless_cut(node, idx);
	if (!append)
		return ;
	new -> next = append;
	if (idx)
		suff = headless_by_idx_node(*node, (idx))
	else
		*node = new;
	headless_reindex(*node);
}
