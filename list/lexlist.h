/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lexlist.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenivorb <lenivorb@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/09 17:59:32 by lenivorb          #+#    #+#             */
/*   Updated: 2026/06/09 18:11:31 by lenivorb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LEXLIST_H
# define LEXLIST_H

// --- include ---

# include "lists.h"

// --- DOC ---

/*
	...you comment here...
*/

// --- Makros ---

# define YOUR_MAKRO 161

// --- prototype ---

void	headless_append_node(t_node **node, t_node *new);
t_node	*headless_by_idx_node(t_node *node, int idx);
int		headless_clear_node(t_node **node, void (*del_content)(void*));
int		headless_clear_list(t_node **node, void (*del_content));
t_node  *headless_cut(t_node **node, int idx);
void	headless_insert_node(t_node **node, t_node *new, int idx);
t_node	*headless_last_node(t_node *node);
t_node	*headless_pop_by_index_node(t_node **node, int idx);
t_node  *headless_pop_node(t_node **node);
int		headless_reindex(t_node *first);
// --- end ---

#endif

