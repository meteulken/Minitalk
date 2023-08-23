#include "minitalk.h"

#include <stdio.h>
#include <signal.h>
#include <unistd.h>

void ft_bit_write(int x, siginfo_t *info)
{
    static int bit = 7;
    static int set = 0;

    set += (x << bit);
    if (bit == 0)
    {
        write(1, &set, 1);
        bit = 7;
        set = 0;
        kill(info->si_pid, SIGUSR2);
    }
    else
        bit--;
}

void ft_signal_control(int x, siginfo_t *info, void *context)
{
    if (x == SIGUSR1)
        ft_bit_write(1, info);
    else
    {
        ft_bit_write(0, info);
        (void)context;
    }
}


int main(void)
{
    int pid;
    struct sigaction sig;

    pid = getpid();
    printf("Pid--> %d\n", pid);

    sig.sa_sigaction = ft_signal_control;
    sigemptyset(&sig.sa_mask);
    sig.sa_flags = SA_SIGINFO;

    sigaction(SIGUSR1, &sig, NULL);
    sigaction(SIGUSR2, &sig, NULL);

    while (1)
        pause();

    return (0);
}
