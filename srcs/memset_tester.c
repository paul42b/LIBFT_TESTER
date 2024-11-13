/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset_tester.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbuchter <pbuchter@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 13:33:04 by pbuchter          #+#    #+#             */
/*   Updated: 2024/11/13 13:39:54 by pbuchter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"
#include <stdio.h>
#include <string.h>

int	memset_tester(void)
{
	char	original[20];
	char	custom[20];
	int		i = 0;

	memset(original, 'A', 20);
	memset(custom, 'A', 20);
	memset(original, 'B', 10);
	ft_memset(custom, 'B', 10);
	while (i < 20)
	{
		if (original[i] != custom[i])
		{
			return 0;
		}
		i++;
	}
	return 1;
}
