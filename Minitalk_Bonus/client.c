#include "minitalk.h"

#include <stdio.h>
#include <signal.h>
#include <unistd.h>

static void ft_confirm(int signal)
{
    if (signal == SIGUSR1)
        printf("\033[0;32mQSL!\033[0;32m\n");
    else
        printf("\033[0;32mQSL!\033[0;32m\n");
}

void ft_send_signal(int pid, char *str)
{
    int i;
    unsigned char c;

    while (*str)
    {
        i = 7;
        c = *str++;
        while (i >= 0)
        {
            if ((c >> i) & 1)
                kill(pid, SIGUSR1);
            else
                kill(pid, SIGUSR2);
            usleep(200);
            i--;
        }
    }
}

int main(int argc, char *argv[])
{
    int pid;

    if (argc == 3)
    {
        pid = atoi(argv[1]);
        signal(SIGUSR1, ft_confirm);
        signal(SIGUSR2, ft_confirm);
        ft_send_signal(pid, argv[2]);
        ft_send_signal(pid, "\n");
    }
    else
    {
        printf("\033[91mError: wrong format.\033[0m\n");
        printf("\033[33mTry: ./client_bonus [PID] [MESSAGE]\033[0m\n");
        return (1);
    }

    return (0);
}
