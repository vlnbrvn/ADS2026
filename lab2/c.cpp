#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main(){
  int n;
  cin >> n;
  vector <string> result;

  for (int i = 0; i< n; i++ ){
    string name;
    cin >> name;

    if(result.empty() || result.back() != name){
        result.push_back(name);
    }
  } 
  cout << result.size() << endl;
  for ( int i = 0; i < result.size(); i++){
   cout << result[i] << endl;
  }
}
