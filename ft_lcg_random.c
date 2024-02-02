#include "libvec.h"

/* Linear Congruential Generator (LCG) Random Number Generator */
int	lcg_random(unsigned int seed)
{
	const unsigned int multiplier = 1664525;
	const unsigned int increment = 1013904227;

	return (int)(multiplier * seed + increment);
}
