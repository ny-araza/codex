#include <stdio.h>
#include "parse.h"
#include "process.h"

int main(int argc, char **argv)
{
	t_config	config;

	if (ft_parse(argc, argv, &config) == 1)
		ft_process(&config);
	return (0);
}
