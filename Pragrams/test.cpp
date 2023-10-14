#include<bits/stdc++.h> 
using namespace std;
void findPairs(int arr[], int n)
{
bool found = false;
unordered_map<int, pair < int, int > > H; for (int i=0; i<n; i++)
{
for (int j=i+1; j<n; j++)
{
    int prod = arr[i]*arr[j];
    if (H.find(prod) == H.end()) H[prod] = make_pair(i,j);
    
    else
    {




    }
}
}
 


pair<int,int> pp;
cout << arr[pp.first] << " " << arr[pp.second]<< " and " << arr[i]<<" "<<arr[j]<<endl; found = true;
 
if (found == false)
cout << "No pairs Found" << endl;
}



int main()
{
int n;
 
cin>>n; int arr[n];
for(int i=0;i<n;i++)
{
cin>>arr[i];
}

findPairs(arr, n); return 0;
}
