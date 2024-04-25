/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmontani <tmontani@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 17:22:14 by tmontani          #+#    #+#             */
/*   Updated: 2024/04/25 09:27:28 by tmontani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	send_sig(int server_pid, char *message)
{
	
	//fonction pour encrypter le signal et l'envoyer au serveur
	
}
int	main(int argc, char **argv)
{
	int	server_pid;
	char	*message;

	server_pid = 0;
	if (argc == 3)
	{
		server_pid = atoi(argv[1]);
		if (!server_pid)
		{
			printf("pid Error");
			return (1);
		}
		message = argv[2];
		if (message[0] == 0)
		{
			printf("no message");
			return (1);
		}
		send_sig(server_pid, message);
	}
	else
		printf("wrong amount of arguments\n");
	return (0);
}
//arguments argv[1] = PID argv[2] = message
