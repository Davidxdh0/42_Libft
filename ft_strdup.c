/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: dyeboa <dyeboa@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/04/02 16:53:31 by dyeboa        #+#    #+#                 */
/*   Updated: 2021/04/09 11:19:33 by dyeboa        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*copy;
	int		i;

    i = ft_strlen(s1);
    copy = malloc(sizeof(char) * (i + 1));
    if (copy == 0)
        return (0);
    while (*s1 != 0 && *copy != 0)
    {
        copy[i] = s1[i];
        i++;
    }
    return (copy);
}
