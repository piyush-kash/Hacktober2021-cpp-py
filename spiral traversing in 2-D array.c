#include <stdio.h>

void main()
{
    int a[4][4] = {1,2,3,4,5,6,7,8,9,0,11,12,13,14,15,16};
    int row_s = 0 , row_e = 3 , col_s = 0 , col_e = 3;
    int i;
    
    
        while (row_e != 1 && col_e != 1) 
        {
    
        for(i = col_s ; i <= col_e ; i++) //Traversing in the horizontal direction from left to right
        {
            printf ("%d ", a[row_s][i]);
        }
        for(i = row_s+1 ; i <= row_e ; i++) //Traversing in the vertical direction from up to down
        {
            printf ("%d ", a[i][col_e]);
        }
        row_s += 1; //The row_s is updated so we will stop at one row below the starting one
        for(i = col_e - 1 ; i >= col_s ; i--) //Traversing in the horizontal direction from right to left
        {
            printf ("%d ", a[row_e][i]);
        }
       
        for(i = row_e - 1 ; i >= row_s ; i--) //Traversing in the vertical direction from down to up
        {
            printf ("%d ", a[i][col_s]);
        }
        col_s += 1; //col_s is updated so that we start in the inner loop
        row_e -= 1; // row_e is updated so that we stop in the inner loop only
        col_e -= 1; //col_e is updated so that we stop in the inner loop only
        }
}
