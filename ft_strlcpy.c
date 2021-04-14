/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: dyeboa <dyeboa@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/04/09 12:00:48 by dyeboa        #+#    #+#                 */
/*   Updated: 2021/04/14 13:44:17 by yeboa         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	len_src;
	//size_t	len_dest;

	//len_dest = ft_strlen(dest);
	len_src = ft_strlen(src);
	i = 0;
	if (size == 0)
		return (len_src);
	while (src[i] && (i < size) && i < len_src)
		{
			dest[i] = src[i];
			i++;
			if (i == size)
			{
				dest[--i] = '\0';
				return (len_src);
			}
		}

		if ( i < size)
			dest[i] = '\0';
	return (len_src);
}
