/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   element_lists.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenivorb <lenivorb@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/05 13:52:46 by lenivorb          #+#    #+#             */
/*   Updated: 2026/06/05 15:00:08 by lenivorb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ELEMENT_LISTS_H
# define ELEMENT_LISTS_H

// --- include ---

# include "none.h"

// --- DOC ---

/*
	...you comment here...
*/

// --- Prototypes ---

struct	s_node;
struct	s_lib_element;
struct	s_lib_elements;

// --- Makros ---

# define YOUR_DEFVAL 161

// --- struct ---

// list nodes

typedef struct s_node
{
	int			idx;
	void		*content
	t_node		*next;
}				t_node;

// list content

typedef struct s_lib_element
{
	int		in_comment;
	int		no_comment;
	int		total;
	char	*pattern;
}			t_lib_element;

// list skeleton

typedef struct s_lib_elements
{
	int				len;
	char			*lib_name;
	char			*incl_name;
	t_node			*tail;
	void			(*increment_com)(t_lib_elements*, int);
	void			(*increment_out)(t_lib_elements*, int);
	void			(*append)(t_lib_elements*, t_lib_element*);
	t_lib_element	*(*by_index)(t_lib_elements*, int);
	t_lib_element	*(*last)(t_lib_elements*, int);
	t_node			*(*pop)(t_lib_elements*, (*f)(t_node*), int);
}					t_lib_elements;

// --- end ---

#endif
