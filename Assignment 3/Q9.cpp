[4:42 pm, 02/09/2020] ❤️𝙊𝙈𝙅𝘼❤️: #include<iostream>
using namespace std;

#define ll long long

int main() {

  int p[500] = {0};

  for (int i = 3; i <= 500; i += 2)
  {
    p[i] = 1;
  }
  for (int i = 3; i <= 500; i += 2)
  {
    if (p[i] == 1)
    {
      for (int j = i * i ; j <= 500; j += i)
      {

        p[j] = 0;

      }
    }
  }
  p[0] = p[1] = 0;
  p[2] = 1;

  for (int i = 1; i < 500; i++)
  {

    if (p[i] > 0) {
      cout << i << endl;
    }
  }
  return 0;
}
[4:42 pm, 02/09/2020] ❤️𝙊𝙈𝙅𝘼❤️: #include <bits/stdc++.h> 
using namespace std; 
  

bool flag(char str[],  
              int s, int a) 
{ 
      
     
    if (s == a) 
    return true; 
  
    
    if (str[s] != str[a]) 
    return false; 
  
   
    if (s < a + 1) 
    return flag(str, s + 1, a - 1); 
  
    return true; 
} 
  
bool testPalindrome(char str[]) 
{ 
    int n = strlen(str); 
      
    
    if (n == 0) 
        return true; 
      
    return flag(str, 0, n - 1); 
} 
  

int main() 
{ 
    char str[10];
    cin>>str; 
  
    if (testPalindrome(str)) 
    cout << "Yes"; 
    else
    cout << "No"; 
  
    return 0; 
}
