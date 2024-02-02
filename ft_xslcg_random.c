#include "libvec.h"

/* Combined Random Number Generator using XOR-Shift and LCG */
int	xslcg_random(unsigned int seed)
{
	return xorshift_random(seed) ^ lcg_random(seed);
}
