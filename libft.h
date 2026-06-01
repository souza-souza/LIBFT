/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andede-s <andede-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 12:36:25 by andede-s          #+#    #+#             */
/*   Updated: 2026/06/01 13:33:05 by andede-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>

typedef struct s_list
{
	void	*content;
	struct s_list	*next;
}	t_list;

//Funções de char

int	ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_isalnum(int c);
int	ft_isascii(int c);
int	ft_isprint(int c);
int	ft_toupper(int c);
int	ft_tolower(int c);

//Funções de str

size_t	ft_strlen(char const *str);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strchr(char const *str, int c);
size_t	ft_strlcpy(char *dest, char const *str, size_t size);
char	*ft_strdup(const char *str);
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
char	*ft_strjoin(char const *s1, char const *s2);
size_t	ft_strlcat(char *dest, const char *str, size_t size);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char c));
int	ft_strncmp(const char *str, const char *stg, size_t num);
char	*ft_strnstr(const char *str, const char *stg, size_t num);
char	*ft_strrchr(char *str, int c);
char	*ft_strtrim(char const *s1, char const *set);

//Funções de mem

void	ft_bzero(void *str, int num);
void	*ft_memcpy(void *dest, const void *str, size_t num);
void	*ft_calloc(size_t num, size_t size);
void	*ft_memchr(const void *str, int c, size_t n);
int	ft_memcmp(const void *str1, const void *str2, size_t n);
void	*ft_memmove(void *dest, const void *str, int num);
int	*ft_memset(void *str, int c, int num);

//Funções extras

int	ft_atoi(const char *str);
char	*ft_itoa(int n);
void	ft_putchar_fd(char c, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr_fd(char *s, int fd);
char	**ft_split(char const *s, char c);

//Funções lst

t_list	*ft_lstnew(void *content);
int	ft_lstsize(t_list *lst);
void	ft_lstclear(t_list **lst, void (*del)(void*));
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstadd_front(t_list **lst, t_list *new);
void	ft_lstiter(t_list *lst, void (*f)(void *));
void	ft_lstdelone(t_list *lst, void (*del)(void*));
t_list	*ft_lstlast(t_list *lst);
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

#endif
