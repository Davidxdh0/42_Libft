/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: dyeboa <dyeboa@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/04/16 16:01:58 by dyeboa        #+#    #+#                 */
/*   Updated: 2021/04/16 16:44:01 by dyeboa        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char **ft_split(char const *s, char c)
{
	char	*substr;
	char	**str
	int		i;
	int		eind;
	int		count;
	
	
	**str = s;
	i = 0;
	// count hoeveel delimiters
	while (!ft_strchr(str, c))
	{
		if (s[i] == c)
			count++;
		i++;
	}
	
	*str = substr;
	if (!s || !c)
		return (NULL);
	while (*s1)
	
	woord zonder eerste delimiter
		str = (ft_strchr(s, c))


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