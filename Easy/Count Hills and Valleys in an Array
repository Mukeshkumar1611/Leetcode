
int countHillValley(int *nums, int n)
{
    int temp[n];
    int k = 0;
    temp[k++] = nums[0];
    int i;
    for (i = 1; i < n; i++)
    {
        if (nums[i] != nums[i - 1])
        {
            temp[k++] = nums[i];
        }
    }
    int count = 0;
    i = 1;
    while (i < k - 1)
    {
        if (temp[i] > temp[i + 1] && temp[i] > temp[i - 1])
        {
            count++;
        }
        if (temp[i] < temp[i + 1] && temp[i] < temp[i - 1])
        {
            count++;
        }
        i++;
    }
    return count;

}
