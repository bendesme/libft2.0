/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ben <Ben@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 16:40:45 by bedesmet          #+#    #+#             */
/*   Updated: 2021/12/07 10:38:42 by Ben              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	a;
	size_t	b;

	a = 0;
	b = 0;
	if (!src || !dst)
		return (0);
	while (src[b])
		b++;
	if (size == 0)
		return (b);
	while (a + 1 < size && src[a])
	{
		dst[a] = src[a];
		a++;
	}
	dst[a] = '\0';
	return (b);
}
