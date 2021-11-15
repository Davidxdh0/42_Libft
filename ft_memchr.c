/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: dyeboa <dyeboa@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/04/09 15:04:13 by dyeboa        #+#    #+#                 */
/*   Updated: 2021/11/04 14:55:16 by dyeboa        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*charstring;

	i = 0;
	charstring = (char *)s;
	while (i < n)
	{
		if (c == charstring[i])
			return ((void *)s + i);
		i++;
	}
	return (0);
}
