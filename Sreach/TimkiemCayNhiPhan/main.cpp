#include <bits/stdc++.h>

using namespace std;
int n,x,a[100];

struct Node {
   int key;
   Node *left,*right;
};
typedef Node *TRO;
TRO root;

void Input()
{
    freopen("Data.txt","r",stdin);
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cin>>x;
}
void Output()
{
    cout<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<"\t";
    }
}

/*TRO TimkiemCayNhiPhan(TRO root,int x)
{
    cout<<endl;
        if(root == NULL)
            return NULL;
        else if(root->key > x)
            return TimkiemCayNhiPhan(root->left,x);
        else if (root->key<x)
            return TimkiemCayNhiPhan(root->right,x);
        else return root;
}*/
/*int timkiem(int x,Node *TRO)
{
    while(TRO!=NULL)
    {
        if(TRO->key ==x) return 1;
        if(TRO->key >x)  TRO =TRO->left;
        if(TRO->key<x)  TRO=TRO->right;
    }
    return 0;
}
*/
TRO SearchNode (TRO root,int x)
{
    cout<<endl;
    while(1)
    {
        if(root == NULL)
            return NULL;
        if(root->key==x)
            return root;
        else
        {
            if(root->key < x)
                root = root ->right;
            else
                root = root ->left;
        }
    }
}
int main()
{
    cout << "\t TIM KIEM CAY NHI PHAN" << endl;
    //TRO root;
    Input();
    Output();
    cout<<endl<<x-p;l;
    /*TRO kq = TimkiemCayNhiPhan(root,x);
    if(kq == NULL)
        cout<<"Khong thay ";
    else
        cout<<"Tim thay "<<kq->key;
        */
    /*if(timkiem(x,TRO)== 0)
        cout<<" Khong thay ";
    else
        cout<<" Tim thay ";
        */
        TRO kq =SearchNode(root,x);
    if(kq == NULL)
        cout<<"Khong thay ";
    else
        cout<<"Tim thay "<<kq->key;
    return 0;
}
