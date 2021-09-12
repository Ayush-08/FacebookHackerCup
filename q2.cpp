#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int ans(string s, int n)
{
    int count=0;
    char temp;
    for(int i=0; i<n; i++)
    {
        if(s[i]== 'X' || s[i]== 'O') 
        {
        	//op2<<"Hello"<<endl;
        	if(temp==s[i]) continue;
        	
        	else{
        			temp= s[i];
        	        count++;
			}
        
		}
		
    }
    
    if(count==0) return 0;
    
    return count-1;
}


int subString(string s, int n)
{

    vector<string> d1;

    for (int i = 0; i < n; i++)
    {
	
        for (int len = 1; len <= n - i; len++)
        {
		
            //op2 << s.substr(i, len) << endl;
            string sub= s.substr(i, len);
            d1.push_back(sub);
     }
 }
            
//     for(int j=0; j<d1.size(); j++) 
// 	{
// 		op2<<d1[j]<<endl;
// 	}  

     //vector<int> v;
     int sum=0;
     for(int j=0; j<d1.size(); j++)
     {

        string y= d1[j];
        //op2<<y<<endl;
        int tp= ans(y, y.length());
        //op2<<tp;
        //v.push_back(tp);
        sum += tp;
	 }
	 

// 	 for(int i=0; i<v.size(); i++)
// 	 {
// 	 	op2<< v[i];
	 	
// 	 }
	 return (sum % 1000000007);
      
}

int main()
{
	ifstream Ayush2;
	Ayush2.open("weak_typing_chapter_2_validation_input.txt");
	ofstream op2;
	op2.open("op2round.txt");
	int t;
	Ayush2>>t;
	int total= t;
	while(t--)
	{
	   int n;
	   Ayush2>>n;
        string s;
        Ayush2>>s;
        //op2<<s;
        //int n= s.length();
   
        op2<<"Case #"<<total-t<<": "<<subString(s,s.length());
     
     
 }

// string s = "XFOFXFOFXFOFX";
//     op2<<subString(s,s.length());
    //return 0;
    
    
    //return 0;
}
