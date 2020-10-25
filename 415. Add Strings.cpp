string addStrings(string num1, string num2){
   int extra=0;
        int l1=num1.size()-1;
        int l2=num2.size()-1;
        string s="";
        while(l1>=0 || l2>=0 || extra)
        {  if(l1>=0)
            extra+=(num1[l1]-'0'),l1--;
         if(l2>=0)
            extra+=(num2[l2]-'0'),l2--;
            
         s.push_back(extra%10+'0');
         extra/=10;
        }
        reverse(s.begin(),s.end());
        return s;
}
