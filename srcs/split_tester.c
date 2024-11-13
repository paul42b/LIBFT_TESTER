/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split_tester.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbuchter <pbuchter@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 16:16:46 by pbuchter          #+#    #+#             */
/*   Updated: 2024/11/13 16:42:19 by pbuchter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	split_tester(void)
{
	char	**result;
	int		err_flag;

	err_flag = 0;
	result = ft_split(" aABCD a", 'a');
	if (strcmp(result[0]," ") != 0)
		err_flag = 1;
	if (strcmp(result[1], "ABCD ") != 0)
		err_flag = 1;
	if (result[2] != NULL)
		err_flag = 1;
	free(result[0]);
	free(result[1]);
	free(result);
	if (err_flag)
		return (0);
	return (1);
}
