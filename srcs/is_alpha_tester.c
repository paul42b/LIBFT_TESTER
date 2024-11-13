/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_alpha_tester.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbuchter <pbuchter@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 12:09:30 by pbuchter          #+#    #+#             */
/*   Updated: 2024/11/13 12:27:55 by pbuchter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"
#include <stdio.h>

int	is_alpha_tester(void)
{
	// Test1

	if(ft_isalpha('a') && ft_isalpha('Z') && !ft_isalpha('0'))
		return (1);
	else
		return (0);
}
