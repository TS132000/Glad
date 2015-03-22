#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream out("question_full_data_person.txt");
    for (int i=1;i<60;i++)
    {
        cout<<i<<endl;
        ifstream in("question_full_data.txt");
        char buffer[256];
        int a,b,c;
        while(!in.eof())
        {
            in.getline(buffer,20);
            sscanf(buffer,"%d %d %d",&a,&b,&c);
            if (b==i)
            {
                out<<a<<" "<<b<<" "<<c<<endl;
            }
        }
        in.close();
    }

    out.close();
    return 0;
}
