#ifndef LIBFT_H
#define LIBFT_H

# include <stdio.h>
# include <stdlib.h>


typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;




int	ft_isdigit(int );
int ft_isalpha(unsigned char c);
int ft_strncmp(const char *s1, const char *s2, size_t n);
size_t ft_strlen(const char *str);
void ft_bzero(void *s, size_t n);
char *ft_strdup(const char *s);
char *ft_substr(char const *s, unsigned int start, size_t len);
t_list *ft_lstnew(void *content);
void ft_lstdelone(t_list *lst, void (*del)(void *));
void ft_lstadd_back(t_list **lst, t_list *new);
void ft_lstclear(t_list **lst, void (*del)(void *));

#endif