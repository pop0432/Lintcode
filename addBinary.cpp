#include <iostream>
#include <string>

using namespace std;

class Solution{

public:
    string addBinary(string & a, string & b){

     string result;
     int carry = 0;

     for(int i = a.length()-1, j = b.length()-1; i>=0 || j >=0 ; --i, --j){

        int num1 = i>= 0 ? a[i] - '0' : 0;
        int num2 = j>= 0 ? b[j] - '0' : 0;
        int val = (num1 + num2 + carry)/2;
        carry = (num1 + num2 + carry)%2;
        result.insert( result.begin(), val + '0');

     }
     if( carry == 1){
        result.insert( result.begin(), '1');
     }

      return result;
    }

};

int main()
{
  Solution test;
  string a = "11";
  string b = "10";

  std::cout <<  test.addBinary(a, b)<< std::endl;



}
