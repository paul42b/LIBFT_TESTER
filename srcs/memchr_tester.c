/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memchr_tester.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbuchter <pbuchter@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 13:42:17 by pbuchter          #+#    #+#             */
/*   Updated: 2024/11/13 13:49:14 by pbuchter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"
#include <stdio.h>
#include <string.h>

int	memchr_tester(void)
{
	char	src[10];

	memset(src, 'a', 4);
	memset(src + 3, 'b', 2);
	if (ft_memchr(src, 'b', 4) == memchr(src, 'b', 4 ) && ft_memchr(src, 'c', 25) == memchr(src, 'c', 25 ))
		return (1);
	else
		return (0);
}
