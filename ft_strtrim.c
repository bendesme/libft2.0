/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ben <Ben@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 10:07:35 by Ben               #+#    #+#             */
/*   Updated: 2021/12/07 10:07:39 by Ben              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_in_set(char const *set, char c)
{
	int	i;

	if (!set)
		return (0);
	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	ft_while(int i, int k, char *res, char const *s1)
{
	res[k] = s1[i + k];
	k++;
	return (k);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		k;
	char	*res;

	k = 1;
	if (!s1)
		return (0);
	i = 0;
	while (is_in_set(set, s1[i]))
		i++;
	j = ft_strlen(s1) - 1;
	while (j >= 0 && is_in_set(set, s1[j]))
		j--;
	if (j >= i)
		k = j - i + 2;
	res = (char *)malloc(k * sizeof(char));
	if (!res)
		return (0);
	k = 0;
	while (s1[i + k] && i + k < j + 1)
		k = ft_while(i, k, res, s1);
	res[k] = '\0';
	return (res);
}
