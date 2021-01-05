/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlen.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: vtrentos <vtrentos@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/01 10:31:30 by Vtrentos      #+#    #+#                 */
/*   Updated: 2021/01/05 19:53:18 by Vtrentos      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t i;

	i = 0;
	while (*s != '\0')
	{
		s++;
		i++;
	}
	return (i);
}
