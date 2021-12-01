/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ben <Ben@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 16:39:22 by bedesmet          #+#    #+#             */
/*   Updated: 2021/12/02 00:15:57 by Ben              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, unsigned int n)
{
	char			*tmp;
	unsigned int	i;

	if (n <= 0)
		return (0);
	i = 0;
	tmp = (char *)s;
	while (i < n)
	{
		if (tmp[i] == (char)c)
			return (&tmp[i]);
		i++;
	}
	return (0);
}
