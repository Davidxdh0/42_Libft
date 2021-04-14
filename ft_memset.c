/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memset.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: dyeboa <dyeboa@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/26 14:28:57 by dyeboa        #+#    #+#                 */
/*   Updated: 2020/10/26 16:10:33 by dyeboa        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t n)
{
	int				i;
	unsigned char	*newb;

	newb = (unsigned char *)b;
	i = 0;
	while (n-- > 0)
		newb[i++] = (unsigned char)c;
	return (b);
}
