#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void sortingNumbers(int a[], int size);
int selectNumber(void);

int main(void){

    size_t i;
    size_t size;


    printf("Welcome to number sorting program...\n"
           "Program selects several numbers ramdomly that you'll decide the count of numbers\n"
           "Please enter how many numbers you want to sort: ");
    scanf("%u",&size);

    int numbers[size];

    printf("\nProgram selects %d numbers randomly...\n\n", size);

    for(i = 0; i < size; i++){
        numbers[i] = selectNumber();
    }
    puts("\nOriginal number order is:\n");

    for(i = 0; i < size; i++){
        printf("%3d", numbers[i]);
    }

    sortingNumbers(numbers, size);

    puts("\n\nAscending number order is:\n");
    for(i = 0; i < size; i++){
        printf("%3d", numbers[i]);
    }

}

void sortingNumbers(int a[], int size){
    int pass;
    size_t i;
    int hold;

    for(pass = 1; pass < size; pass++){
        for(i = 0; i < size - 1; i++){
            if(a[i] > a[i+1]){
                hold = a[i];
                a[i] = a[i+1];
                a[i+1] = hold;
            }
        }
    }
}

int selectNumber(void){

    int number = 1 + (rand() % 100);
    return number;
}
