/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrchr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: david <david@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/18 21:04:07 by david         #+#    #+#                 */
/*   Updated: 2021/11/15 12:32:18 by dyeboa        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = ft_strlen((char *)s);
	if (c == 0)
		return ((char *)s + i);
	while (i-- != 0)
	{
		if (s[i] == (char)c)
			return ((char *)s + i);
	}
	return (0);
}
