https://practice.geeksforgeeks.org/problems/reverse-a-string/1

string reverseWord(string str){
  //Your code here
  string rev;
  for(int i=0; i<str.length();i++){
      rev.push_back(str[str.length()-i-1]);
  }
  return rev;
}
