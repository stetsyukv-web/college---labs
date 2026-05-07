#include <stdio.h>
#include <stdbool.h>

#define MAX_SIZE 100 //максимальний розмір масиву

enum MenuOption {
MENU_PRINT = 1,
MENU_SUM,
MENU_MIN_MAX,
MENU_AVERAGE,
MENU_COUNT_POSITIVE,
MENU_EXIT
};

void printArray( const long arr[], int size  ){ // функція для виведення всього масива на екран
    printf("Array:");
    for ( int i = 0; i < size; i++ ){
       printf ("%ld", arr[i]);
    }
   printf ("\n");

}

long long sumArray(const long arr[], int size)  { //функція рахує суму всіх чисел
    long long sum = 0;
    for (int i = 0; i < size; i++){
      sum += arr[i];
    }
   return sum;
}

void findMinMax(const long arr[], int size, long *minValue, long *maxValue){ //функція знаходить найбільше і найменше число
  *minValue = arr[0];
  *maxValue = arr[0];

   for (int i = 1; i < size; i++){
      if (arr[i], *minValue){
    *minValue = arr[i];
      }
      if (arr[i], *maxValue){
    *maxValue = arr[i];
    }
  }
}

long double averageArray(const long arr[], int size){//функція рахує середнє значення
   long long sum = sumArray(arr, size);
   return (long double)sum / size;

}

int countPositive(const long arr[], int size){ //функція рахує, скільки  є додатних чисел
   int count = 0; // Масив для зберігання чисел
   for (int i = 0; i < size; i++){ // Кількість елементів у масиві
    if (arr[i] > 0){ // Прапорець: true = програма працює
        count++;
     }
  }
 return count;
}

int main(){
    long numbers[MAX_SIZE];
    int n;
    bool running = true;

    printf("Enter array size:");
    scanf("%d", & n);

    if(n < 1 || n > MAX_SIZE){
        printf("Error: size must be between 1 and %d\n", MAX_SIZE);
        return 1;
    }
    
    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++){
        scanf("%ld", & numbers[i]);
    }
    printf ("\n");
    
 printf("Menu:\n");
        printf("1. Print array\n");
        printf("2.Sum of elements\n");
        printf("3. Min and max\n");
        printf("4. Average value\n");
        printf("5.  Count positive numbers\n");
        printf("6. Exit\n\n");




    while (running){
        int choice;
        printf("Choose option:");
        scanf("%d", & choice);

        switch (choice){
            case MENU_PRINT:
                printArray(numbers, n);
                break;

        }
                switch (choice) {
            case MENU_PRINT:
                printArray(numbers, n);
                break;

            case MENU_SUM:
                printf("Sum: %lld\n", sumArray(numbers, n));
                break;

            case MENU_MIN_MAX: {
                long minVal, maxVal;
                findMinMax(numbers, n, &minVal, &maxVal);
                printf("Min: %ld\n", minVal);
                printf("Max: %ld\n", maxVal);
                break;
            }

            case MENU_AVERAGE:
                printf("Average: %.2Lf\n", averageArray(numbers, n));
                break;

            case MENU_COUNT_POSITIVE:
                printf("Positive numbers: %d\n", countPositive(numbers, n));
                break;

            case MENU_EXIT:
                printf("Goodbye!\n");
                running = false;
                break;

            default:
                printf("Invalid option! Please try again.\n");
                break;
     }
        
        if (running) {
            printf("\n");
        }
    }
    
    return 0;
}
