/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_ascii_tester.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbuchter <pbuchter@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 12:34:01 by pbuchter          #+#    #+#             */
/*   Updated: 2024/11/13 12:36:07 by pbuchter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"
#include <stdio.h>

int	is_ascii_tester(void)
{
	// Test1

	if(!ft_isascii(128) && ft_isascii(127) && ft_isascii(0))
		return (1);
	else
		return (0);
}
