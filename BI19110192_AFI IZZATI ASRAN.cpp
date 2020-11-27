#include <iostream>
using namespace std;

void ChangeIt_1(int n) {
 n = 5; 
} 
void ChangeIt_2(int *n) { 
 *n = 6; 
} 

void ChangeIt_3(int &n) { 
 n = 7; 
} 
int ChangeIt_4(int n) { 
 n = 8;
 return n;
}
 
 //function which will receive the address of x and y as pointer.
 void swap(int* x, int* y){ 
 int z = *x; 
    *x = *y; 
    *y = z; 
 }


//function which it accept the array as pointer.
 double getAverage(int *array, int SIZE);


int main(){
 int *p; //declare p as pointer
 int x=10, y=7, SIZE=5, data[SIZE]={1,3,2,5,4};
 p=&x; //reference of x
 
 ChangeIt_1(x); 
 cout << "ChangeIt_1 : " << *p << endl;
 
 ChangeIt_2(&x);
 cout << "ChangeIt_2 : " << *p << endl;
 
 ChangeIt_3(x);
 cout << "ChangeIt_3 : " << *p << endl;
 
 x = ChangeIt_4(x);
 cout << "ChangeIt_4 : " << *p << endl;
 
 //swap the value of x and y only if x is larger than y.
     
     cout << "\nBefore swap\n";
     x = 10;
     cout << "x = "<< x << " y = " << y << "\n";
    
	if ( x > y ){
	 	
    swap(&x, &y); 
    
    cout << "\nAfter Swap:\n"; 
    cout << "x = " << x << " y = " << y << "\n"; 
    
	} 
	
	double avg;
 
    // pass pointer to the array as an argument.
   avg = getAverage( data, SIZE ) ;
 
   // output the returned value 
   cout << "\nAverage value is: " << avg << endl; 
    
   return 0;
}

  double getAverage(int *array, int SIZE) {
  int i, sum = 0;       
  double avg;          

   for (i = 0; i < SIZE; ++i) {
      sum += *array;
   }
   avg = double(sum) / SIZE;

   return avg;
}
