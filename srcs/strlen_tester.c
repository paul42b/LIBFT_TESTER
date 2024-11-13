/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlen_tester.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbuchter <pbuchter@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 12:42:23 by pbuchter          #+#    #+#             */
/*   Updated: 2024/11/13 12:45:32 by pbuchter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"
#include <stdio.h>

int	strlen_tester(void)
{
	int	error;

	error = 0;
	if(ft_strlen("") != 0)
		error = 1;

	if(ft_strlen("a") != 1)
		error = 1;

	if(ft_strlen("abcdef") != 6)
		error = 1;

	if (error)
		return (0);
	else
		return (1);
}
