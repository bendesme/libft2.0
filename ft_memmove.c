/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bedesmet <bedesmet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 16:40:02 by bedesmet          #+#    #+#             */
/*   Updated: 2021/11/05 17:57:41 by bedesmet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
