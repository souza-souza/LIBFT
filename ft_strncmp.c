/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andede-s <andede-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 08:36:32 by andede-s          #+#    #+#             */
/*   Updated: 2026/05/30 16:59:12 by andede-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str, const char *stg, size_t num)
{
	size_t	i;

	i = 0;
	while ((str[i] || stg[i]) && i < num)
	{
		if (str[i] != stg[i])
			return ((unsigned char)str[i] - (unsigned char)stg[i]);
		i++;
	}
	return (0);
}
