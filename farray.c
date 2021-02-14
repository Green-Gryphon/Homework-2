#include <stdio.h> 
#include <stdlib.h>
#include "float_array.h"

void mallocate(farray *array, int size) {
	array->data = (float *) malloc(size * sizeof(float));
	array->size = size;
}

void callocate(farray *array, int size) {
        array->data = (float *) calloc(size, sizeof(float));
        array->size = size;
}

int set_value ( farray *array, int index, float value) {
	if(index>=array->size)
	{
		printf("The index is out of bounds\n");
                return-1.0;
	}
        else
       	{
		*(array->data+index) = value;
                return 0;
	}
}


float access_value(farray *array, int index) {
	if(index>=array->size)
	{
                printf("The index is out of bounds\n");
		return-1.0;
	}
	else
	{
		return *(array->data+index);
	}
}

void print_farray(farray *array){
	for ( int i = 0; i<array->size; i++)
	{
		printf( "%f ", *(array->data+i));
	}
	printf("\n");

}

void free_farray(farray *array) {
	free(array->data);
}

