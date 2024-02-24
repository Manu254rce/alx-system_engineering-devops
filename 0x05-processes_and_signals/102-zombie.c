# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <sys/types.h>

/**
 * infinite_while - function that infinitely runs until SIGTERM
 * Return: 0 on Success
 */

int infinite_while(void)
{
	while (1)
	{
		sleep(1);
	}
	return (0);
}

/**
 * zombies - function that creates zombie processes
 */

void zombies(void)
{
	while (1)
	{
		pid_t pid = fork();

		if (pid == 0)
		{
			printf("Zombie process created, PID: %d\n", getpid());
			_exit(0);
		}

		sleep(1);
	}
	infinite_while();
}
