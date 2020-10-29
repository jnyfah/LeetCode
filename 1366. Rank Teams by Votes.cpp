string rankTeams(vector<string>& votes) {

    int n=votes[0].size();
    std::vector<std::string> freq(26,string(n,'0'));
		for(string s:votes){
            for(int i=0;i<n;i++){
                freq[s[i]-'A'][i]++;
            }
        }
        string res=votes[0];
		
	
        sort(res.begin(),res.end(),[freq](char a,char b){
            if(freq[a-'A']==freq[b-'A'])return a<b;
            return freq[a-'A']>freq[b-'A'];
        });
        return res;
    }
