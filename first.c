
#include "stdio.h"


main(int argc, char** argv)
{
	if (argc!=2)
	{
		printf("error \n");
		return 0;
	}
	
	int input=atoi(argv[1]);
	
	if (input % 2 == 0)
	{
		printf("even \n");
	}
	else if (input % 2 != 0)
	{
		printf("odd \n");
	}

	
	return 0;
}

