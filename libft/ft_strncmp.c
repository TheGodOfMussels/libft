/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimolin2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 16:05:30 by dimolin2          #+#    #+#             */
/*   Updated: 2022/10/05 16:05:33 by dimolin2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;
	int				r;

	i = 0;
	while (i <= n - 1)
	{
		if (s1[i] == s2[i])
		{
			r = 0;
			i++;
		}
		if (s1[i] > s2[i])
		{
			r = 1;
			break ;
		}
		else
		{
			r = -1;
			break ;
		}
	}
	return (r);
}
