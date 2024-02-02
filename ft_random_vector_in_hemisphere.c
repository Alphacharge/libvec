#include "libvec.h"

/*Returns a random vector within a unit hemisphere.*/
t_vec	random_vector_in_hemisphere(int seed, t_vec normal)
{
	t_vec	rand_vec;

	rand_vec = random_vector_in_unit_sphere(seed);
	if (dot_product(rand_vec, normal) > 0.0)
		return (rand_vec);
	else
		return (multiply_vector_by_scalar(rand_vec, -1));
}
