/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrchr_tester.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbuchter <pbuchter@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 13:19:55 by pbuchter          #+#    #+#             */
/*   Updated: 2024/11/13 13:20:38 by pbuchter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"
#include <stdio.h>
#include <string.h>

int	strrchr_tester(void)
{
	const char	str[] = "Hello, world!";
	char		c = 'H';
	int			position;
	char		*result;

	result = ft_strrchr(str, c);
	position = result - str;
	if(position == 0 && ft_strrchr("", 'a') == strrchr("", 'a')
		&& ft_strrchr(" ", 'a') == strrchr(" ", 'a') && ft_strrchr(" ", ' ') == strrchr(" ", ' '))
		return (1);
	else
		return (0);
}
