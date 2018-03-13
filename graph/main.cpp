//Sid Abdullahi
//CS 163 Assignment 4
//This program will introduce the ADT of graphs to simulate a program where an individual can move
//from a certain topic to another based on the topic name.
//
// 


#include "table.h"


using namespace std;

int main()
{

    Table topic_list; //topic list object is created here
    topic single_topic;	//single_topic object created here
    topic contain; //this object will collect information to be displayed

    int input = 0;
    char name[SIZE];
    char question[SIZE];
	char answer;
	char entry[SIZE];




    //This is the fstream function to open a text file
    ifstream file_Open;
    file_Open.open("inquires.txt");
	if(file_Open.is_open())
	{
		do
		{
            file_Open.get(name, SIZE, '$');
            file_Open.ignore(100,'$');
            file_Open.get(question, SIZE, '\n');
			file_Open.ignore(100,'\n');

            single_topic.make(name, question);
            topic_list.insert_vertex(single_topic);

			file_Open.peek();
		}while(!file_Open.eof());
	}
    file_Open.close();
	
    //Now to load the information from the txt file to the edges

    ifstream fileOpen;
    fileOpen.open("path.txt");
	if(fileOpen.is_open())
	{
		do
		{
            fileOpen.get(name, SIZE, '$');
            fileOpen.ignore(100,'$');
            fileOpen.get(question, SIZE, '\n');
			fileOpen.ignore(100,'\n');
            topic_list.insert_edge(name, question);

			fileOpen.peek();
		}while(!fileOpen.eof());
	}
    fileOpen.close();
	

	

        cout <<" Welcome to the topic selection game " <<endl;
        cout <<" Please select an option "<< endl;
        cout <<" Press 1 to display all topics " << endl;
        cout <<" Press 2 to find a topic " << endl;

        cin >> input;
        cin.ignore(10,'\n');
		
		
        if(input == 1)
		{
					
            cout << "These are the topics in the list: " << endl;
			topic_list.displayall();
		}


        if(input== 2)
		{
            cout<<" Please indicate a name to seacrh for "<<endl;
			cin.get(entry, SIZE, '\n');
			cin.ignore(SIZE,'\n');
	
			topic_list.display_vertices(entry);
		
		}

    return 0;



}
