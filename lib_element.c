// --- icludes ---

#include "element_lists.h"

// --- DOC ---

/*
	... your comment here ...
*/

// --- prototype ---

t_lib_element	*init_empty_content(void);
t_lib_element	*init_content(char *pattern);
t_lib_element	init_new_content(char *pattern);
void			del_content(t_lib_element *content);
void			rm_content(t_lib_element *content);

// --- define ---

/*
init_empty_content() inits an empty content
    {in_comment: 0, no_comment: 0, total: 0, pattern: NULL}
and returns a pointer to the empty content
*/

t_lib_element	*init_empty_content(void)
{
	t_lib_element	new;

	new = malloc(32);
	if (!(new))
		return (NULL);
	new -> in_comment = -1;
	new -> no_comment = -1;
	new -> total = -1;
	new -> pattern = NULL;
	return (new);
}

/*
init_content() takes an empty content and initialized it with a pattern
needs a pointer to content and (dynamicly allocated) pattern
and returns a pointer to the initialized content
*/

t_lib_element	init_content(t_lib_element *content, char *pattern)
{
	if (!(new))
		return (NULL);
	new -> in_comment = 0;
	new -> no_comment = 0;
	new -> total = 0;
	new -> pattern = pattern;
}

/*
init_new_content() inits a new content 
by calling init_empty_content() and init_content()
takes pointer to pattern
returns a pointer to the new initialized content
*/

t_lib_element	init_new_content(char *pattern)
{
	t_lib_element	new;

	if (!(pattern))
		return (NULL);
	new = init_empty_content();
	new = init_content(new, pattern);
}

/*
del_content() resets content to empty content
by setting its members to -1 and freeing and NULL setting pattern
NOTE:
    does not freeing the content it self, 
	not meant to parsed to del_*() functions in node.c
*/

void	del_content(t_lib_element *content)
{
	if (!(content))
		return ;
	new -> in_comment = -1;
	new -> no_comment = -1;
	new -> total = -1;
	if (!(content -> pattern))
		return ;
	free(content -> pattern);
	content -> pattern = NULL;
}

/*
rm_content() removes and frees the content itself
calls del_content()
NOTE:
    not setting the content NULL
    can be parsed to del_*() functions in node.c
*/

void	rm_content(t_lib_element *content)
{
	if (!(content))
		return ;
	del_content(content);
	free(content);
}
