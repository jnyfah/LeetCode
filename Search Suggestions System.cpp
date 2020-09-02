class Solution {
public:
    vector<vector<string>> suggestedProducts(vector<string>& products, string searchWord) {
        
       size_t word_size = searchWord.size(), product_size = products.size();
        
        vector<vector<string>> result(word_size);
        
        sort(products.begin() , products.end());
        string temp = "";
        
         for(size_t i = 0; i < word_size; i++){
             
            temp += searchWord[i];
            
            size_t index = lower_bound(products.begin(),products.end(),temp)-products.begin();
             
             for(size_t j = index ; j < min(index +3, product_size); j++)
             {
                 if (products[j].substr(0, i+1) == temp)
                 {
                     result[i].push_back(products[j]);
                 }else
                 {
                     break;
                 }
             }
         }
             return result;
    }
};
