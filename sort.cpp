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
int linearSearch(auto data, auto key)
{
 for(auto i = 0u; i < data.size(); i++)
   {    //Hint: when Data is changed to a vector of objects, we must call
        //the method to get a character from the object Data[i]

     if (data[i]== key)//key found
      return i;
  }
   return -1;//not found


}

int main()
{
  vector<string> inputs;
  string search_key, input;
  int result;

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
 
   cout<<endl<<"To end input type the #-character (followed by Enter)"<<endl<<endl;
  cout<<"Enter a value to search for: ";


   cin>>search_key;


 
    for(search_key = "#";search_key < data.size();search_key++)//perform searches until sentinel entered
    {
        int small=search_key;

	 for(int j = search_key+1;j<data.size();j++)
		{
			if (data[j]<data[small])
				small=j;
		}
	swap (D[search_key],D[small]);
	}

      //  cout<<"  '"<<search_key<<"' was ";

      //  if (result == -1)
      //    cout<<"not found";
       // else
       //   cout<<"found at index "<<result;


       // cout<<endl<<endl<<"Enter a value to search for: ";
       // cin>>search_key; 
    }

   cout<<endl<<"Program \"search it\" is now finished."<<endl<<endl;

    return 0;
}
