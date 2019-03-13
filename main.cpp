#include <iostream>
#include <stack>
#include <deque>
using namespace std;


int main() {
  stack<string> data;
  string temp;
  int num; //количество скобок в последовательности
  cin >> num;
  if(num % 2){
    cout << "Not correct";
    return 1;
  }
  cin >> temp;
  if(temp == "]" or temp == "}" or temp == ")"){
    cout << "Not correct";
    return 1;
  }
  data.push(temp);
  for(int i = 0; i < num-1; i++){
    cin >> temp;
    if(temp == "]" or temp == "}" or temp == ")"){
      if(temp == "]"){
        if(data.top() != "["){
          cout << "Not correct";
          return 1;
        }
      }else{
        if(temp == "}"){
          if(data.top() != "{"){
            cout << "Not correct";
            return 1;
          }
        }else{
          if(data.top() != "("){
            cout << "Not correct";
            return 1;
          }else{
            data.push(temp);
          }
        }
      }
    }
  }
}