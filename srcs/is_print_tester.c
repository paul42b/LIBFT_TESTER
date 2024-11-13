/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_print_tester                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbuchter <pbuchter@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 12:38:02 by pbuchter          #+#    #+#             */
/*   Updated: 2024/11/13 12:39:12 by pbuchter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"
#include <stdio.h>

int	is_print_tester(void)
{
	// Test1

	if(!ft_isprint(31) && ft_isprint(32)
		&& ft_isprint(126) && !ft_isprint(127))
		return (1);
	else
		return (0);
}
