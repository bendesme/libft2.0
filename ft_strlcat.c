/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bedesmet <bedesmet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 16:40:33 by bedesmet          #+#    #+#             */
/*   Updated: 2021/11/05 17:58:08 by bedesmet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	strlcat(char *dst, const char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	c;
	unsigned int	len;

	len = 0;
	i = 0;
	c = 0;
	while (src[len])
		len++;
	while (dst[i])
		i++;
	if (len >= size)
		return (size + i);
	while (dst[i] && src[c])
		dst[i++] = src[c++];
	dst[i] = '\0';
	return (i + len);
}
