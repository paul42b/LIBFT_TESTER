/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strjoin_tester.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbuchter <pbuchter@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 16:04:28 by pbuchter          #+#    #+#             */
/*   Updated: 2024/11/13 16:08:09 by pbuchter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	strjoin_tester(void)
{
	char	*result;
	int		flag;

	flag = 0;
	result = ft_strjoin("ABCD", "EFGH");
	if (strcmp(result, "ABCDEFGH") != 0)
		flag = 1;
	free (result);
	if (flag)
		return (0);
	return (1);
}
