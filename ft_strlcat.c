/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ben <Ben@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 16:40:33 by bedesmet          #+#    #+#             */
/*   Updated: 2021/12/07 10:39:22 by Ben              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	a;
	size_t	b;
	size_t	c;

	b = 0;
	a = 0;
	c = 0;
	while (dest[a])
		a++;
	while (src[c])
		c++;
	if (size <= a)
		c = c + size;
	else
		c = c + a;
	while (src[b] && a + 1 < size)
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (c);
}
