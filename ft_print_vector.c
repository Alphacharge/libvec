#include "libvec.h"

/*prints the vector values as XYZ*/
void	print_vector(t_vec vector)
{
	printf("(%.5f|%.5f|%.5f)\n", vector.x, vector.y, vector.z);
}
