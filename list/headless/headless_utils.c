/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   core_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenivorb <lenivorb@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/08 19:11:47 by lenivorb          #+#    #+#             */
/*   Updated: 2026/06/09 17:20:35 by lenivorb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// --- icludes ---

#include "lists.h"
#include "list_core.h"

// --- DOC ---

/*
	... your comment here ...
*/

// --- prototype ---

int	headless_reindex(t_node *first);

// --- define ---

/*	...you comment... */

int	headless_reindex(t_node *first)
{
	int		i;
	t_node	*ptr;

	i = 0;
	if (!first)
		return (-1);
	ptr = first;
	ptr -> idx = 0;
	while (ptr -> next)
	{
		i++;
		ptr = node -> next;
		ptr -> idx = i;
	}
	return (i);
}
