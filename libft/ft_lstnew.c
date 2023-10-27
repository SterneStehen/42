/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoreron <7353718@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 13:26:38 by smoreron          #+#    #+#             */
/*   Updated: 2023/10/27 13:26:38 by smoreron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_list;

	new_list = (t_list*)malloc(sizeof(t_list))
	if (!new_list)
		return NULL;
	new_list->content = content;
	new_list->next = NULL;
	return (new_list);	
}