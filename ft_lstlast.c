/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstlast.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: Vtrentos <Vtrentos@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/13 17:12:33 by Vtrentos      #+#    #+#                 */
/*   Updated: 2020/12/13 17:15:03 by Vtrentos      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list *lst2;

	lst2 = lst;
	if (!lst)
		return (NULL);
	while (lst2->next != NULL)
		lst2 = lst2->next;
	return (lst2);
}
