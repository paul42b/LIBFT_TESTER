/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoa_tester.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbuchter <pbuchter@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 16:44:36 by pbuchter          #+#    #+#             */
/*   Updated: 2024/11/13 16:52:29 by pbuchter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	itoa_tester(void)
{
	if (strcmp(ft_itoa(0),"0") != 0 || strcmp(ft_itoa(-234), "-234") != 0)
		return (0);
	return (1);
}
