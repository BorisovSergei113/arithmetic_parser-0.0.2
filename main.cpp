#include <sstream>
#include <iostream>

using namespace std;

int main()
{
    float a = 0;
    float c=0;
    char b=0;
    string string;
    getline ( cin, string );
    istringstream stream ( string );
    stream >> c;
    while (stream >> b)
    {
          if (b == '-')
           {
            stream >> a;
            c = c - a;
        }
             if (b == '+')
        {
            stream >> a;
            c = c + a;
          }
             if (b == '*')
        {
            stream >> a;
            c = c * a;
           }
          if (b == '/')
           {
            stream >> a;
            c = c / a;
          }

      }
    cout << c << '\n';
    return 0;

}