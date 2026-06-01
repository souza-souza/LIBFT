/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andede-s <andede-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/11 15:16:22 by andede-s          #+#    #+#             */
/*   Updated: 2026/05/28 13:14:29 by andede-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	void	*ptr;

	if (size != 0 && num > __SIZE_MAX__ / size)
		return (0);
	ptr = malloc(num * size);
	if (!ptr)
		return (0);
	ft_bzero (ptr, (num * size));
	return (ptr);
}
