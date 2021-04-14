/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: dyeboa <dyeboa@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/04/09 12:00:59 by dyeboa        #+#    #+#                 */
/*   Updated: 2021/04/09 12:03:24 by dyeboa        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	len_src;
	size_t	len_dest;

	len_dest = ft_strlen(dest);
	len_src = ft_strlen(src);
	i = len_dest;
	j = 0;
	if (dstsize == 0)
		return (len_src);
	if (dstsize < len_dest)
		return (dstsize + len_src);
	while (src[j] && (len_dest + j) < dstsize)
			dest[i++] = src[j++];
		if ((len_dest + j) == dstsize && dstsize > len_dest)
			dest[--i] = '\0';
		else
			dest[i] = '\0';
		return (len_src + len_dest);
}
