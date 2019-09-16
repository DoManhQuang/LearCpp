#include<iostream>
#include<algorithm>
#include<string>
#include<string.h>
#include <stdio.h>
#include <stdlib.h>
#define MAX 234567
using namespace std;
/*
int sum(int a[],int n)
{
	int sum = 0;
	for(int i=0;i<n;)
	{
		sum += a[i+1] - a[i];
		i += 2;
	}
	return sum;
}
int number(int n)
{
    if(n%2 != 0)
    {
        return n/2;
    }
    return (n/2)-1;
}
int summin(int a[] , int n , int data)
{
    int sum = 0;
    int count_usb = 0;
    for(int i=n-1;i>=0;i--)
    {
        sum += a[i];
        count_usb++;
        if(data <= sum)
        {
            break;
        }
    }
    return count_usb;
}

int dequi(char s[] , int i , int len , int a[],int j)
{
    if(i == len)
    {
        sort(a,a+j);
        for(int i=0;i<j-1;i++)
        {
            cout<<a[i]<<"+";
        }
        cout<<a[j-1];
        return 0;
    }
    if(s[i] == '+')
    {
        i++;
    }
    else{
        a[j] = s[i] - 48;
        j++;
        i++;
    }
    return dequi(s,i,len,a,j);
}
*/

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int a[MAX] , n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    int mi = abs(a[1] - a[0]);
    int count_mi = 1;
    for(int i=1;i<n-1;i++)
    {
        if(abs(a[i+1] - a[i]) == mi)
        {
            count_mi ++;
        }
        else if(abs(a[i+1] - a[i]) < mi){
            mi = abs(a[i+1] - a[i]);
            count_mi = 1;
        }
    }
    cout<<mi<<" "<<count_mi;
    return 0;
}













