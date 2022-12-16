#include <iostream>
#include <string>
#include <cstring>
using namespace std;
string LCS(string X, string Y, int m, int n)
{
    int maxlen = 0;         
    int endingIndex = m;    
 
    int lookup[m + 1][n + 1];
 
    memset(lookup, 0, sizeof(lookup));

    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (X[i - 1] == Y[j - 1])
            {
                lookup[i][j] = lookup[i - 1][j - 1] + 1;

                if (lookup[i][j] > maxlen)
                {
                    maxlen = lookup[i][j];
                    endingIndex = i;
                }
                
            }
            
        }
        
    }
    
  cout<< maxlen<<"\n" <<"The longest common sub string is: ";
 
 
    return X.substr(endingIndex - maxlen, maxlen);
}
 
int main()
{
    string X , Y;
    cout<<"Enter First Sring (4 Characters)\n";
    cin>>X;
    cout<<"Enter Second Sring (4 Characters)\n";
    cin>>Y;

    int m = X.length(), n = Y.length();

    cout << "Length of the longest common sub string is: " << LCS(X, Y, m, n)<<"\n";
    
    int arr[5][5] = {
        { 0, 0, 0, 0, 0 },
        { 0, 0, 1, 0, 1 },
        { 0, 1, 0, 2, 0 },
        { 0, 0, 2, 0, 3 },
        { 0, 1, 0, 3, 0 },
        } ;
        
    int i,j;
    
    cout<<"Printing a 2D Array:\n";
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            cout<<"\t"<<arr[i][j];
        }
        cout<<endl;
    }
 
    return 0;
}
