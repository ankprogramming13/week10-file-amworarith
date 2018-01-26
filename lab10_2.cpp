#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
        /* code */
        string line;
        ifstream myfile ("example.txt");
        if (myfile.is_open())
        {
            while ( getline(myfile,line) )
            {
                cout << line << '\n';
            }
            myfile.close();
        }
        else cout << "Unable to open file";
        return 0;
}
ประกาศออบเจ็ต string ขึ้นมา เพื่อเก็บค่า line
บรรทัดต่อมาประกาศตัวแปร myfile 
ทำการเขียนประแกรมเพื่อวนลูบ
