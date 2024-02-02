#include "libvec.h"

/*Returns a random vector within a radius of 1.
For a better distribution of samples make this a unit vector.*/
t_vec	rand_in_unit_sphere(int seed)
{
	t_vec	rand_vec;

	while (1)
	{
		rand_vec = random_vector((unsigned int)seed);
		seed = xorshift_random(seed);
		if (length_squared(rand_vec) < 1)
			return (normalize_vector(rand_vec));
	}
}