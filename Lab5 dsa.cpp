#include <iostream>
using namespace std;

void selectionSort(int a[], int n) {
	
   int i, j, min, temp;
   
   for (i = 0; i < n - 1; i++) {
   	
      min = i;
      for (j = i + 1; j < n; j++)
      if (a[j] < a[min])
      min = j;
      temp = a[i];
      a[i] = a[min];
      a[min] = temp;
      
   }
}
int main() {
	
   int a[] = { 4, 2, 0, 3, 4, 0, 4, 1, 2, 1, 3 };
   int n = sizeof(a)/ sizeof(a[0]);
   int i;
   cout<<"array before sorting: "<< "[";
   for (i = 0; i < n; i++)
   cout<< a[i] << " ";
   cout<< "]" ;
   selectionSort(a, n);
   cout<<"\narray after sorting : "<< "[";
   for (i = 0; i < n; i++)
   cout<< a[i] <<" ";
   cout<< "]";
   return 0;
   
}

