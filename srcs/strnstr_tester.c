/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strnstr_tester.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbuchter <pbuchter@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 14:45:00 by pbuchter          #+#    #+#             */
/*   Updated: 2024/11/13 14:49:55 by pbuchter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"
#include <stdio.h>
#include <string.h>

int	strnstr_tester(void)
{
	if (ft_strnstr("ABC", "BC", 3) && !ft_strnstr("ABC", "BC", 2)
		&& !ft_strnstr("ABC", "BC", 1))
		return (1);
	return (0);


}
