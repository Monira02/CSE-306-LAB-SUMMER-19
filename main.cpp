#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int a,b,arr[40][40];
        ifstream fileinput;
        fileinput.open("input.txt");
            fileinput>>a>>b;

    int **trans;
    trans=new int*[a];
        for(int i=0;i<a;i++)
            {
                trans[i]=new int[b];
            }
    ofstream fileoutput;
            fileoutput.open("output.txt");

    for (int i=0;i<a;i++)
    {
        for (int j=0;j<b;j++)
    {

                fileinput>>trans[i][j];
                arr[j][i] = trans[i][j];
    }

    }
    for(int i=0;i<b;i++)
    {
        for(int j=0;j<a;j++)
     {

        fileoutput<<arr[i][j]<<" ";
            if(j==a-1)
                fileoutput<<endl;
    }

  }
}
