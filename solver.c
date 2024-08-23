#include <stdio.h>
#include <math.h>
#include <stdlib.h>
void CheckVar(int a, int b, int c){
    double x;
    if (a == 0){
        if (b == 0){
            if (c == 0){
                printf("at that case solution will be any number\n");
                 exit (EXIT_SUCCESS);

            }
            else{

              printf("at that case no solution exists\n");
               exit (EXIT_SUCCESS);

            }
        }
        else{
            x = - c/b;
            printf("solution: x = %f\n", x);
             exit (EXIT_SUCCESS);
        }

        }
        else{
            printf("all the values entered are not negative, then the solution will be as follows\n");

        }
    }



void SquareSolver(int a, int b, int c){

    double D, x1, x2, sqrt_D;
    D = b*b - 4*a*c;


    if (D < 0){
        printf("No solutions");

    }
    else if (D == 0){
        x1 = - b / (2 * a);
        printf("x = %f", x1);
    }
    else{
        sqrt_D = sqrt(D);
        x1 = (- b + sqrt_D) / (2 * a);
        x2 = (-b - sqrt_D) / (2 * a);
        printf("x1 = %f, x2 = %f", x1, x2);

    }

}


int main(void){
    int a = 0, b = 0, c = 0;
    printf("square equation solver\n");
    printf("enter a, b, c - coefficients\n");
    scanf("%d %d %d", &a, &b, &c);
    CheckVar(a, b, c);
    SquareSolver(a, b, c);

}

