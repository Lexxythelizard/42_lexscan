/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   headless_append.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenivorb <lenivorb@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/08 10:59:41 by lenivorb          #+#    #+#             */
/*   Updated: 2026/06/09 18:38:07 by lenivorb         ###   ########.fr       */
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

void	headless_append_node(t_node **node, t_node *new);
int		headless_append(t_node **node, void *content);

// --- define ---

/*add_node_back() takes the node and bassicly added it to the back of the list*/

void	headless_append_node(t_node **node, t_node *new)
{
	t_node	ptr;

	if ((!node) || (!new))
		return ;
	ptr = *node;
	if (!(*node))
	{
		*node = new;
		return ;
	}
	while (ptr -> next)
		ptr = -> next;
	ptr -> next = new;
	headless_reindex(*node);
}

int	headless_append(t_node **node, void *content)
{
	t_node	*ptr;
	t_node	*new;

	if ((!node) || (!content))
		return (-1);
	new = init_new_node(content, 0);
	if (!ptr)
		return (-1);
	ptr = *node;
	if (!(*node))
	{
		*node = new;
		return (1);
	}
	while (ptr -> next)
		ptr = -> next;
	ptr -> next = new;
	return (headless_reindex(*node));
}
