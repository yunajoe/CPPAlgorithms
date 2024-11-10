#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
   int x, y; 
   cin >> x; 
   cin >> y; 
   
   // map 
   map<int, string> convertString = {
       {1, "one"},
       {2, "two"},
       {3, "three"},
       {4, "four"},
       {5, "five"},
       {6, "six"},
       {7, "seven"},
       {8, "eight"},
       {9, "nine"},                     
   };
   
   
   for(int i=x; i<=y; i++){      
       if(i <= 9){
          cout << convertString.at(i) << "\n";
           
       }else{
           if(i % 2 == 0){
               cout << "even" << "\n";
           }else{
               cout << "odd" << "\n";
           }
       }
   }            
    return 0;      
    
}