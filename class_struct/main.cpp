#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

const int TEST = 375;


class node
{

  public:
    
  node();
  ~node();
  void set_next(node * following);

  void set_data(char * num);

  int get_data();

  node *& get_next();

  private:   
	node *next;
	char data[100];
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






void node::set_data(char * num)
{

  data = num;

}



int node::get_data()
{
  return data;
}



   class list 
   {
      public :
      
      list();
      ~list();
      void insert(int val);
      void display();

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



void list::insert(int val)
{


   node * new_head = new node; 
  // new_head -> data = val;   
  new_head -> set_data(val);
	
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
    current = current -> get_next();
  }

}



int main()
{


  list alist;
   
  alist.insert(100);
  cout << "\n";

  alist.insert(1002);


  cout << "\n";
  alist.insert(100222222);
  
  cout << "\n";
  alist.insert(1001111);

  alist.display();


}


