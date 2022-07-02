/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjanette <bjanette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 17:21:25 by bjanette          #+#    #+#             */
/*   Updated: 2022/03/02 17:09:18 by bjanette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

# include	<unistd.h>
# include	<stdio.h>
# include	<stdlib.h>
# include	<fcntl.h>
# include	<stdio.h>

typedef struct s_list
{
	int				content;
	int				score_rb;
	int				score_rrb;
	int				score_ra;
	int				score_rra;
	int				score_rrr;
	int				score_rr;
	int				min;
	struct s_list	*next;
}		t_list;

size_t	ft_strlen(const char *s);
void	*ft_memset(void *s, int a, size_t n);
int		ft_isprint(int c);
int		ft_isdigit(int c);
int		ft_isascii(int c);
int		ft_isalpha(int c);
int		ft_isalnum(int c);
void	ft_bzero(void *b, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t n);
size_t	ft_strlcpy(char *d, const char *s, size_t n);
size_t	ft_strlcat(char *d, const char *s, size_t n);
int		ft_toupper(int c);
int		ft_tolower(int c);
char	*ft_strchr(const	char *s, int c);
char	*ft_strrchr(const	char *s, int c);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
char	*ft_strnstr(const char *b, const char *l, size_t n);
char	*ft_strnstr(const char *b, const char *l, size_t n);
void	*ft_calloc(size_t num, size_t size);
char	*ft_strdup(const char *s);
int		ft_atoi(const char *s);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_itoa(int n);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
char	**ft_split(char const *s, char c);
t_list	*ft_lstnew(int content);
void	ft_lstadd_front(t_list **lst, t_list *new);
int		ft_lstsize(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstdelone(t_list *lst, void (*del)(int));
void	ft_lstclear(t_list **lst, void (*del)(int));
void	ft_lstiter(t_list *lst, void (*f)(int));
t_list	*ft_lstmap(t_list *lst, int (*f)(int), void (*del)(int));
int		ft_n(char *last);
char	*ft_read(int fd, char *buf, char *last, int *bytes);
char	*get_next_line(int fd);
char	*ft_before_n(char *last);
char	*ft_after_n(char *last);
int		ft_union(char *s);
int		ft_strcmp(char *s1, char *s2);

#endif