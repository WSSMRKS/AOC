/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wssmrks <wssmrks@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 00:13:47 by wssmrks           #+#    #+#             */
/*   Updated: 2024/12/06 00:35:34 by wssmrks          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "01.h"


int	main(void)
{
	int			fd;
	t_nb_list	*list;
	t_nb_list	*curr;
	char		*line;
	
	list = ft_calloc(sizeof(t_nb_list), 1);
	curr = (list)->next;
	fd = open("input", O_RDONLY);
	line = ft_get_next_line(fd);
	while (line)
	{
		curr->content = ft_split(line, ' ');
		ft_printf("nb1: %d, nb2: %d", curr->content[0], curr->content[1]);
		free(line);
		line = ft_get_next_line(fd);
		curr->next = ft_calloc(sizeof(t_nb_list ), 1);
		curr = curr->next;
	}
	return (0);
}