/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmontani <tmontani@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 17:24:35 by tmontani          #+#    #+#             */
/*   Updated: 2024/04/25 09:27:26 by tmontani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"


int main(void)
{
    struct sigaction	signal_ok;

    printf("server pid: %d\n", getpid());
    signal_ok.sa_handler = signal_handler;
    signal_ok.sa_flags = 0;
    sigaction(SIGUSR1, &signal_ok, NULL);
    sigaction(SIGUSR2, &signal_ok, NULL);
    while (1)
    {
        usleep(50);
    }
}