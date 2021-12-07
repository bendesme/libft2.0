/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ben <Ben@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 16:41:07 by bedesmet          #+#    #+#             */
/*   Updated: 2021/12/07 10:37:39 by Ben              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	l;
	int		a;
	int		b;

	if (n <= 0)
		return (0);
	l = 0;
	while (l < n - 1 && s1[l] && s2[l])
	{
		if (s1[l] != s2[l])
			return ((unsigned char)(s1[l]) - (unsigned char)(s2[l]));
		l++;
	}
	a = s1[l];
	b = s2[l];
	if (a < 0)
		a = a * -1;
	if (b < 0)
		b = b * -1;
	return (a - b);
}
