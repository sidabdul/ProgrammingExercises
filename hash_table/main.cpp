//  Sid A.
//  main.cpp
//  HW3
//
//  
//
//

#include "hashtable.h"


using namespace std;

const int TEST = 375;




int main()
{
    
    hashtable table;
    jobs post;
    jobs finder;


    char file_Employers_name[TEST];
    char file_Location[TEST];
    char file_Job_Title[TEST];
    char file_Job_Description[TEST];
    char file_Required_Experience[TEST];
    char file_Pay_rate[TEST]; 

    ifstream file_in;
    file_in.open ("jobs.txt");
    if (file_in.is_open())
   {
     file_in.get(file_Employers_name, TEST,'|');
     file_in.ignore(100,'|');
     while (!file_in.eof())
      	{
            file_in.get(file_Location, TEST,'|');
            file_in.ignore(100,'|');
            file_in.get(file_Job_Title, TEST,'|');
            file_in.ignore(100,'|');
            file_in.get(file_Job_Description, TEST, '|');
            file_in.ignore(100,'|');
            file_in.get(file_Required_Experience,TEST,'|');
            file_in.ignore(100,'|');
            file_in.get(file_Pay_rate, TEST, '|');
            file_in.ignore(100,'|');


            post.create(file_Employers_name, file_Location, file_Job_Title, file_Job_Description, file_Required_Experience, file_Pay_rate);

            table.loadjobs(post, file_Employers_name);

     }
        file_in.close();
        file_in.clear();
        }
//        return 0;



	
//table.display_all();

    char entry[100];
    cout<<" What song do you wanna search? "<<endl;
    cin.get(entry, SIZE, '\n');
    cin.ignore(SIZE,'\n');

    songList.retrieve(retrieved, entry);
    retrieved.display();



  //  return 1;


}




