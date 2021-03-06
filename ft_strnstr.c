/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ben <Ben@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 16:41:15 by bedesmet          #+#    #+#             */
/*   Updated: 2021/12/07 10:07:05 by Ben              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *substr, size_t len)
{
	size_t	a;
	size_t	b;

	if (!ft_strlen(substr))
		return ((char *)str);
	a = 0;
	while (str[a] && a < len)
	{
		b = 0;
		while (substr[b] && str[a + b] && substr[b] == str[a + b]
			&& (a + b) < len)
			b++;
		if (!substr[b])
			return ((char *)&str[a]);
		a++;
	}
	return (0);
}
