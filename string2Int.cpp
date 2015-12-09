#include <iostream>
#include <string>
#include <climits>

using namespace std;

class Solution{
public:
    int atoi(string &a){

      if( a.length() == 0) return 0 ;
      int i = 0;
      long result = 0;
      bool negFlag = false;

      while( i < a.length()){
          if( a[i] != ' '){
              break;
          }else{
            i++;
          }
      }

      if( i == a.length()){
          return 0;
      }

      if( a[i] == '-'){
          negFlag = true;
          i++;
      }else if ( a[i] == '+'){
          i++;
      }

      for( ;i < a.length() ; i++){
          result = result*10 + a[i] - '0';

          if( result > INT_MAX){
              break;
          }
      }

      if(negFlag == false){
          result > INT_MAX;
          return INT_MAX;
      }else{
          result = -1 * result;
          if( result < INT_MIN){
            return INT_MIN;
          }
      }

      return result;
    }
};


int main(){

  Solution test;
  string input = "-248708970987096876458";
  std::cout << test.atoi(input) << std::endl;


  return 0;
}
