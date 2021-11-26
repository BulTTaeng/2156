#include <iostream>
#include <vector>

using namespace std;

long long dp[100001];
vector<int> grape;


int main() {
  int n , input;
  cin >> n;

  for(int i =0; i< n; i++){
    cin >> input;
    grape.push_back(input);
  }

  dp[0] = grape[0];

  dp[1] = grape[0] + grape[1];

  if(grape[0] > grape[1]){
    dp[2] = grape[2] + grape[0];
  }
  else{
    dp[2] = grape[2] + grape[1];
  }

  if(dp[1] > dp[2]){
    dp[2] = dp[1];
  }

  int c1 ,c2;
  for(int i =3; i<n; i++){

    c1 = dp[i-3] + grape[i-1] + grape[i];
    c2 = dp[i-2]+grape[i];
    if(c1 > c2){
      dp[i] = c1;
    }
    else{
      dp[i] = c2;
    }

    if(dp[i-1] >= dp[i]){
      dp[i] = dp[i-1];
    }
    
  }

  cout << dp[n-1];
  return 0;

  
}