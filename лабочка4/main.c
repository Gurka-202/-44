
#include <stdio.h>
#include <stdlib.h>



void fill_int_array( unsigned int * uiptr, unsigned int size_of_array );
void fill_float_array( float * fptr, unsigned int size_of_array );

void print_int_array( const unsigned int * uiptr, unsigned int size_of_array );
void print_float_array( const float * fptr, unsigned int size_of_array);

unsigned int sum ( const  unsigned int * uiptr, unsigned int size_of_array );
double product( const float * fptr, unsigned int size_of_array );

double mean_value(const unsigned int * A, unsigned int Size );
unsigned int find_min(const unsigned int * A, unsigned int Size );
float find_max(const float * B, unsigned int Size );

int main()
{
    unsigned int * A;
    float * B;

    unsigned int Size;
    unsigned int amount;
    double mult;
    double  average_value;
    unsigned int min_value;
    float max_value;

    printf("Enter size of array: ");
    scanf("%u", &Size);

    A = (unsigned int *) calloc (Size, sizeof(unsigned int) );

    B = (float *) malloc (Size * sizeof(float) );


    if( A == NULL  ||  B == NULL ){
        printf("Memory has not been allocated");
        exit(0);
    }

    fill_int_array( A, Size );
    fill_float_array( B, Size );

    print_int_array( A, Size );
    print_float_array( B, Size );



    amount = sum( A, Size );
    mult = product( B, Size );



    printf("\n\nSum = %u", amount);
    printf("\nProduct = %.3lf", mult);
    printf("\nAvarage = %lf", mean_value);
    printf("\nMin(A) = %u",find_min );
    printf("\nMax(B) = %f",find_max );
    free(A);
    free(B);

    return 0;
}



void fill_int_array( unsigned int * A, unsigned int Size )
{
     unsigned int j;
     unsigned int temp;

     printf("\n\nEnter values of UNSIGNED INT elements of array.\n");

     for( j = 0;  j <= Size-1;  j++ ){
         printf("A[%u]= ", j);
         scanf("%u", &temp);
         A[j] = temp;
     }
}



void fill_float_array( float * B, unsigned int Size )
{
     unsigned int j;
     float temp;

     printf("\n\nEnter values of FLOAT elements of array.\n");

     for( j = 0;  j <= Size-1;  j++ ){
         printf("B[%u]= ", j);
         scanf("%f", &temp);
         B[j] = temp;
     }
}




void print_int_array( const unsigned int * A, unsigned int Size )
{
     unsigned int j;

     printf("\n\nArray of UNSIGNED INT values:\n");

     for( j = 0;  j < Size;  j++ )
        printf("%5d", A[j] );

}



void print_float_array( const float * B, unsigned int Size )
{
     unsigned int j;

     printf("\n\nArray of FLOAT values:\n");

     for( j = 0;  j < Size;  j++ )
        printf("%7.2f", B[j] );

}





unsigned int sum (const  unsigned int * A, unsigned int Size )
{
     unsigned int j, S;


     S = 0;

     for( j = 0;  j < Size;  j++ )
        S += A[j];

     return S;
}





double product(const float * B, unsigned int Size )
{
      unsigned int j;
      double M;

      M = 1.0;

      for( j = 0;  j < Size;  j++ )
        M *= B[j];

      return M;
}



double mean_value(const unsigned int * A, unsigned int Size )
{

    unsigned int j, S, l;

    l=1;
    for( j = 1;  j < Size;  j++ )
    l=S/j;
    return l;
}

unsigned int find_min(const unsigned int * A, unsigned int Size )
{
    int temp_min = A[0];
    unsigned int j, S;

    for(j = 1;  j <= S-1;   j++){
        if( A[j] < temp_min ){
            temp_min = A[j];
            printf("\ntemp_min=%d", temp_min);

        }
    }


    return temp_min;
}

float find_max(const float * B, unsigned int Size )
{
     int temp_max = B[0];
    unsigned int j, S;

    for(j = 1;  j <= S-1;   j++){
        if( B[j] > temp_max ){
            temp_max = B[j];

        }
    }


    return temp_max;
}
