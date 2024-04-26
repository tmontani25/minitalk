/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmontani <tmontani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 20:00:55 by tmontani          #+#    #+#             */
/*   Updated: 2024/04/26 10:30:12 by tmontani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <signal.h>
# include <string.h>
# include "./ft_printf/ft_printf.h"

char	*ft_strdup(const char *s);
long	ft_atoi(const char *str);

#endif