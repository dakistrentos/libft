/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putendl_fd.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: Vtrentos <Vtrentos@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/17 10:48:46 by Vtrentos      #+#    #+#                 */
/*   Updated: 2020/12/10 13:49:29 by Vtrentos      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	char nl;

	if (!s)
		return ;
	nl = '\n';
	write(fd, s, ft_strlen(s));
	write(fd, &nl, 1);
}
