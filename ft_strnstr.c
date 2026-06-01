/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andede-s <andede-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 09:07:25 by andede-s          #+#    #+#             */
/*   Updated: 2026/05/30 17:15:18 by andede-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *stg, size_t num)
{
	size_t	i;
	size_t	t;

	if (stg[0] == '\0')
		return ((char *)str);
	i = 0;
	while (i < num && str[i])
	{
		t = 0;
		while ((i + t) < num && str[i + t] == stg[t])
		{
			if (stg[t + 1] == '\0')
				return ((char *)&str[i]);
			t++;
		}
		i++;
	}
	return (0);
}
