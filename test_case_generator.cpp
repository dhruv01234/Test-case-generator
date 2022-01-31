// Please real all comments to undestand how to use this code to generate test cases and output

#include <bits/stdc++.h>

using namespace std;

int main(){
    int i = 7;//input and output file number
    string inputfile = "input00" + to_string(i) +".txt";
    string outputfile = "output00" + to_string(i) +".txt";
   ofstream hout(inputfile);
   int random = 9399;//size of array
   hout<<to_string(random)<<endl;
   for (int i = 1; i <= random; i++)
   {
       string st = to_string(rand()%1000+1);//range of elements of array  where 1000 is size of range and 1 if starting number of that range
       hout<<st<<endl;
   }
   hout.close();
   ifstream hin(inputfile);
   string s;
   hin>>s;
   int N = stoi(s);
   vector<long> A;
   for(int i=0;i<N;i++){
       hin>>s;
       int n = stoi(s);
       A.push_back(n);
   }
   hin.close();
//    logic
   //    size of input array is N here
// the arrar is A vector
// write your code here


    // end of logic
 ofstream out(outputfile);
    out<<to_string(ans);
    out.close();
   return 0;
}