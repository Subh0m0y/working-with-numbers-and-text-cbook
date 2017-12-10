#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>

int main()
{
	int32_t age = 18;
	printf("My age is %" PRId32 "\n", age);
	uint64_t big = 18000000000000000000ULL;
	printf("Big number is %" PRIu64 "\n", big);
	// Display the actual value of the macros on my system
	printf("PRId32 = %s\n", PRId32);
	printf("PRIu64 = %s\n", PRIu64);
	return 0;
}