#include<iostream>
#include<cstdio>
#include<sstream>
#include<vector>
#include<cmath>
using namespace std;
stringstream ss;
int main(){
    string s;
    vector<string> ret;
    getline(cin,s);
    ss.clear();
    ss << s;
    string x;
    int row,clm;
    while(ss >> x)
    ret.push_back(x);
    string re;
    int n = re.size();
    for(int i=0;i<ret.size();i++)
        re += ret[i];
    int lw = sqrt(re.size());
    if(lw*lw==re.size())
         clm= lw;
    else
        clm=lw+1;
//cout<<clm<<endl;
    if((re.size()%clm)!=0)
   {
       row=((re.size())/clm)+1;
   }
   else
   row=((re.size())/clm);
//   cout<<row<<endl;
//   cout<<clm<<endl;
   if(row>clm)
   {
       int t=row;
       row=clm;
       clm=t;
   }
    int alp=0;
    int loop=0;
    int k;
    while(alp<re.size())
    {
        k=loop;
       for(int j=0;j<row;j++)
       {
           if(k<re.size())
           cout<<re[k];
           k=k+clm;

           alp++;
       }
       loop++;
       cout<<" ";

    }
}
