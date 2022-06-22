#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>


int main() {
    // Random Setup
    time_t t;
    srand((unsigned) time(&t));

    // Int values we will work with
    int cor_num = rand() % 100;
    int guess = 100;

    // prints correct_value
    printf("%d",cor_num);
    printf(" solving...\n ");

    /*
     *guess >= cor_num-2 && guess <= cor_num+2
     */
    while(guess != cor_num) {
        if(guess >= cor_num-2 && guess <= cor_num+2){
            break;
        }else{
            if (guess < cor_num) {
                guess = guess + (guess / 2);
            } else if (guess > cor_num) {
                guess = guess / 2;
            }
        }
    }
    printf("%d\n",guess);
    return 0;
}