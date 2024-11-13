/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstmap_tester.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbuchter <pbuchter@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 17:23:32 by pbuchter          #+#    #+#             */
/*   Updated: 2024/11/13 17:40:34 by pbuchter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../../libft.h"
#include <string.h>
#include <stdlib.h>

void	*doubleup(void *content)
{
	*(int *)content *= 2;
	return (content);
}

void	del(void *content)
{
	(void)content;
}

int	lstmap_tester(void)
{
	t_list	*head;
	t_list	*second;
	t_list	*new;
	int 	value1 = 1;
	int		value2 = 2;
	int		value1n;
	int		value2n;
	int		err_flag;

	err_flag = 1;
	head = ft_lstnew(&value1);
	second = ft_lstnew(&value2);

	ft_lstadd_back(&head, second);
	new = ft_lstmap(head, &doubleup, del);
	value1n = *(int *)new->content;
	value2n = *(int *)new->next->content;
	if (value1n != 2 || value2n != 4)
		err_flag = 0;
	ft_lstclear(&head, del);
	ft_lstclear(&new, del);
	return (err_flag);
}
