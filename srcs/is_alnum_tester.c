/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_alnum_tester.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbuchter <pbuchter@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 12:31:48 by pbuchter          #+#    #+#             */
/*   Updated: 2024/11/13 12:32:47 by pbuchter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"
#include <stdio.h>

int	is_alnum_tester(void)
{
	// Test1

	if(ft_isalnum('a') && ft_isalnum('Z')
		&& ft_isalnum('0') && !ft_isalnum(';'))
		return (1);
	else
		return (0);
}
