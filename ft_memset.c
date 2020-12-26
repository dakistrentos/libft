/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memset.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: Vtrentos <Vtrentos@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/31 10:05:46 by Vtrentos      #+#    #+#                 */
/*   Updated: 2020/12/10 13:35:53 by Vtrentos      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char *str1;

	str1 = b;
	while (len > 0)
	{
		*str1 = c;
		str1++;
		len--;
	}
	return (b);
}
