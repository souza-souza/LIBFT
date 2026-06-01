/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andede-s <andede-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/11 15:16:22 by andede-s          #+#    #+#             */
/*   Updated: 2026/05/30 16:02:30 by andede-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *str, int num)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)str;
	while (num > 0)
	{
		*ptr = 0;
		ptr++;
		num--;
	}
}
