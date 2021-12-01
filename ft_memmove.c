/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ben <Ben@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 15:40:34 by Ben               #+#    #+#             */
/*   Updated: 2021/12/02 00:17:03 by Ben              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	int		i;
	char	*tmp;

	i = 0;
	while (i < n && src)
	{
		tmp[i] = src[i];
		i++;
	}
	i = 0;
	while (i < n && dest)
	{
		dest[i] = tmp[i];
		i++;
	}
	return (dest);
}
