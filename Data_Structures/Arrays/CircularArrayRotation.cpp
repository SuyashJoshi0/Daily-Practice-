vector<int> circularArrayRotation(vector<int> a, int k, vector<int> queries) {
    int n=a.size();
     k = k % n;
     
    int last = a[n-1];
     vector<int> result;
    for (int i = 0; i < queries.size(); i++) {
        int queryIndex = queries[i];
        // Get the element at the rotated position
        result.push_back(a[(queryIndex - k + n) % n]);  // Rotate by k to the right
    }

     
     return result;
   
}
