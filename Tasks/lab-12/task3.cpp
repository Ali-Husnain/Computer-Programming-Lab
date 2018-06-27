#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    string x,y,str[24];
    char ch;
    int num,marks[12],i =0,j =0;
    // ofstream out("students.txt");
    ifstream in("students.txt");
    if(in.is_open())
    {
        // cout<<"successfully\n";
        while(in.get(ch))
        {

            in>>x>>y>>num;
            // cout<<x<<y<<num;
            str[i] = x ;str[i+1] = y;
            marks[j] = num;
            i+=2; j+=1;
        }
    }
    else
    {
        cout<<"Error\n";
    }
    in.close();
    int j = 0;
    for(int i = 0; i<24; i+=2)
    {
        cout<<str[i]<<" "<<str[i+1]<<" "<<marks[j]<<" \n";
        j+=1;
    }
    // for(int i = 0; i<12; i++)
    // {
    //     cout<<marks[i]<<" ";
    // }
    cout<<endl;
    int max = 0;
    for(int i = 0; i<11; i++ )
    {
        if(marks[i]> marks[i+1])
        {
            max = i;
        }
        // else
        // {
        //     max = i;
        // }
    }
    cout<<str[2*max]<<" "<<str[2*max+1]<<" "<<marks[max]<<endl;

    return 0;
}
