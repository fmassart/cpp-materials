#include <iostream>
#include <sys/time.h>
#include <stdio.h>

double gettimemillis(void)
{
	    struct timeval tv;
	    gettimeofday(&tv, NULL);
	    return (double) (tv.tv_sec) * 1000 + (tv.tv_usec) / 1000;
}

int main()
{
	    std::cout << "Date" << std::endl;
	    printf("timestamp : %f \n", gettimemillis());
}
