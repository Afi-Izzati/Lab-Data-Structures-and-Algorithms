#include <iostream>
#include <string>
using namespace std;

class list
{
public:
	struct node {
		int NumList;
		string Items;
		struct node *next;
	} *head, *tail, *ptr;	

	list():head(NULL),tail(NULL){}	// constructor	
			// destructor

	struct list::node* searchItems(struct list::node*, string);	
	struct list::node* searchNumList(struct list::node*, int);
	struct list::node* initNode(string, int);


	void addNode( struct list::node*);
	void displayList( struct list::node*)const ;
 	void displayNode( struct list::node*) const;	
};



struct list::node* list::initNode(string s, int i) {
	struct node *ptr = new node;
 

	if( ptr == NULL )                         
		return static_cast<struct node *>(NULL);  

	else {  
		ptr->Items = s ;  
		ptr->NumList = i;                        
		return ptr;                         
	}
}

 
void list::addNode( struct node *newNode )  {
	// if there is no node, put it to head
	if( head == NULL ) {
		head = newNode;  
		tail = newNode;
	}
   


	tail->next = newNode;       
	newNode->next = NULL;       
	tail = newNode;               
}

struct list::node* list::searchItems(struct node* ptr, string Items) {
    while( Items != ptr->Items ) {    
       ptr = ptr->next;                          
       if( ptr == NULL )                          
          break;                                  
    }
    return ptr; 	
}

struct list::node* list::searchNumList(struct node* ptr, int NumList) {
    while( NumList != ptr->NumList ) {    
       ptr = ptr->next;                          
       if( ptr == NULL )                          
          break;                                  
    }
    return ptr; 	
}



void list::displayNode( struct list::node *ptr ) const
{
	cout << ptr->NumList << " " << ptr->Items << endl;
}

void list::displayList( struct list::node *ptr ) const
{
	if(!ptr) cout << "Nothing to display" << endl;
	while(ptr) {
		displayNode(ptr);
		ptr = ptr->next;
	}
}

int main()
{
	int numList;
	string items;
 	list myList;
	list::node* ptr;
    
    cout << "==================================" << endl;
 	cout << "BC Items                   Price"<< endl;
 	cout << "==================================" << endl;
    
	// add
	ptr = myList.initNode( "Pagoda Gnut 110g        3.49", 10 );
	myList.addNode(ptr);
	ptr = myList.initNode( "Hup Seng Cream Cracker  4.19", 11 );
	myList.addNode(ptr);
	ptr = myList.initNode( "Yit Poh 2n1 Kopi-o      7.28", 12 );
	myList.addNode(ptr);
	ptr = myList.initNode( "Zoelife SN & Seed       5.24", 13 );
	myList.addNode(ptr);
	ptr = myList.initNode( "Gatsby S/FO Wet&Hard   16.99", 14 );
	myList.addNode(ptr);
	ptr = myList.initNode( "GB W/G U/Hold 150g      6.49", 15 );
	myList.addNode(ptr); 
	myList.displayList(myList.head);
    
    cout << "==================================" << endl;
 	cout << "Total (GST Incl.)         43.68" << endl;

	
	return 0;
}
	

	


	

	 
