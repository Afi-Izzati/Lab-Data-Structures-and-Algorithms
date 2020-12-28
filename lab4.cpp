#include <iostream>
using namespace std;
int queue[100], n = 100, front = - 1, rear = - 1;
void Insert() {
   int x;
   if (rear == n - 1)
   cout<<"Queue is full"<<endl;
   else {
      if (front == - 1)
      front = 0;
      cout<<"Insert the integer to the queue : ";
      cin>>x;
      rear++;
      queue[rear] = x;
   }
}
void Delete() {
   if (front == - 1 || front > rear) {
      cout<<"front is not equal to rear(empty)";
      return ;
   } else {
      cout<<"Element deleted from queue is : "<< queue[front] <<endl ;
      front++;;
   }
}
void Print() {
   if (front == - 1)
   cout<<"Queue is empty"<<endl;
   else {
      cout<<"Queue elements are : ";
      for (int i = front; i <= rear; i++)
      cout<<queue[i]<<" ";
         cout<<endl;
   }
}
int main() {
   int y;
   cout<<"1) Insert element to queue"<<endl;
   cout<<"2) Delete element from queue"<<endl;
   cout<<"3) Print all the elements of queue"<<endl;
   cout<<"4) Exit"<<endl;
   do {
      cout<<"Enter your choice : ";
      cin>>y;
      switch (y) {
         case 1: Insert();
         break;
         case 2: Delete();
         break;
         case 3: Print();
         break;
         case 4: cout<<"Exit"<<endl;
         break;
         default: cout<<"Invalid choice"<<endl;
      }
   } while(y!=4);
   return 0;
}
