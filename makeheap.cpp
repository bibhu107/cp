#include <iostream>
#include <algorithm> // for heap 
#include <vector>
using namespace std;
 
int main()
{
    // initializing vector;
    vector<int> vi = { 4, 6, 7, 9, 11, 4 };
     
    // using make_heap() to transform vector into
    // a max heap
    make_heap(vi.begin(),vi.end());
     
    //checking if heap using 
    // front() function
    cout << "The maximum element of heap is : ";
    for(int i=0;i<vi.size();i++)
    cout << vi[i] << " ";
	cout<<endl;
     
}