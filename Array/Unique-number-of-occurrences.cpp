class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
    int count = 1;
    int j = 1;
    vector<int>temp;
    sort(arr.begin(), arr.end());
    for (int i = 0; i < arr.size()-1; i++)
    {
        if (arr[i] == arr[j])
        {
            j++;
            count++;
            continue;
        }
        else
        {
            temp.push_back(count);
            j++;
            count = 1;
            continue;
        }
        temp.push_back(count);
        count = 1;
    }
    temp.push_back(count);
    sort(temp.begin(), temp.end());
    for(int i = 0; i < temp.size()-1;i++){
        if(temp[i] == temp[i+1]){
            return false;
        }
    }
    return true;
    }
};
