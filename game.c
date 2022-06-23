#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int number, guess, nguesses=1;
    srand(time(0));
    number = rand ()%100 +1; // Generates a random number between 1 to 100
    printf("The Number is %d\n");
    // Keep Running the loop untill the number is guessed
    do{ 
        printf("Guess The Number Between 1 to 100\n");
        scanf("%d", &guess);
        if(guess>number){
            printf("Lower Number Please!\n");
        }
        else if (guess < number){
        printf("Higher Number Please!\n");

        }
        else{
        printf("You Guessed It in %d Attempts\n", nguesses);
        }                                  
         nguesses++;
    }while(guess!=number);

     return 0;
    


}
   
