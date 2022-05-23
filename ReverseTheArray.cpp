string reverseWord(string str){
    
  //Your code here
  
  int i= 0;
  int j=str.length()-1;
  
  while(i<=j)
  {
      swap(str[i],str[j]);
      i++;
      j--;
  }
  return str;
  
}
