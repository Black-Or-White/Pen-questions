#include <iostream>  
using namespace std;  
int n, k,res = 0;  
int check(int a[], int len){  
    int tk = 0;  
    for(int i = 0; i<len-1; i++){  
        if(a[i] < a[i+1])  
            tk++;  
    }  
    if(tk == k)  
        return 1;  
    else  
        return 0;  
}  
void swap(int *a ,int *b)  
{  
    int m ;  
    m = *a;  
    *a = *b;  
    *b = m;  
}  
void perm(int list[],int head, int end )  
{  
    int i;  
    if(head >end)  
    {  
        if(check(list,n))  
            res++;  
    }  
    else  
    {  
        for(i = head ; i <=end;i++)  
        {  
            swap(&list[head],&list[i]);  
            perm(list,head+1,end);  
            swap(&list[head],&list[i]);  
        }  
    }  
}  
int main(){  
    cin>>n>>k;  
    int a[n];  
    for(int i = 0; i<n; i++){  
        a[i] = i + 1;  
    }  
    perm(a,0,n-1);  
    cout<<res;  
    return 0;  
  
}  
