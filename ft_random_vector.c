#include "libvec.h"

/*Returns a random vector [0;999].*/
t_vec	random_vector(unsigned int seed)
{
	t_vec	result;
	int		random;

	random = xorshift_random(seed);
	result.x = random % 1000;
	random = lcg_random(seed + 1);
	result.y = random % 1000 ;
	random = xslcg_random(seed + 2);
	result.z = random % 1000;
	result.x /= 1000;
	result.y /= 1000;
	result.z /= 1000;
	return (result);
}
