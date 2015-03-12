#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// http://codegolf.stackexchange.com/questions/47562/digit-sum-of-powers-in-bases

/* Test Data:
	2 5 10 => 1 2 4 4 4 4 4 4 8 8
	3 2 20 => 1 2 2 3 4 5 6 6 6 8 9 10 11 11 13 14 14 14 15 17
	5 6 1 => 1
	6 6 11 => 1 1 1 1 1 1 1 1 1 1 1
	6 8 20 => 1 6 6 8 8 8 13 13 15 20 22 22 22 27 29 34 34 34 36 41
	8 2 10 => 1 1 1 1 1 1 1 1 1 1
	15 17 18 => 1 15 17 31 31 33 49 49 63 65 81 95 95 95 95 113 127 129
*/

int main(int argc, char* argv[])
{
	int a = atoi(argv[1]), b = atoi(argv[2]), n = atoi(argv[3]);
	return EXIT_SUCCESS;
}
