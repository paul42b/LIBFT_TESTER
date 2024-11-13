/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcpy_tester.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbuchter <pbuchter@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 14:32:03 by pbuchter          #+#    #+#             */
/*   Updated: 2024/11/13 14:43:54 by pbuchter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"
#include <stdio.h>
#include <string.h>

int	strlcpy_tester(void)
{
	char	src[5] = "AAAA";
	char	dst[5];
	size_t	result;

	result = ft_strlcpy(dst, src, sizeof(dst));
	if (result == strlen(src) && strcmp(src, dst) == 0)
		return (1);
	return (0);
}
