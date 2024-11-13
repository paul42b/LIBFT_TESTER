/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   toupper_tester.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbuchter <pbuchter@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 12:47:11 by pbuchter          #+#    #+#             */
/*   Updated: 2024/11/13 12:52:22 by pbuchter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"
#include <stdio.h>

int	toupper_tester(void)
{
	int	error;

	error = 0;
	if(ft_toupper('a') != 'A')
		error = 1;

	if(ft_toupper('z') != 'Z')
		error = 1;

	if(ft_toupper('Z') != 'Z')
		error = 1;

	if (error)
		return (0);
	else
		return (1);
}
