/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andede-s <andede-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 11:47:01 by andede-s          #+#    #+#             */
/*   Updated: 2026/05/30 17:54:05 by andede-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *str, size_t num)
{
	unsigned char		*ptr;
	const unsigned char	*pnc;
	size_t				i;

	if (!dest && !str)
		return (NULL);
	ptr = (unsigned char *)dest;
	pnc = (unsigned char *)str;
	i = 0;
	while (i < num)
	{
		ptr[i] = pnc[i];
		i++;
	}
	return (dest);
}
