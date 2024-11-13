/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strdup_tester.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbuchter <pbuchter@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 15:24:32 by pbuchter          #+#    #+#             */
/*   Updated: 2024/11/13 15:43:02 by pbuchter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	strdup_tester(void)
{
	char	*result;

	result = ft_strdup("ABCD");
	if (!result)
		return (0);
	if(result[3] == 'D')
	{
		free(result);
		return (1);
	}
	else
	{
		free(result);
		return (0);
	}
}
