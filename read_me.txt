301307928  yla468  Yimin Long

Methods:
priority queue and map
before 0: push element into priority queue L1
after 0 : insert key into map L2
use top() to get the largest value in L1 an then use find() function to check if the largest value in L2. 
if appear in L2 : pop that value and check the next value in L1 until L1 empty
if not appear in L1 : output the answer

Library included:
#include <queue>   // for priority queue   
#include <map>    //  for map
#include <iterator>
// reference : http://www.cplusplus.com/doc/tutorial/files/
#include <fstream>  // Stream class to both read and write from to files
#include <string>
