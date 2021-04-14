/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnstr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: david <david@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/15 14:43:01 by david         #+#    #+#                 */
/*   Updated: 2021/04/14 16:44:26 by yeboa         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (little[i] == '\0')
		return ((char *)big);
	while (big[i] != '\0')
	{
		while ((big[i + j] == little[j]) && big[i + j] != '\0')
		{
			if (len == i + j)
				return (NULL);
			if (little[j + 1] == '\0')
				return ((char *)&big[i]);
			j++;
		}
		if (len == i)
			return (NULL);
		j = 0;
		i++;
	}
	return (0);
}
