/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tolower_tester.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbuchter <pbuchter@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 12:47:08 by pbuchter          #+#    #+#             */
/*   Updated: 2024/11/13 12:49:35 by pbuchter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"
#include <stdio.h>

int	tolower_tester(void)
{
	int	error;

	error = 0;
	if(ft_tolower('A') != 'a')
		error = 1;

	if(ft_tolower('Z') != 'z')
		error = 1;

	if(ft_tolower('a') != 'a')
		error = 1;

	if (error)
		return (0);
	else
		return (1);
}
