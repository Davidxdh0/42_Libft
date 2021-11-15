/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memccpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: dyeboa <dyeboa@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/26 15:07:53 by dyeboa        #+#    #+#                 */
/*   Updated: 2021/11/04 14:58:09 by dyeboa        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	long unsigned int	i;
	unsigned char		*new_dst;
	unsigned char		*new_src;

	i = 0;
	new_dst = (unsigned char *)dst;
	new_src = (unsigned char *)src;
	while (i < n)
	{
		new_dst[i] = new_src[i];
		if (new_src[i] == (unsigned char)c)
			return ((void *)dst + i + 1);
		i++;
	}
	return (NULL);
}
