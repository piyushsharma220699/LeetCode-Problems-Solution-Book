#include <iostream>

using namespace std;

void swap(int* a, int* b)
{
   int temp = *a;
   *a = *b;
   *b = temp;
}

int divide (int array[], int first_index, int last_index)
{
   int pivot = array[last_index];   
   int i = (first_index - 1); 
   for (int j = first_index; j <= last_index- 1; j++)
   {
       if (array[j] <= pivot)
       {
           i++;    
           swap(&array[i], &array[j]);
       }
   }
   swap(&array[i + 1], &array[last_index]);
   return (i + 1);
}

void quickSort(int array[], int first_index, int last_index)
{
   if (first_index < last_index)
   {
	   int divide_index = divide(array, first_index, last_index);
       quickSort(array, first_index, divide_index - 1);
       quickSort(array, divide_index + 1, last_index);
   }
}

void display(int array[], int number)
{
   int i;
   cout<<"Sorted Array: ";
   for (i = 0; i < number; i++) 
       cout << array[i] << " "; 
   cout << endl;
}
  
int main()
{
   int arr[30], i, n;
   cout<<"Enter the number of elements:"; 
   cin>>n;
   cout<<"Enter the elements: ";
   for(i=0;i<n;i++) 
   { 
   		cin>>arr[i];
   }
   quickSort(arr, 0, n-1);
   display(arr, n);
   return 0;
}
