class DataStream {
public:
    int value;
    int k;
 
    int same=0;
    queue<int>q;
    DataStream(int value, int k) {
          this->value=value;
        this->k=k;
    }
    
    bool consec(int num) {
       
        q.push(num);
        if(num==value)same++;
        if(q.size()<k)return false;
        else if(q.size()==k)return same==k;
        else {
            int top=q.front();
            q.pop();
            if(top==value)same--;
            
            return same==k;
        }
        
        
        
        
        
    }
};

/**
 * Your DataStream object will be instantiated and called as such:
 * DataStream* obj = new DataStream(value, k);
 * bool param_1 = obj->consec(num);
 */