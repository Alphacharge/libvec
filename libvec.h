/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libvec.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbetz <rbetz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 11:33:22 by rbetz             #+#    #+#             */
/*   Updated: 2024/02/02 11:28:28 by rbetz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBVEC_H
# define LIBVEC_H

# include <stdio.h>
# include <math.h>

typedef struct s_vector
{
	double	x;
	double	y;
	double	z;
}			t_vec;

t_vec	add_vectors(t_vec v1, t_vec v2);
t_vec	subtract_vectors(t_vec v1, t_vec v2);
t_vec	multiply_vectors(t_vec v1, t_vec v2);

t_vec	multiply_vector_by_scalar(t_vec v1, double scalar);
t_vec	divide_vector_by_scalar(t_vec v1, double scalar);

double	dot_product(t_vec v1, t_vec v2);
t_vec	cross_product(t_vec v1, t_vec v2);

t_vec	normalize_vector(t_vec v1);
t_vec	random_vector(unsigned int seed);
t_vec	random_vector_in_unit_sphere(int seed);
t_vec	random_vector_in_hemisphere(int seed, t_vec normal);

t_vec	new_vector(double x, double y, double z);
t_vec	invert_vector(t_vec vec);
double	length_vector(t_vec v1);
double	length_squared(t_vec vector);
void	print_vector(t_vec vector);

int		lcg_random(unsigned int seed);
int		xorshift_random(int seed);
int		xslcg_random(unsigned int seed);

#endif
