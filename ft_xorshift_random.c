#include "libvec.h"

/* XOR-Shift Random Number Generator */
int	xorshift_random(int seed)
{
	seed ^= seed >> 17;
	seed ^= seed << 5;
	seed ^= seed << 13;
	return seed;
}
