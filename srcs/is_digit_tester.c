/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_digit_tester.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbuchter <pbuchter@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 12:29:27 by pbuchter          #+#    #+#             */
/*   Updated: 2024/11/13 12:30:06 by pbuchter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"
#include <stdio.h>

int	is_digit_tester(void)
{
	// Test1

	if(!ft_isdigit('a') && !ft_isdigit('Z') && ft_isdigit('0'))
		return (1);
	else
		return (0);
}
