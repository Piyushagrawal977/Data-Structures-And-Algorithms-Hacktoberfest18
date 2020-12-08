#include<iostream.h>
#include<conio.h>
void bubblesort(int a[],int n);
main()
{
   clrscr();
   int a[20],n;
   cout<<"Enter number of elements:";
   cin>>n;
   cout<<endl<<"Enter the elements :";
   for(int i=0;i<n;i++)
   {
      cin>>a[i];
   }
}
bubblesort(int a[],n)
{
   int temp;
   for(int i=1;i<n;i++)
   {
     for(int j=0;j<n;j++)
     {
       if(a[j]>a[j+1])
        {
          temp=a[j];
          a[j]=a[j+1];
          a[j+1]=temp;
        }
     }
    cout<<"\nAfter Pass"<<i+1;
    for(int k=0;k<n;k++)
      cout<<a[k];
   }
}
