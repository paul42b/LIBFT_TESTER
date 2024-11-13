/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strchr_tester.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbuchter <pbuchter@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 12:53:15 by pbuchter          #+#    #+#             */
/*   Updated: 2024/11/13 13:18:16 by pbuchter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"
#include <stdio.h>
#include <string.h>

int	strchr_tester(void)
{
	const char	str[] = "Hello, world!";
	char		c = '!';
	int			position;
	char		*result;

	result = ft_strchr(str, c);
	position = result - str;
	if(position == 12 && ft_strchr("", 'a') == strchr("", 'a')
		&& ft_strchr(" ", 'a') == strchr(" ", 'a') && ft_strchr(" ", ' ') == strchr(" ", ' '))
		return (1);
	else
		return (0);
}


