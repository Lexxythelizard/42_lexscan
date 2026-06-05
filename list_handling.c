/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_handling.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenivorb <lenivorb@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/05 20:26:46 by lenivorb          #+#    #+#             */
/*   Updated: 2026/06/05 21:14:19 by lenivorb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// --- icludes ---

#include "element_lists.h"

// --- DOC ---

/*
	... your comment here ...
*/

// --- prototype ---

t_node	*init_empty(void);
t_node	*init_node(t_node *node, void *content, int idx);
t_node	*init_new_list(void *content);
t_node	*del_node(t_node *node, void (*rm_content)(void*));
t_node	*add_back_list(t_node *node, void *content);

// --- func ---

/*	...you comment... */

t_node	*init_empty(void)
{
	t_node	*new;

	new = malloc(24);
	if (!new)
		return (NULL);
	new -> idx = -1;
	new -> content = NULL;
	new -> next = NULL;
}

/*	...you comment... */

t_node	*init_node(t_node *node, void *content, int idx)
{
	if ((!(node)) || (!(content)))
		return (NULL);
	if ((node -> content) || (node -> idx))
		return (NULL);
	node -> idx = idx;
	node -> content = content;
	return (node);
}

/*	...you comment... */

t_node	*init_new_list(void *content)
{
	t_node	*new;

	if (!(content))
		return (NULL);
	new = init_empty();
	return (init_node(new, content, idx));
}

int	del_node(t_node *node, void (*rm_content)(void*))
{
	if ((!(node)) || (!(rm_content)))
		return (-1);
	if (!((node) -> content))
		return (-1);
	rm_content(node -> content);
	node -> content = NULL;
	node -> idx = (-1);
}

/*	...you comment... */

t_node	*add_back_list(t_node *node, void *content)
{
	if ((!(node)) || (!(content)))
		return (NULL);
	if (!)
		return (NULL);
	// you code here
}
