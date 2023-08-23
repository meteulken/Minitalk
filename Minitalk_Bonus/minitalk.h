#ifndef MINITALK_H
# define MINITALK_H

# include <signal.h>
# include <unistd.h>
#include <stdlib.h>
# include "./ft_printf/ft_printf.h"

int ft_atoi(const char *str); // ft_atoi'nin prototipi düzeltildi
void ft_bit_write(int x, siginfo_t *info); // void *s kaldırıldı
void ft_signal_control(int x, siginfo_t *info, void *context); // void *s kaldırıldı
void ft_send_signal(int pid, char *str);

#endif
