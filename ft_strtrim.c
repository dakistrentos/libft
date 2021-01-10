/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrim.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: Vtrentos <Vtrentos@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/10 08:08:39 by Vtrentos      #+#    #+#                 */
/*   Updated: 2021/01/10 14:28:37 by Vtrentos      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	char_count_start(char const *str, char const *set, int i, int f)
{
	int	x;

	x = 0;
	while (*str)
	{
		i = 0;
		f = 0;
		while (set[i])
		{
			while (set[i + 1] == set[i])
				i++;
			if (set[i] == *str)
			{
				x++;
				f = 1;
			}
			i++;
		}
		if (f == 0)
			break ;
		str++;
	}
	return (x);
}

static int	char_count_end(char const *str, char const *set, int i, int f)
{
	int	y;

	y = 0;
	while (*str)
	{
		i = 0;
		f = 0;
		while (set[i])
		{
			while (set[i + 1] == set[i])
				i++;
			if (set[i] == *str)
			{
				y++;
				f = 1;
			}
			i++;
		}
		if (f == 0)
			break ;
		str--;
	}
	return (y);
}

static char	*res_do(char const *s1, char const *set)
{
	char	*res;
	char	*str;
	int		startlen;
	int		endlen;
	int		totlen;

	str = (char *)s1;
	startlen = char_count_start(s1, set, 0, 0);
	while (*str)
		str++;
	str--;
	endlen = char_count_end(str, set, 0, 0);
	if (startlen == 0 && endlen == 0)
		return (ft_strdup(s1));
	totlen = ft_strlen(s1) - (startlen + endlen);
	if (totlen <= 0)
		return (ft_strdup(""));
	res = (char *)malloc(totlen + 1);
	if (!res)
		return (NULL);
	ft_memcpy(res, s1 + (startlen), totlen);
	res[totlen] = '\0';
	return (res);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	char *res;

	if (!s1)
		return (NULL);
	if (!set)
		return (NULL);
	res = res_do(s1, set);
	return (res);
}
