//  Sid Abdullahi
//  hashtable.cpp
//  CS 163 HW3
//  This is the .cpp file for the hashtable class abstraction
//
//
//

#include "hashtable.h"



using namespace std;


//hashtable constructor
hashtable::hashtable()
{
    hash_table = new node * [TABLE_SIZE];

    for (int i = 0; i < TABLE_SIZE; ++i)
    {

        hash_table[i] = NULL;

    }


}


//hashtable destructor, deallocate dynamic memory
hashtable::~hashtable()
{

	for (int i = 0; i < TABLE_SIZE - 1; ++i)
	{	
		node * current = hash_table[i];
			while(current)
		{
			node * temp = current;
			current = current -> next;
			temp -> next = NULL;
			delete temp;
			hash_table[i] = NULL;

		}

	}
	delete [] hash_table;


}





int hashtable::hash_function(char Job_Title[])
{
    int index = 0;

    if (!Job_Title) return 1;

    for (int i = 0; i < strlen(Job_Title); ++i)
	  {	
	     
	     index += Job_Title[i];
	  
	  }
	      
              index %= TABLE_SIZE;
	  	
	      return index;


}




int hashtable::loadjobs(jobs & to_add, char * input)
{
    int i;
    hash_function(input);
    i = hash_function(input);

    node * temp = new node;
    temp -> a_job.copy(to_add);
    temp -> next = hash_table[i];
    hash_table[i] = temp;

    return 1;
}




int hashtable::retrieve(jobs & found, char * job_search)
{
    int i;
    hash_function(job_search);
    i = hash_function(job_search);

    node * temp = hash_table[i];
    while (temp)
    {
        temp -> a_job.retrieve(found, job_search);
        temp = temp -> next;
    }

    return 1;
}




//Thsi function displays all in the list
int hashtable::display_all()
{
    for (int i = 0; i < TABLE_SIZE; ++i)
    {
        node * current = hash_table[i];
        while (current)
        {
            current -> a_job.display();
            current = current -> next;

        }

    }
}


// This function removes a song with the right match as supplied
int hashtable::remove(char * match)
{
    int i;
    hash_function(match);
    i = hash_function(match);

    node * current = hash_table[i];
    node * temp = NULL;

    if(!current)  return 0;

    while (current)
    {
        temp = current;
        current = current -> next;
        temp -> next = NULL;
        delete temp;
    }
    hash_table[i] = NULL;
    return 1;
}





