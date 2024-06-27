#include <stdio.h>
#include <math.h>

#define H 100

void bookworm ( int Mat [][H], int sizeN )
{
    for ( int i = 0; i < sizeN; i++ )
        for ( int j = 0; j < sizeN; j++ )
        {
            printf(" Mat[%d][%d] = ", i, j);
            scanf("%d", &Mat[i][j]);
        }
}

void transpose ( int Mat [][H], int sizeN )
{
    for ( int i = 0; i < sizeN; i++)
        for ( int j = i + 1; j < sizeN; j++ )
            Mat [i][j] = Mat [i][j] + Mat [j][i] - ( Mat [j][i] = Mat [i][j] );
}

void display ( int Mat [][H], int sizeN )
{
    for ( int i = 0; i < sizeN; i++ )
    {
        for ( int j = 0; j < sizeN; j++ )
            printf(" %d\t", Mat[i][j]);
            
        printf("\n");
    }
}

int main()
{
    int sizeN, Mat[H][H];
    
    printf(" enter array size\n N = ");
    scanf("%d", &sizeN);
    
    puts(" enter now your matrix's elements:" );
    bookworm ( Mat, sizeN );
    
    puts (" matrix before transposing:");
    display( Mat, sizeN );
    
    puts (" matrix after transposing:");
    transpose( Mat, sizeN );
    display( Mat, sizeN );
    
    return 0;
}
