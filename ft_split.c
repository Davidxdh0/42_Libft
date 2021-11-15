/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: dyeboa <dyeboa@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/04/16 16:01:58 by dyeboa        #+#    #+#                 */
/*   Updated: 2021/11/15 15:54:25 by dyeboa        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	delim(const char *s, char c)
{
	int		count;
	int		i;

	count = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
			count++;
		else
			break ;
		++i;
	}
	return (count);
}

static	char	*filler(const char *s, size_t n)
{
	char	*str;
	size_t	i;

	i = 0;
	str = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!str)
		return (NULL);
	while (s[i] && i < n)
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	str = (char **)malloc(sizeof(char *) * (delim(s, c) + 1));
	if (!(str))
		return (str);
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] == '\0')
			break ;
		k = i;
		while (s[i] && s[i] != c)
			i++;
		if (i > k)
		{
			str[j] = filler(s + k, i - k);
			if (!str[j])
				return (NULL);
			j++;
		}
	}
	str[delim(s, c)] = (NULL);
	return (str);
}
