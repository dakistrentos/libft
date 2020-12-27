/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstnew.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: Vtrentos <Vtrentos@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/13 16:38:14 by Vtrentos      #+#    #+#                 */
/*   Updated: 2020/12/13 16:46:22 by Vtrentos      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list *nelem;

	nelem = malloc(sizeof(t_list));
	if (!nelem)
		return (NULL);
	nelem->content = content;
	nelem->next = NULL;
	return (nelem);
}
