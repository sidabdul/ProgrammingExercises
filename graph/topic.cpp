//Sid Abdullahi
//CS163 - Program 5
//
//
//This file is implementation of all the functions


#include "topic.h"

using namespace std;



//Constructor for the class object
topic::topic()
{
	topic_title = NULL;
	top_trivia = NULL;

}


//Destructor to deallocate all dynamic memory when finished
topic::~topic()
{
	delete[] topic_title;
	delete[] top_trivia;
}



//This will make an instance of a topic
int topic::make(char name[], char trivia[])
{
    topic_title = new char[strlen(name)+1];
    strcpy(topic_title, name);
    top_trivia = new char[strlen(name)+1];
	strcpy(top_trivia, trivia);
}

// Display function
int topic::display()
{
    cout<<endl;
    cout<<" These Are The Titles:    " << topic_title <<endl;
    cout<<" THese Are The Related Topics :   " << top_trivia <<endl;
}

//This function compares the value entered in form the user to the ones stored in the structure


int topic::compare(char * value)
{
    int topic_val =	strcmp(value,topic_title);
    return topic_val;


}



char * topic::receive()
{
    return topic_title;
}






//Obtain function will find a mtach within the search inquiry if one exsists
int topic::obtain(topic & found, char * match)
{
	if (strcmp(match, topic_title)!=0)
		return 0;
	else
	{
		if (topic_title)
		{
			if (found.topic_title)
			{
				delete[] found.topic_title;
				found.topic_title = NULL;
			}
		}
	}
	found.topic_title = new char[strlen(topic_title)+1];
	strcpy(found.topic_title, topic_title);
	found.top_trivia = new char[strlen(top_trivia)+1];
	strcpy(found.top_trivia, top_trivia);

}

// copy funtion will do as the name suggests, from the txt file, to the structure
int topic::copy(topic & copy_from)
{
    if (!copy_from.topic_title)
        return 0;
    else
    {
        if(topic_title)
        {
            delete [] topic_title;
            topic_title = NULL;
        }
        topic_title = new char[strlen(copy_from.topic_title)+1];
        strcpy(topic_title, copy_from.topic_title);
    }


    if (!copy_from.top_trivia)
        return 0;
    else
    {
        if(top_trivia)
        {
            delete [] top_trivia;
            top_trivia = NULL;
        }
        top_trivia = new char[strlen(copy_from.top_trivia)+1];
        strcpy(top_trivia, copy_from.top_trivia);
    }


}


