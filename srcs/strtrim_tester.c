/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strtrim_tester.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbuchter <pbuchter@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 16:10:01 by pbuchter          #+#    #+#             */
/*   Updated: 2024/11/13 16:14:31 by pbuchter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	strtrim_tester(void)
{
	char	*str0;
	char	*str1;
	char	*str2;
	int		err_flag;

	err_flag = 0;
	str0 = ft_strtrim(" aABa CD a", " a");
	str1 = ft_strtrim("", "a");
	str2 = ft_strtrim("A", "");
	if (strcmp(str0, "ABa CD") != 0)
		err_flag = 1;
	if (strcmp(str1, "") != 0)
		err_flag = 1;
	if (strcmp(str2, "A") != 0)
		err_flag = 1;
	free (str0);
	free (str1);
	free (str2);
	if (err_flag)
		return (0);
	return (1);
}
