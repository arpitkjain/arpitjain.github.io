#include<iostream>
#include <vector>
using namespace std;

int main(){
    int T;
    cin >> T;
    static int K=T;
    int counter[K];
    for(int a0 = 0; a0 < T; a0++)
{
        counter[a0]=0;
        long int n;
        cin >> n;
        vector<int> q(n);
        for(int q_i = 0;q_i < n;q_i++)
        {
           cin >> q[q_i];
        }

    for(int i=0;i<n;i++)
    {
        if(q[i]-(i+1)>2)
        {
            counter[a0]=-1;
            break;          //Not more than 2 bribes
        }
    }
    if(counter[a0]!=-1)
    {
        for(int j=n-1;j>=0;j--)
        {
            if(q[j]-(j+1)==2)
            {
                q[j]=q[j+1];
                q[j+1]=q[j+2];
                q[j+2]=j+3;
                j=j+2;
                counter[a0]=counter[a0]+2;
            }
        }

        for(int j=n-1;j>=0;j--)
        {
            if(q[j]-(j+1)==1)
            {
                q[j]=q[j+1];
                q[j+1]=j+2;
                j=j+1;
                counter[a0]++;
            }
        }

            // your code goes here

    }
}
    for(int a1 = 0; a1 < T; a1++)
    {
        if(counter[a1]!=-1)
        cout<<counter[a1]<<endl;
        else
            cout<<"Too chaotic"<<endl;
    }
    return 0;
}

