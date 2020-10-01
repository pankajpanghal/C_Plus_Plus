#include<iostream.h>
#include<conio.h>
void merge(int[],int,int[],int,int[]);
void main()
{
    clrscr();
   int A[50],B[50],C[50],MN=0,M,N;
    cout<<"\nHow many elements you want to Enter :";
      cin>>M;
    cout<<"\nEnter first array element :";
    for(int i=0;i<M;i++)
      cin>>A[i];
    cout<<"\nHow many element you want to Enter :";
      cin>>N;
    MN=M+N;
    cout<<"\nEnter second array element : ";
     for(i=0;i<N;i++)
     cin>>B[i];
     merge(A,M,B,N,C);
     cout<<"\nThe merged array :";
     for(i=0;i<MN;i++)
     cout<<C[i]<<" ";
     cout<<endl;
     getch();
     }

     void merge(int A[],int M,int B[],int N,int C[])
     {
     int a,b,c;
     for(a=0,b=0,c=0;a<M&&b<=N;)
     { if(A[a]<=B[b])
     C[c++]=A[a++];
	else C[c++]=B[b++];
      }
      if(a<M)
      { while(a<M)
      C[c++]=A[a++];
      }
      else
      { while(b<=N)
      C[c++]=B[b++];
      }
      }
