#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ifstream in("question_full_data.txt");
    ofstream out("question_full_data_b.txt");
    char buffer[256];
    int a,b,c;
    while(!in.eof())
    {
        in.getline(buffer,20);
        sscanf(buffer,"%d %d %d",&a,&b,&c);
        cout<<a<<endl;
        if (c!=2)
        {
            out<<a<<" "<<b<<" "<<c<<endl;
        }
    }
    cout<<"1"<<endl;
    in.close();
    out.close();
    return 0;
}
