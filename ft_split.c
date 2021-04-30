/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: dyeboa <dyeboa@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/04/16 16:01:58 by dyeboa        #+#    #+#                 */
/*   Updated: 2021/04/23 12:20:26 by dyeboa        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
¬
char **ft_split(char const *s, char c)
{
	char	**str
	int		i;
	int		j;
	int		k;

	i == 0;
	j == 0;ß
	if (s == 0)
		return (0);
	str = malloc ((delim(char *s, char c) + 1) * sizeof(char *)); 
	// count hoeveel delimiters
	// bij 0, wat dan?
	if (str == 0)
		return (0);
	while (s[i] != '\0')
	{
		//array vullen
		while (ft_strchr(charset, s[i] != 0) && s[i] != '\0')
			i++;
		if ()
	}
}

int		delim(char *s, char c)
{
	int		count;
	int		i;

	count = 0;
	i = 0;
	while (!ft_strchr(str, c))
	{
		if (s[i] == c)
			if (s[i + 1] != c)
				count++;
		i++;
	}
}
/*
Parameters #1. The string to be split.
#2. The delimiter character.
Return value The array of new strings resulting from the split.
NULL if the allocation fails.
External functs. malloc, free
Description Allocates (with malloc(3)) and returns an array
of strings obtained by splitting ’s’ using the
character ’c’ as a delimiter. The array must be
ended by a NULL pointer.

	elk occurence opslaan in een array en weghalen? uit de string, 
	of nieuwe string maken zonder dat deel van de string.
	start en eind bijhouden
	dan die substring in een array zetten.
	array eindigen met '\0'
 */

