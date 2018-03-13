#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

const int TEST = 375;

/*
struct node
{

  char * data;
  node * next;

};

node * temp = new node;

node * head = temp;

temp -> data = new char[strlen("Highlander") +1];
strcpy(temp -> data, "Highlander");

cout << head -> data <<endl;
*/



class node
{

  public:
    
  node();
  ~node();
  void set_next(node * following);

  void set_data(char * const num);

  char * get_data();

  node *& get_next();

  private:   
	node *next;
	char * data;
};




node::node() : next(NULL)
{


}



node::~node()
{

  

}




void node::set_next(node * following)
{

  next = following;
  
}



node *& node::get_next()
{

  return next;

}






void node::set_data(char * const input)
{

  data = new char[strlen(input) + 1];
  strcpy(data, input);

}



char * node::get_data()
{
  return data;
}



   class list 
   {
      public :
      
      list();
      ~list();
      void insert(char * const input);
      void display();
      void remove(node * & head ,char * const input); 
      void remove(char * const input);
      protected :
     
      node * head; 
   
   };




list::list()
{

  head = NULL;

}




list::~list()
{

  delete head;


}



void list::insert(char * const input)
{


   node * new_head = new node; 
  // new_head -> data = val;   
  new_head -> set_data(input);
  new_head -> get_next() = NULL;	
	if (head == NULL)//empty link list
	{
		head = new_head;
		return;
	}


        else
	{
		
	node * temp = head;//declares a Node data type to start at head node
	
	while (temp->get_next() != NULL)//traverses to the end of the link list
		{
			temp = temp->get_next();
		}


	temp->get_next() = new_head;

	}


}


void list::display()
{

  node * current = head;
  while(current)
  {
    cout << current -> get_data();
   
    if(current -> get_next() != NULL)
       {
         cout << " -> ";
       } 
  

   current = current -> get_next();
  }

}



void list::remove(node * & head, char * const input)
{
  
  if(!head)
  {
    return; 
  }

  if((head -> get_next() == NULL) && (strcmp(head -> get_data(), input) == 0))

  {
     
     delete head;
     head = NULL;  
     return;    
    
  
  }



  if(strcmp(head -> get_data(), input) == 0)
    {
      node * temp = head -> get_next();
      delete head;
      head = temp;
      remove(head,input);


    }
  
    else


    remove(head -> get_next(),input);

}


void list::remove(char * const input)
{

  remove(head ,input); 

} 










int main()
{


  list alist;
   
  alist.insert("Zoo");

  alist.insert("Test");


  alist.insert("Sid");
  
  alist.insert("Hi");

  cout << "\n";
  


  cout << " What would  : " << endl;
  alist.display();


  alist.remove("");


  cout << "\n";


  
  cout << "After the remove function has been called contents of the list is : " << endl;

  alist.display();





  cout << "\n";
  cout << "\n";

}









