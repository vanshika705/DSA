#include <iostream>
#include <vector>
#include <set>
# include <algorithm>
using namespace std;

// // brute force approch
// vector<vector<int>> threeSum(vector<int>& vec ){
//     int n = vec.size();
//     vector<vector<int>> ans;

//     set<vector<int>> s; // set<uniqueTriplets>

//     for(int i = 0 ; i < n ; i++ ){
//         for(int j = i+1 ; j < n ; j++ ){
//             for(int k = j+1 ; k < n ; k++ ){
//                 if(vec[i] + vec[j] + vec[k] == 0){
//                     vector<int> trip = { vec[i] , vec[j] , vec[k] };
//                     sort(trip.begin(), trip.end());

//                     if(s.find(trip) == s.end() ){
//                         s.insert(trip);
//                         ans.push_back(trip);
//                     }

//                 }
//             }
//         }
//     }
//     return ans;
// }

// // hashing approch
// vector<vector<int>> threeSum(vector<int>& vec ){
//     int n = vec.size();
 

//     set<vector<int>> uniqueTriplets; // set<uniqueTriplets>

//     for(int i = 0 ; i < n ; i++ ){
//         int target = - vec[i]; // b +c = -a         a + b+ c =0
//         set<int> s ;

//         for(int j = i+1 ; j <n ; j++){
//             int third = target - vec[j];   // c = -a -b   c = - target - b

//             if(s.find(third) != s.end()){
//                 vector<int> trip =  { vec[i] , vec[j] , third};
//                 sort(trip.begin(), trip.end());
//                 uniqueTriplets.insert(trip) ;
//             }
//             s.insert(vec[j]);
//         }
//     }

//     vector<vector<int>> ans(uniqueTriplets.begin(),uniqueTriplets.end());
//     return ans;
// }

// optimal approch 2 pointers 
vector<vector<int>> threeSum(vector<int>& vec ){
    int n = vec.size();
    vector<vector<int>> ans;
    vector<int> triplet ;


    sort(vec.begin(),vec.end());

    for(int i = 0 ; i < n ; i++ ){
        if(i>0 && vec[i] == vec[i-1]) continue;

        int j = i+1 , k = n-1 ;

        while(j< k){
            int sum = vec[i] + vec[j] + vec[k] ;
            if(sum < 0){
                j++;
            }
            else if(sum> 0) {
                k--;
            }
            else {
                triplet.push_back(vec[i]);
                triplet.push_back(vec[j]);
                triplet.push_back(vec[k]);
                ans.push_back(triplet);

                j++ ; k-- ;

                while(j<k && vec[j] == vec[j-1]) j++ ;
            }

        }
    }
    return ans;
}



int main(){
    vector<int> vec = {-1,0,1,2,-1,-4};

    for(int val:vec){
        cout << val << " ";
    }
    cout << endl;

    cout<< "elements of three sum pair is : ";
    for(const auto& row :threeSum(vec)){
            for(const auto& element : row){
            cout << element << " ";
        }
        cout << endl;
    }
    cout << endl;

    return 0;
}
