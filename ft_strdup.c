/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: dyeboa <dyeboa@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/04/02 16:53:31 by dyeboa        #+#    #+#                 */
/*   Updated: 2021/04/14 23:56:12 by yeboa         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*copy;
	int		i;

	copy = (char *) malloc(ft_strlen((char *)s1) * (int) sizeof(s1) + 1);
	if (!copy)
		return (NULL);
	while (s1[i] != 0)
	{
		copy[i] = s1[i];
		i++;
	}
	copy[i] = 0;
	return (copy);
}
