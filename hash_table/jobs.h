#include <iostream>
#include <cstring>
#include <cctype>



const int SIZE = 25;

class jobs
{
	public:
		jobs();
		~jobs();
		int create(char emp_name[], char locus[], char job_name[], char job_descrip[], char exp_req[], char pay[]);
		int copy(jobs & dest);
		int remove ();
		int retrieve(jobs & found, char * match);
		int display ();

		private:


   	        char * Employers_name;
	        char * Location;
    		char * Job_Title;
    		char * Job_Description;
    		char * Required_Experience;
    		char * Pay_rate; 
   
		
};

