/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: dyeboa <dyeboa@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/04/16 16:01:58 by dyeboa        #+#    #+#                 */
/*   Updated: 2023/10/04 00:29:26 by dyeboa        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdlib.h>
#include <string.h>

static int	delim(const char *s, char c)
{
	int		countwords;
	int		i;
	int		j;

	countwords = 0;
	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != c && j == 0)
		{
			countwords++;
			j = 1;
		}
		if (s[i] == c && j == 1)
			j = 0;
		i++;
	}
	return (countwords);
}

static	int	ft_strlenarray(char *s, char c)
{
	int	i;

	i = 0;
	while (s[i] != c && s[i] != '\0')
		i++;
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	if (!s && s[0] != '\0')
		return (NULL);
	k = delim((char *)s, c);
	str = (char **)malloc(sizeof(char *) * (delim(s, c) + 1));
	if (!str)
		return (NULL);
	while (k--)
	{
		while (*s == c && *s != '\0')
			s++;
		str[j] = ft_substr((char *)s, 0, ft_strlenarray((char *)s, c));
		s += ft_strlenarray((char *)s, c);
		j++;
	}
	str[j] = NULL;
	return (str);
}
