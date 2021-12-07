/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ben <Ben@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 16:41:23 by bedesmet          #+#    #+#             */
/*   Updated: 2021/12/07 13:07:14 by Ben              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	l;

	l = 0;
	while (s[l])
		l++;
	if ((char)c == 0)
		return ((char *)&s[l]);
	while (l >= 0)
	{
		if (s[l] == (char)c)
			return ((char *)&s[l]);
		l--;
	}
	return (NULL);
}
