/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat_tester.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbuchter <pbuchter@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 14:51:54 by pbuchter          #+#    #+#             */
/*   Updated: 2024/11/13 15:08:54 by pbuchter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"
#include <stdio.h>
#include <string.h>

int	strlcat_tester(void)
{
	char	src[5] = "AAAA";
	char	dst[20] = "BB";
	size_t	ret;

	ret = ft_strlcat(dst, src, sizeof(dst));
	if (ret == 6 && strcmp(dst, "BBAAAA") == 0)
		return (1);
	return (0);
}
