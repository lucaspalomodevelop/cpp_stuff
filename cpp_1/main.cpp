#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void readfile(string file); 
void writefile(string file);

int main()
{
    writefile("./testfile.txt");
    readfile("./testfile.txt");
    return 0;
}

void readfile(string file)
{
    string line;
    ifstream myfile;
    myfile.open(file);
    if (myfile.is_open())
    {
        while (getline(myfile, line))
        {
            cout << line << '\n';
        }

        myfile.close();
    }
}

void writefile(string file)
{
    string line;
    ofstream myfile;
    myfile.open(file,std::ios_base::app);
    if (myfile.is_open())
    {
        myfile << "hallo\n";
    }
    myfile.close();
}