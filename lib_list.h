/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib_lists.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenivorb <lenivorb@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/05 13:52:46 by lenivorb          #+#    #+#             */
/*   Updated: 2026/06/05 15:00:08 by lenivorb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIB_LISTS_H
# define LIB_LISTS_H

// --- DOC ---

/*
	...you comment here...
*/

// --- Prototypes ---

struct	s_library_content;
struct	s_special_func;
struct	s_libray_info;

// --- Makros ---

# define YOUR_DEFVAL 161

// --- struct ---

// list content

typedef struct s_library_content
{
	int		in_comment;
	int		no_comment;
	int		total;
	char	*pattern;
}			t_libcontent;

// special function

typedef struct s_special_func
{
	void	(*increment_com)(t_lib_elements*, int);
	void	(*increment_out)(t_lib_elements*, int);
}			t_sfunc;

// list skeleton

typedef struct s_libray_info
{
	char	*lib_name;
	char	*incl_name;
}			t_libinfo;

// --- end ---

#endif
