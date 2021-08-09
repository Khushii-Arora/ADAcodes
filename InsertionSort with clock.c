

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press Run button to compile and execute it.



#include stdio.h 
#include time.h 
#include math.h

 

void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i  n; i++) {
        key = arr[i];
        j = i - 1;
 
       
        while (j = 0 && arr[j]  key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}
 
void printArray(int arr[], int n)
{
    int i;
    for (i = 0; i  n; i++)
        printf(%d , arr[i]);
    printf(n);
}
 
int main()
{
    printf(Khushi AroranCSE3cn);
     clock_t t; 

    t = clock(); 
    int arr[] = { 100, 1, 72, 30, 28 };
    int n = sizeof(arr)  sizeof(arr[0]);
 
    insertionSort(arr, n);
    printArray(arr, n);
    
    t = clock() - t; 

    double time_taken = ((double)t)CLOCKS_PER_SEC; 

   

    printf( %f seconds taken to executen, time_taken); 
 
    return 0;
}
   

