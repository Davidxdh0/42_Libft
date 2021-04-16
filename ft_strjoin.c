/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strjoin.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: dyeboa <dyeboa@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/04/16 14:26:29 by dyeboa        #+#    #+#                 */
/*   Updated: 2021/04/16 15:36:13 by dyeboa        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		size;
	int		i;

	i = 0;
	size = ft_strlen((char *)s1) + ft_strlen((char *)s2);
	str = (char *) malloc(((sizeof(char)) * size) + 2);
	if (!str)
		return (NULL);
	if (str)
	{
		if (s1 != NULL)
			ft_strlcpy(str, s1, (ft_strlen(s1) + 1));
		while (s2[i])
		{
			str[(ft_strlen(s1) + i)] = s2[i];
			i++;
		}
		str[((ft_strlen(s1)) + (ft_strlen(s2)))] = '\0';
		return (str);
	}
	return (NULL);
}
