#include <iostream>
#include <cstdlib>//for "exit()" on some systems
#include <vector>
#include <string>

using namespace std;

/**
\fn linearSearch
\brief Search data for the first occurrence of key
\param [in] key The value being searched for
\param [in] data The data set that will be searched
\returns location of key if found or -1 if not found
*/
int linearSearch(auto data, auto key){
for(auto i = 0u; i < data.size(); i++) 
   {    
     if (data[i] == key)
      return i;
  }
   return -1;//not found

}

void insertionSort(auto & D){
	int passes = 0;
	int p=0;
	do{
	    if (passes %20000 == 0)
	    cout<< " passes completed: "<< passes <<endl;

	for ( unsigned int i=1; i< D.size();i++)
	
	{
	  int j = i ;
	    while (j>0 and D[j]<D[j-1])
	      { 

		 swap (D[j], D[j-1]);
		  j = j-1;

	     }
		passes = passes + 1;
	    }
		p++;
	}while (p > 0);
	cout<< " Final passes completed: "<< passes <<endl;
	

}

int main()
{
  vector<string> inputs;
  string search_key, input;
 

   cout<<"Welcome to \"search it\". We first need some input data."<<endl;
   cout<<"We'll assume the inputs do not have any spaces."<<endl<<endl;
   cout<<"To end input type the #-character (followed by Enter)"<<endl<<endl;

   cin>>input;
 
    while(input != "#")//read an unknown number of inputs from keyboard
    {
       inputs.push_back(input);
       cin>>input;
    }
	
   cout<<endl<<"["<<inputs.size()<<" values read from input source]"<<endl<<endl;

  if(inputs.size() == 0)//no input
  {
      cout<<endl<<"No input received, quiting..."<<endl<<endl;
       exit(1);//nothing to do but quit program
  }
 
   insertionSort(inputs);
    cout << "data to be sorted"<<endl;
    for ( unsigned int s= 0; s <inputs.size();s++)
	{
    	   cout << inputs[s]<<endl;
	}
   cout<<endl<<"Program \"search it\" is now finished."<<endl<<endl;

    return 0;

}
