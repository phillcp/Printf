/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiheaton <fiheaton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 21:54:08 by marvin            #+#    #+#             */
/*   Updated: 2024/05/14 13:55:57 by fiheaton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <limits.h>
# include <stdio.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}				t_list;

/*
**				Part 1
*/

int				ft_atoi(const char *str);
void			ft_bzero(void *s, size_t n);
void			*ft_calloc(size_t nmemb, size_t size);
int				ft_isalnum(int c);
int				ft_isalpha(int c);
int				ft_isascii(int c);
int				ft_isdigit(int c);
int				ft_isprint(int c);
void			*ft_memccpy(void *dst, const void *src, int c, size_t n);
void			*ft_memchr(const void *str, int c, size_t n);
int				ft_memcmp(const void *str1, const void *str2, size_t n);
void			*ft_memcpy(void *dst, const void *src, size_t n);
void			*ft_memmove(void *str1, const void *str2, size_t n);
void			*ft_memset(void *str, int c, size_t n);
char			*ft_strchr(const char *s, int c);
char			*ft_strdup(const char *s1);
void			ft_striteri(char *s, void (*f)(unsigned int, char *));
size_t			ft_strlcat(char *dest, const char *src, size_t size);
size_t			ft_strlcpy(char *dst, const char *src, size_t size);
size_t			ft_strlen(const char *str);
int				ft_strncmp(const char *s1, const char *s2, unsigned int n);
char			*ft_strnstr(const char *hay, const char *needle, size_t len);
char			*ft_strrchr(const char *s, int c);
int				ft_tolower(int c);
int				ft_toupper(int c);

/*
**				Part 2
*/

char			*ft_substr(char const *s, unsigned int start, size_t len);
char			*ft_strjoin(char const *s1, char const *s2);
char			*ft_strtrim(char const *s1, char const *set);
char			**ft_split(char const *s, char c);
char			*ft_itoa(int n);
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void			ft_putchar_fd(char c, int fd);
void			ft_putstr_fd(char *s, int fd);
void			ft_putendl_fd(char *s, int fd);
void			ft_putnbr_fd(int n, int fd);

/*
**				Bonus
*/

void			ft_lstadd_back(t_list **lst, t_list *new);
void			ft_lstadd_front(t_list **lst, t_list *new);
void			ft_lstclear(t_list **lst, void (*del)(void*));
void			ft_lstdelone(t_list *lst, void (*del)(void*));
void			ft_lstiter(t_list *lst, void (*f)(void *));
t_list			*ft_lstlast(t_list *lst);
t_list			*ft_lstmap(t_list *lst, void *(*f)(void *), \
void (*del)(void *));
t_list			*ft_lstnew(void *content);
int				ft_lstsize(t_list *lst);

/*
**				Additional
*/

int				ft_islower_bonus(int c);
int				ft_isnegative_bonus(int n);
int				ft_isspace_bonus(int c);
int				ft_isupper_bonus(int c);
void			*ft_memfiteme_bonus(void *coisa, size_t nmemb, size_t size);
size_t			ft_mkterny_bonus(size_t check, size_t elseret);
int				ft_numlength_bonus(int n);
void			ft_putchar(char c);
char			*ft_strtok_bonus(char *str, const char *delim);

#endif
