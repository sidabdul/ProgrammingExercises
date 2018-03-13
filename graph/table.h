// Sid Abdullahi
// CS 163 Program 5
// These are the prototypes for the Table class and structure definitions for the vertex

#include "topic.h"
#include <iostream>
#include <cstring>
#include <fstream>
#include <cctype>



struct vertex     
{
	topic *  data;
	struct node * head;
	
};



struct node
{
	vertex * adjacent;
	node * next;

};




class Table
{
	public:
		Table(int size=5);
		~Table();
		int insert_vertex(topic & to_add);
		int find_location(char * key_value);
		int display_vertices(char * key_value);
		int insert_edge(char * current_vertex, char * to_attach);
		int displayall(void);
	
	private:
		vertex * adjacency_list;
		int list_size;
};


