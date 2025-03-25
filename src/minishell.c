/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akumari <akumari@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 12:12:13 by akumari           #+#    #+#             */
/*   Updated: 2025/03/25 13:37:55 by akumari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/minishell.h"

int	main(int argc, char *argv[], char **envp)
{
	t_mini mini;
	init_env(&mini, envp);

	if(argc > 1)
	{
		if (ft_strncmp(argv[1], "pwd", 3) == 0)
			ft_pwd();
		else if (ft_strncmp(argv[1], "env", 3) == 0)
			ft_env(&mini);
		else
			printf("Command %s not found\n", argv[1]);
	}
	return (0);
}

// void print_env_list(t_env *env) 
// {
//     while (env) 
// 	{
// 		printf("Key: %s, Value: %s\n", env->key, env->value);
//         env = env->next;
//     }
// }	//print_env_list(mini.env);