/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: Vtrentos <Vtrentos@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/07 08:24:08 by Vtrentos      #+#    #+#                 */
/*   Updated: 2020/12/27 20:33:09 by Vtrentos      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t destlen;
	size_t srclen;
	size_t n;

	destlen = ft_strlen(dest);
	srclen = ft_strlen(src);
	n = size;
	if (size <= destlen)
		return (size + srclen);
	while (*dest && n != 0)
	{
		dest++;
		n--;
	}
	ft_strlcpy(dest, (char *)src, (size - destlen));
	return ((destlen + srclen));
}
