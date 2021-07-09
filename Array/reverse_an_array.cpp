string reverseWord(string str){
    
    //Your code here
    int start = 0, end = str.length() - 1;
  
    while(start < end)
    {
        char temp = str[end];
        str[end--] = str[start];
        str[start++] = temp;
    }
    return str;
}
