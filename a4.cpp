/*
**  a4.cpp
**  Assignment 4, CMPT-225
**
**  Reads a sequence of integers (in the range of int's) from standard in;
**  It is interpreted as two lists, separated by a single 0
**/

#include <iostream>
#include <queue>
#include <map>
#include <iterator>
#include <fstream>
#include <string>

using namespace std;

int main(int argc, char* argv[]){
         cout << "301307928  yla468 Yimin Long" <<endl;
	
    
	 priority_queue <int> L1;
	 map<int, int> L2;
	  
	 ifstream file;
	 file.open(argv[1]);
     
     int x ;
     bool List2 = false; 
     
     file >> x ;
     while( !file.eof() ){
     	 
        if( x == 0 ){
            List2 = true ;
        }
        
		if(List2 == false)
			L1.push(x);
		else if(List2 == true)
			L2.insert(pair <int, int> (x,x)); 
       
	   file >> x ;
     }
	 file.close(); 
 
     map <int, int> :: iterator itr;

	 while(!L1.empty())
	 {
                itr = L2.find(L1.top());
		if (itr == L2.end())
		{	
			cout << L1.top() <<endl;
			break;
		}
		L1.pop();
	 }
	 
	 if(L1.empty())
		 cout << "none" <<endl;
	 
	 
	 
     

	 return 0;
  }

