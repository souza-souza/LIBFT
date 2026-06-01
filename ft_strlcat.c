/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andede-s <andede-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 11:21:42 by andede-s          #+#    #+#             */
/*   Updated: 2026/06/01 13:31:58 by andede-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *str, size_t size)
{
	size_t	i;
	size_t	len_dest;
	size_t	len_str;

	i = 0;
	len_dest = 0;
	len_str = 0;
	while (dest[len_dest])
		len_dest++;
	while (str[len_str])
		len_str++;
	if (size <= len_dest)
		return (size + len_str);
	while (str[i] && (len_dest + i) < (size - 1))
	{
		dest[len_dest + i] = str[i];
		i++;
	}
	dest[len_dest + i] = '\0';
	return (len_str + len_dest);
}
