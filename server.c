/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmontani <tmontani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 17:24:35 by tmontani          #+#    #+#             */
/*   Updated: 2024/04/26 10:29:57 by tmontani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

int	ft_recursive(int number, int power)
{
	int	total;

	if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	else
	{
		total = number * ft_recursive(number, power - 1);
		return (total);
	}
}

char	*octet_to_letter(char const *s1, char const letter)
{
	int		i;
	int		j;
	char	*tab;

	i = 0;
	j = 0;
	tab = malloc((ft_strlen(s1) + 2) * sizeof(char));
	if (!tab)
		return (NULL);
	while (s1[i])
		tab[j++] = s1[i++];
	i = 0;
	tab[j++] = letter;
	tab[j] = 0;
	free ((void *)(s1));
	return (tab);
}

void	signal_handler(int signum)
{
	static int	count = 0;
	static int	octet = 0;
	static char	*message;

	if (!message)
		message = ft_strdup("");
	if (signum == SIGUSR1)
		octet = octet + 0;
	else if (signum == SIGUSR2)
		octet = octet + (1 * ft_recursive(2, 7 - count));
	count++;
	if (count == 8)
	{
		message = octet_to_letter(message, octet);
		if (octet == '\0')
		{
			ft_printf("%s\n", message);
			message = NULL;
		}
		count = 0;
		octet = 0;
	}
}

int	main(void)
{
	struct sigaction	signal_received;

	ft_printf("Server pid: %d\n", getpid());
	signal_received.sa_handler = signal_handler;
	signal_received.sa_flags = 0;
	sigaction(SIGUSR1, &signal_received, NULL);
	sigaction(SIGUSR2, &signal_received, NULL);
	while (1)
		usleep(50);
}
