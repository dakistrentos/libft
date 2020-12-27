/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: Vtrentos <Vtrentos@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/04 20:42:52 by Vtrentos      #+#    #+#                 */
/*   Updated: 2020/12/10 13:33:36 by Vtrentos      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int len;

	len = ft_strlen(s);
	while (len >= 0)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
		len--;
	}
	return (NULL);
}
