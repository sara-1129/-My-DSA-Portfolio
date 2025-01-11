class Solution {
public:
  


    bool isPalindrome(string s) {
     if (s == " ")
     {
        return true;
     }   
      int n =s.size();
      string temp;
      for(int i = 0; i < n; i++)
      {
        if (isalnum(s[i]))
        {
            temp.push_back(s[i]);
        }
       
      }
       transform(temp.begin(), temp.end(), temp.begin(), ::tolower); 
        int t =temp.size();
      for (int i = 0; i< t/2 ; i++)
      {
        if (temp[i] != temp[t-i-1])
        {
            return false;
        }
      } 
      return true;
    }
};