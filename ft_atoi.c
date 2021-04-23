/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: david <david@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/18 15:21:41 by david         #+#    #+#                 */
/*   Updated: 2021/04/23 11:33:25 by dyeboa        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(char *str)
{
	int	i;
	int	minorplus;
	int	number;

	number = 0;
	i = 0;
	minorplus = 1;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == '\r' || str[i] == ' ')
		i++;
	while (str[i] == 45 || str[i] == 43)
	{
		if (str[i] == 45)
			minorplus *= -1;
		i++;
		if (str[i] == 45 || str[i] == 43)
			return (0);
	}
	while (ft_isdigit(str[i]))
	{
		number *= 10;
		number += (str[i] - '0');
		i++;
	}
	return (number * minorplus);
}
