#include<bits/stdc++.h>
using namespace std;

int maximum(int *arr , int n) {
	int max=arr[0];
	for(int i=1 ; i<n ; i++)
	{
		if(max<=arr[i])
		max=arr[i];
		
		else
		continue;
	}
	return max;
}

void Print(int *arr , int n)
{
    for(int i=0 ; i<n ; i++)
    cout<<arr[i]<<"  ";
    cout<<endl;
}

void Count_Sort(int *in_arr , int *out_arr , int n)
{
    int large = maximum(in_arr,n)+1;
    int temp_arr[large] = {0};

    for(int i=0 ; i<n ; i++)
    {
        temp_arr[in_arr[i]]+=1;
    }

    Print(temp_arr,large);
    // int index;
    for(int j=1 ; j<large ; j++)
    {
            temp_arr[j]+=temp_arr[j-1];
    }

    Print(temp_arr,large);

    for(int i=n-1 ; i>=0 ; i--)
    {
        out_arr[temp_arr[in_arr[i]]-1]=in_arr[i];
        temp_arr[in_arr[i]]-=1;
    }

    Print(out_arr,n);

    return;
}

int main()
{
    int n;
    cin>>n;

    int *arr = new int[n];

    for(int i=0 ; i<n ; i++)
    {
        arr[i]=rand()%10;
    }

    for(int i=0 ; i<n ; i++)
    {
        cout<<arr[i]<<"  ";
    }
    cout<<endl;

    int * result = new int[n];

    cout<<endl;
    Count_Sort(arr,result,n);
    // for(int i=0 ; i<n ; i++)
    // {
    //     cout<<result[i]<<"  ";
    // }
    // cout<<endl;
    return 0;
}
 