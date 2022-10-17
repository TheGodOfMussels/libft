/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimolin2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 18:36:18 by dimolin2          #+#    #+#             */
/*   Updated: 2022/10/05 18:36:20 by dimolin2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	n;

	if (*little == '\0')
		return ((char *) big);
	n = ft_strlen(little);
	while (*big && len-- >= n)
	{
		if (*big == *little && ft_strncmp(big, little, n))
			return ((char *) big);
		big++;
	}
	return (0);
}
