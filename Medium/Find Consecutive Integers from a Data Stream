class DataStream {
public:
    int val;
    int kk;
    int count  = 0;
    DataStream(int value, int k) {
        val = value;
        kk = k;
    }
    
    bool consec(int num) {
        if(num == val)
        {
            count++;
        }
        else
        {
            count = 0;
        }
        if(count >= kk) return true;
        return false;
    }
};
