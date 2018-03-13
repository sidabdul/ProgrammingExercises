//Sid Abdullahi
//CS 163 Program 5
//Implementation for the Table class and memeber functions


#include "table.h"


using namespace std;



//Constructor for the list
Table::Table(int size)
{
	list_size=size;
	adjacency_list = new vertex[list_size];

	for (int i=0; i<list_size; ++i)
	{
		adjacency_list[i].data = NULL;
		adjacency_list[i].head = NULL;
	}

}



//Destructor definition
Table::~Table()
{
	
	for (int i=0; i<list_size; ++i)
	{

		node * current = adjacency_list[i].head;
		while(current)
		{
			node * temp = current;
			current = current->next;
			delete temp;
			adjacency_list[i].data = NULL;
		}
	}delete [] adjacency_list;
	
}

//Display the contents of the list
int Table::displayall()
{
    for (int i=0; i<list_size; ++i)
    {
        adjacency_list[i].data->display();
    }
    return 0;

}

int Table::insert_edge(char * current_vertex, char * to_attach)
{
    int current_index = find_location(current_vertex);
    int to_attach_index = find_location(to_attach);

    node * temp = new node;
    temp->adjacent = & adjacency_list[to_attach_index];
    temp->next = adjacency_list[current_index].head;
    adjacency_list[current_index].head = temp;

    return 1;

}

//Insert into the vertex list
int Table::insert_vertex(topic & to_add)
{
	for (int i=0; i<list_size; ++i)
	{
		if (!adjacency_list[i].data)
		{
			adjacency_list[i].data = new topic;
			adjacency_list[i].data->copy(to_add);
		}
	}
	
    
    return 0;
}


//Find if a match exsists
int Table::find_location(char * key_value)
{
	int index = 0;
	for (int i=0;i<list_size;++i)
	{
		if(adjacency_list[i].data->compare(key_value))
        {

            index =i;

        }
	}
	return index;
}



//Display all vertices
int Table::display_vertices(char * key_value)
{
	int i = find_location(key_value);
	node * current = adjacency_list[i].head;
	while(current)
	{
		adjacency_list[i].data->display();
		current = current->next;

	}return 1;
	
}



