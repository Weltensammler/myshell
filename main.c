/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschende <bschende@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 12:04:32 by ben               #+#    #+#             */
/*   Updated: 2022/05/25 15:21:12 by bschende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "myshell.h"

int	main()
{
	t_data	data;
	char	*temp;

	getcwd(data.cwd, sizeof(data.cwd));
	while (1)
	{
		temp = ft_strjoin(data.cwd, ": ");
		data.input = readline(temp);
		free(temp);
		scanner(&data);
	}
}

void scanner(t_data *data)
{
	int		i;
	char	**tasks;

	i = 0;
	tasks = ft_split(data->input, ' ');
	while (tasks[i])
	{
		if (!ft_strncmp(tasks[i], "echo", 4))
		{
			printf("%s\n", tasks[i + 1]);
			if (!tasks[i + 2])
				break ;
			else
				i += 2;
		}
		i++;
	}
}