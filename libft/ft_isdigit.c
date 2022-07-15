/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaderric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 16:14:37 by gaderric          #+#    #+#             */
/*   Updated: 2021/10/09 16:24:39 by gaderric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	int	start;
	int	end;

	start = 48;
	end = 57;
	if (c >= start && c <= end)
		return (1);
	else
		return (0);
}