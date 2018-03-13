// Sid Abdullahi
//CS 163 Program 5
//This is the prototypes for the topic class and memember functions associated

#include <iostream>
#include <cstring>
#include <fstream>
#include <cctype>

const int SIZE = 51;

class topic
{
	public:
		topic();
		~topic();
		int make(char name[], char trivia[]);
		int copy(topic & copy_from);	
		int obtain(topic & found, char * same);
		int display ();
		int compare(char * value);

		private:
		char * topic_title;
		char * top_trivia;
		char * receive();
		
};



