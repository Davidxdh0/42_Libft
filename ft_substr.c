/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_substr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: dyeboa <dyeboa@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/04/16 12:28:53 by dyeboa        #+#    #+#                 */
/*   Updated: 2022/01/24 17:51:29 by dyeboa        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*substring;
	unsigned int	i;

	i = 0;
	if (!s)
		return (NULL);
	substring = (char *) malloc(sizeof(char) * (len + 1));
	if (!substring)
		return (NULL);
	if (ft_strlen(s) < (size_t)start)
	{
		return (ft_strdup(""));
	}
	while (s[start] && i < len)
	{
		substring[i] = s[start];
		i++;
		start++;
	}
	substring[i] = '\0';
	return (substring);
}
