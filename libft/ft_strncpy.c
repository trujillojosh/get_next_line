/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrujill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/28 18:16:08 by jtrujill          #+#    #+#             */
/*   Updated: 2016/11/28 18:17:09 by jtrujill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strncpy(char *s1, const char *s2, size_t nb)
{
	size_t	i;

	i = 0;
	while (i < nb)
	{
		if (*s2)
		{
			s1[i] = *s2;
			s2++;
		}
		else
			s1[i] = '\0';
		i++;
	}
	return (s1);
}
