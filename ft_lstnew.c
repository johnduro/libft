/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-roy <mle-roy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/10 18:18:32 by mle-roy           #+#    #+#             */
/*   Updated: 2013/12/10 18:23:21 by mle-roy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

t_list		*ft_lstnew(void const *content, size_t content_size)
{
	t_list		*ret;

	if ((ret = (t_list *) malloc(sizeof(*ret))) == NULL)
		return (NULL);
	if (content == NULL)
	{
		ret->content = NULL;
		ret->content_size = 0;
	}
	else if ((ret->content = ft_memdup(content, content_size)) == NULL)
	{
		free(ret);
		return (NULL);
	}
	else
		ret->content_size = content_size;
	ret->next = NULL;
	return (ret);
}
