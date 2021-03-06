/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ben <Ben@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 16:38:01 by bedesmet          #+#    #+#             */
/*   Updated: 2021/12/07 17:34:28 by Ben              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char 	*tmp;

	i = 0;
	tmp = (char *)s;
	while (s && i < n)
	{
		tmp[i] = '\0';
		i++;
	}
}
