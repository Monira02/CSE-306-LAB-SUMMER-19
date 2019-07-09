#include<iostream>
#include<cstdlib>
#include<ctime>
#include<fstream>
using namespace std;
void Mergesort(int Array[],int p, int q,int s,int r,int A)
{

int num1=q-p+1,i,j,k;

int num2=r-q;

int t[num1],g[num2];

for(i=0;i<num1;i++)

{
t[i]=A[p+i];
}

for(j=0;j<num2;j++)
{
g[j]=A[q+j+1];
}

i=0,j=0;

for(k=p;i<num1&&j<num2;k++)
{
if(t[i]<g[j])
{
A[k]=t[i++];
}
else
{
A[k]=g[j++];
}
}

while(i<num1)
{
A[k++]=t[i++];
}

while(j<num2)
{
A[k++]=g[j++];
}
}

void Merge(int Array[],int p,int s)
{
int q;

if(p<s)
{
q=(p+s)/2;
Merge(A,p,q);
Merge(A,q+1,s);
merge(A,p,q,s);
}

}
clock_t startTime=clock();
int main()
{


    ofstream fileinput;
    srand(time(NULL));
    fileinput.open("100kinput.txt");
    int num=100000;

   int Array[num];

    for(int i=0;i<num;i++)
    {
         Array[i]=rand()%5000;
        fileinput<<rand()<<endl;

    }
    fileinput.close();

      merge(A,0,num-1);

    ofstream fileoutput;
    fileoutput.open("100koutput.txt");
 clock_t endTime=clock();
    for(int i=0;i<100000;i++)
    {

        fileoutput<<Array[i]<<endl;
    }
    double timelapse=double (endTime-startTime)/CLOCKS_PER_SEC;
    cout<<timelapse<<endl;

    fileoutput.close();
    delete[] Array;
}
