class Solution {
    public:
        bool isValidSerialization(string preorder) {
           int slots=1;
           stringstream ss(preorder);
           string token;
           while(getline(ss,token,',')){
             
             if(slots==0) return false;
             slots--;
             //if(token=="#"){} ;
             if(token!="#") slots+=2;
             
    
             
           }  
           return slots==0; 
        }
    };