class MedianFinder
{
public:
    MedianFinder()
    {
    }
    priority_queue<int> maxHeap;
    priority_queue<int, vector<int>, greater<int>> minHeap;

    void addNum(int num)
    {
        if (minHeap.empty() and maxHeap.empty())
        {
            maxHeap.push(num);
        }
        else
        {
            if (num > maxHeap.top())
            {
                minHeap.push(num);
            }
            else
            {
                maxHeap.push(num);
            }
        }

        int n = minHeap.size();
        int m = maxHeap.size();

        if ((m - n == 2) or (m - n == -2))
        {
            if (n > m)
            {
                int topi = minHeap.top();
                minHeap.pop();
                maxHeap.push(topi);
            }
            else
            {
                int topi = maxHeap.top();
                maxHeap.pop();
                minHeap.push(topi);
            }
        }
    }

    double findMedian()
    {
        int n = minHeap.size();
        int m = maxHeap.size();

        if ((m + n) % 2)
        {
            if (m > n)
            {
                return (double)(maxHeap.top());
            }
            return (double)(minHeap.top());
        }
        return ((double)(minHeap.top()) + (double)(maxHeap.top())) / 2;
    }
};
