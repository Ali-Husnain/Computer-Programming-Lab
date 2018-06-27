// #include <bits/stdc++.h>
#include <fstream>
#include <iostream>

using namespace std;

int main()
{
    int lines =0,c = 0, lc = 0, uc = 0,words = 0;
    string str, alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZ",alpha1 = "abcdefghijklmnopqrstuvwxyz";
    char ch;
    // ofstream out("file.txt");
    ifstream in("file.txt");
    if(in.is_open())
    {
        while(getline(in, str));
        {
            // cout<<"he";
            lines+=1;
        }
        in.clear();
        in.seekg(0,ios::beg);
        while(in.get(ch))
        {
            c+=1;
        }
        in.clear();
        in.seekg(0,ios::beg);
        while(in.get(ch))
        {
            for(int i = 0; i<26; i++)
            {
                if(alpha[i] == ch)
                {
                    uc+=1;
                }
            }
            for(int i = 0; i<26; i++)
            {
                if(alpha1[i] == ch)
                {
                    lc+=1;
                }
            }

        }
        in.clear();
        in.seekg(0,ios::beg);
        string wd,data;
        while(in.get(ch))
        {
            in >> wd;
            words+=1;
        }
        in.clear();
        in.seekg(0,ios::beg);
        ofstream out("file2.txt");
        while(getline(in , str))
        {
            // cout<<str<<endl;
            out<<str;
        }
        out.close();
        in.close();
        // in.clear();
        // in.seekg(0,ios::beg);
        ifstream in2("file2.txt");
        while(getline(in2 ,str))
        {
            cout<<str<<endl;
        }


    }

    else
    {
        cout<<"Error opening\n";
    }
    cout<<"lines "<<"char "<<"lower  "<<"upper  "<<"words"<<endl;
    cout<<lines<<"      "<<c<<"   "<<lc<<"    "<<uc<<"      "<<words;

    return 0;
}
