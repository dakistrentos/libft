/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: Vtrentos <Vtrentos@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/03 07:48:29 by Vtrentos      #+#    #+#                 */
/*   Updated: 2020/12/27 20:31:54 by Vtrentos      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *str;
	unsigned char c2;

	str = (unsigned char *)s;
	c2 = (unsigned char)c;
	while (n > 0)
	{
		if (*str == c2)
			return (str);
		str++;
		n--;
	}
	return (NULL);
}
