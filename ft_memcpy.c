/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bedesmet <bedesmet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 16:39:52 by bedesmet          #+#    #+#             */
/*   Updated: 2021/11/05 17:51:31 by bedesmet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void *dest, const void *src, unsigned int n)
{
	int	i;

	i = 0;
	while (i < n && src && dest)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
