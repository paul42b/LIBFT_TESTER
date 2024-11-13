/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncmp_tester.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbuchter <pbuchter@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 13:22:19 by pbuchter          #+#    #+#             */
/*   Updated: 2024/11/13 13:32:11 by pbuchter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"
#include <stdio.h>
#include <string.h>

int	strncmp_tester(void)
{
	if(strncmp("", "", 5) == ft_strncmp("", "", 5) && strncmp("a","b", 0) == ft_strncmp("a", "b", 0)
		&& strncmp("abc","abd", 3) == ft_strncmp("abc", "abd", 3))
		return (1);
	else
		return (0);
}
