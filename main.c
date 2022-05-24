/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ben <ben@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 12:04:32 by ben               #+#    #+#             */
/*   Updated: 2022/05/24 12:32:24 by ben              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "myshell.h"
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>

int	main(int argc, char **argv)
{
	char	*cmd;

	while (1)
	{
		print_promt1();
		cmd = read_cmd();
		if (!cmd)
			exit(EXIT_SUCCESS);
		if (!cmd[0] || strcmp(cmd, "\n") == 0)
		{
			free(cmd);
			continue ;
		}
		if (strcmp(cmd, "exit\n") == 0)
		{
			free(cmd);
			break ;
		}
		printf("%s\n", cmd);
		free(cmd);
	}
	exit(EXIT_SUCCESS);
}
