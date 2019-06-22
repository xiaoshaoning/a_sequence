#include<iostream>
#include<fstream>
#include<cmath>
#include<string>
#include<vector>
#include<iterator>
#include<sstream>

using namespace std;

int main()
{
    int power_2;
    int left, k;
    int result = 0;
    int ii;

    string my_string = "";

    ifstream input_file("sequence.in");
    ofstream output_file("sequence.out");

    getline(input_file, my_string);

    istringstream iss(my_string);

    vector<string> my_string_vector(istream_iterator<string>{iss}, istream_iterator<string>());

    k = stoi(my_string_vector[0]);
    left = stoi(my_string_vector[1]);

    //sanity check
    if (left > 1000)
    {
        cout<<"The input N is out of the scope."<<endl;
        return 1;
    }

    if ((k > 15) || (k < 3))
    {
       cout<<"The input k is out of the scope."<<endl;
       return 1;
    }

    //compute the binary representation of N and change the radix to k
    for (ii = 9; ii >= 0; ii--)
    {
        power_2 = pow(2, ii);
        left = left - power_2;
        if (left < 0)
        {
            left = left + power_2;
            continue;
        }
        else
        {
            result = result + pow(k, ii);
        }
    }

    cout<<result<<endl;

    output_file<<result<<endl;

    return 0;
}
