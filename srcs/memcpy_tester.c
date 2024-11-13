/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy_tester.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbuchter <pbuchter@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 13:56:02 by pbuchter          #+#    #+#             */
/*   Updated: 2024/11/13 14:19:37 by pbuchter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"
#include <stdio.h>
#include <string.h>

int	memcpy_tester(void)
{
	char	str[20];
	char	dst[20];

	memset(str, 'a', 5);
	memset(dst, 'b', 20);
	ft_memcpy(dst, str, 5);

	if (dst[4] == 'a')
		return (1);
	else
		return (0);
}
