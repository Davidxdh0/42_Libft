/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcmp.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: dyeboa <dyeboa@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/04/09 15:41:30 by dyeboa        #+#    #+#                 */
/*   Updated: 2021/04/14 16:25:07 by yeboa         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t i;
	char *chars1;
	char *chars2;

	i = 0;
	chars1 = (char *)s1;
	chars2 = (char *)s2;
	//if (chars1[i] == "" && chars2[i] == "")
	 //	return (0);
	while (chars1[i] == chars2[i] && i < n)
	{
		i++;
		if (chars1[i] != chars2[i])
			return (chars1[i] - chars2[i]);
	}
	return (0);
}

// DESCRIPTION
//      The memcmp() function compares byte string s1 against byte string s2.  Both strings are assumed to be n bytes long.

// RETURN VALUES
//      The memcmp() function returns zero if the two strings are identical, otherwise returns the difference between the first two differing bytes (treated as unsigned char values,
//      so that `\200' is greater than `\0', for example).  Zero-length strings are always identical.  This behavior is not required by C and portable code should only depend on the
//      sign of the returned value.