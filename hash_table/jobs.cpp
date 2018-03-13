#include "jobs.h"

using namespace std;


jobs::jobs()
{

   Employers_name = NULL;
   Location = NULL;
   Job_Title = NULL;
   Job_Description = NULL;
   Required_Experience = NULL;
   Pay_rate = NULL; 	

}

jobs::~jobs()
{
   delete [] Employers_name;
   delete [] Location;
   delete [] Job_Title;
   delete [] Job_Description;
   delete [] Required_Experience;
   delete [] Pay_rate;

}

int jobs::create(char emp_name[], char locus[], char job_name[], char job_descrip[], char exp_req[], char pay[])
{


	Employers_name = new char[strlen(emp_name) + 1];
	strcpy(Employers_name, emp_name);

    Location = new char[strlen(locus) + 1];
	strcpy(Location, locus);

    Job_Title = new char[strlen(job_name) + 1];
	strcpy(Job_Title, job_name);

	Job_Description = new char[strlen(job_descrip) + 1];
	strcpy(Job_Description, job_descrip);

	Required_Experience = new char[strlen(exp_req) + 1];
	strcpy(Required_Experience, exp_req);
	
    Pay_rate = new char[strlen(pay) + 1];
	strcpy(Pay_rate, pay);

}

int jobs::copy(jobs & dest)
{


        if (!dest.Employers_name) return 0;
	else 
	{
		if(Employers_name)
		{
			delete [] Employers_name;
			Employers_name = NULL;
		}
		
		Employers_name = new char[strlen(dest.Employers_name) + 1];
		strcpy(Employers_name, dest.Employers_name);
	
	}

	if (!dest.Location) return 0;
	else 
	{
		if(Location)
		{
			delete [] Location;
			Location = NULL;
		}
		Location = new char[strlen(dest.Location) + 1];
		strcpy(Location, dest.Location);
	}


	if (!dest.Job_Title) return 0;
	else 
	{
		if(Job_Title)
		{
			delete [] Job_Title;
			Job_Title = NULL;
		}
		Job_Title = new char[strlen(dest.Job_Title) + 1];
		strcpy(Job_Title, dest.Job_Title);
	}
	



	if (!dest.Job_Description) return 0;
	else 
	{
		if(Job_Description)
		{
			delete [] Job_Description;
			Job_Description = NULL;
		}
		Job_Description = new char[strlen(dest.Job_Description) + 1];
		strcpy(Job_Description, dest.Job_Description);
	}


	if (!dest.Required_Experience) return 0;
	else 
	{
		if(Required_Experience)
		{
			delete [] Required_Experience;
			Required_Experience = NULL;
		}
		Required_Experience = new char[strlen(dest.Required_Experience) + 1];
		strcpy(Required_Experience, dest.Required_Experience);
	}



	 if (!dest.Pay_rate) return 0;
        else
        {
                if(Pay_rate)
                {
                        delete [] Pay_rate;
                        Pay_rate = NULL;
                }
                Pay_rate = new char[strlen(dest.Pay_rate) + 1];
                strcpy(Pay_rate, dest.Pay_rate);
        }


}


int jobs::retrieve(jobs & collect, char * match)
{


	if (strcmp(match, Job_Title)!=0) return 0;
	
	else
	{
		if (Job_Title)
		{
            
		if (collect.Job_Title)
		{
                
		delete[] collect.Job_Title;
                collect.Job_Title = NULL;
		
		}
		
	}
	
	}
    
    
    collect.Employers_name = new char[strlen(Employers_name)+1];
    strcpy(collect.Employers_name, Employers_name);
	
    collect.Location = new char[strlen(Location)+1];
    strcpy(collect.Location, Location);
	
    collect.Job_Title = new char[strlen(Job_Title)+1];
    strcpy(collect.Job_Title, Job_Title);
	
    collect.Job_Description = new char[strlen(Job_Description)+1];
    strcpy(collect.Job_Description, Job_Description);
	
    collect.Required_Experience = new char[strlen(Required_Experience)+1];
    strcpy(collect.Required_Experience, Required_Experience);
	
    collect.Required_Experience = new char[strlen(Required_Experience)+1];
    strcpy(collect.Required_Experience, Required_Experience);


}
	
int jobs::display()
{
	cout <<" Here Is The Listing Of All The Jobs : " << "\n";
	cout <<" Employers Name : "<< Employers_name << endl;
	cout <<" Job Location :  "<< Location << endl;
	cout <<" Job Title : " << Job_Title << endl;
	cout <<" Job Description : " << Job_Description  << endl;
	cout <<" Experience Required :  "<< Required_Experience << endl;
	cout <<" Pay Rate : " << Pay_rate << endl;
}

