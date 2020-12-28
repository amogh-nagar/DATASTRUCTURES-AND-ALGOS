vector<int> quickSort(vector<int> arr) {
    vector<int> left, right, equal, result;

    for(vector<int>::iterator it = arr.begin(); it != arr.end(); ++it) {
        if(*it > arr[0])
            right.push_back(*it);
        else if(*it < arr[0])
            left.push_back(*it);
        else
            equal.push_back(*it);
    }

    for(vector<int>::iterator it = left.begin(); it != left.end(); ++it)
        result.push_back(*it);

    for(vector<int>::iterator it = equal.begin(); it != equal.end(); ++it)
        result.push_back(*it);

    for(vector<int>::iterator it = right.begin(); it != right.end(); ++it)
        result.push_back(*it);

    return result;
}