/* ************************************************************************** */
/*																			*/
/*														::::::::			*/
/*   libft.h											:+:	:+:			*/
/*													 +:+					*/
/*   By: dyeboa <dyeboa@student.codam.nl>			 +#+					 */
/*												   +#+					  */
/*   Created: 2020/10/26 15:50:48 by dyeboa		#+#	#+#				 */
/*   Updated: 2023/03/08 09:03:17 by dyeboa		########   odam.nl		 */
/*																			*/
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <unistd.h>
# include <stddef.h>

typedef struct node
{
	int			i;
	int			index;
	struct node	*previous;
	struct node	*next;
}	t_stack;

int			ft_atoi_base(char *str, char *base);
int			ft_atoi(const char *str);
long int	ft_atol(const char *str);
void		ft_bzero(void *s, size_t n);
int			ft_isalnum(int c);
int			ft_isalpha(int c);
int			ft_isascii(int c);
int			ft_isdigit(int c);
int			ft_isprint(int c);
int			ft_isspace(int c);
char		*ft_itoa(int n);
void		ft_putchar_fd(char c, int fd);
void		ft_putnbr_fd(int n, int fd);
void		*ft_memcpy(void *dst, const void *src, size_t n);
void		*ft_memset(void *b, int c, size_t n);
void		ft_putnbr_fd(int n, int fd);
size_t		ft_strlcat(char	*dest, const char *src, size_t dstsize);
size_t		ft_strlen(const char *s);
void		ft_putstr_fd(char *s, int fd);
void		ft_putendl_fd(char *s, int fd);
int			ft_strncmp(const char *str1, const char *str2, size_t n);
char		*ft_strnstr(const char *big, const char *little, size_t len);
char		*ft_strstr(const char *str, const char *to_find);
int			ft_tolower(int c);
int			ft_toupper(int c);
char		*ft_strrchr(const char *s, int c);
void		*ft_calloc(size_t count, size_t size);
char		*ft_strdup(const char *s1);
size_t		ft_strlcpy(char *dest, const char *src, size_t size);
char		*ft_strchr(const char *s, int c);
void		*ft_memchr(const void *s, int c, size_t n);
int			ft_memcmp(const void *s1, const void *s2, size_t n);
void		*ft_memmove(void *dest, const void *src, size_t n);
char		*ft_substr(char const *s, unsigned int start, size_t len);
char		*ft_strjoin(char const *s1, char const *s2);
char		*ft_strtrim(char const *s1, char const *set);
char		**ft_split(char const *s, char c);
char		*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void		ft_striteri(char *s, void (*f)(unsigned int, char*));

void		listadd_back(t_stack **stack, t_stack *current);
t_stack		*list_last(t_stack *stack);
t_stack		*list_new(int num);
int			list_len(t_stack *stack);
#endif
