/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isalpha.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: david <david@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/18 14:54:27 by david         #+#    #+#                 */
/*   Updated: 2021/08/26 12:08:19 by Dun           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}
