#include <stdio.h>
#include <math.h>

// apuntador: variable cuyo valor es una direccion de memoria
// arreglo: coleccion de datos del mismo tipo ordenados de manera consecutiva en memoria

typedef struct
{
	float x, y;

} vector_2d;

void swap(int *a, int *b);	// cambiar a por b

void square_vector(vector_2d *vector);

int main (void)
{
	vector_2d mi_vector = {5,6.0};

	square_vector(&mi_vector);

	return 0;
}


void swap(int *a, int *b)
{
	int n = *a;
	*a = *b;
	*b = n;

	//printf("%d %d",a,b);

}
void square_vector(vector_2d *vector)
{
	(*vector).x = pow(2,(*vector).x);
	(*vector).y = pow(2,(*vector).y);
}
