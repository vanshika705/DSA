#include <iostream>
#include <vector>
using namespace std;

// brute force approch 

// int maxArea(vector<int>& height){
   
//    int ans =0 , wd , ht ,area = 0 , n = height.size();
//    for( int i = 0 ; i < n ; i++){
//         for ( int j = i+1  ; j < n ; j ++){
//             wd = j - i;
//             ht = min( height[i],height[j]);
//             area = wd * ht;

//             ans = max( ans ,area);
//         }
//     }
//     return ans;
// }

// optimized approch 2 pointer

int maxArea(vector<int>& height){
   
    int ans =0 , wd , ht ,area = 0, lp = 0 , rp = height.size()-1 ;
    while(lp < rp){
        wd = rp - lp;
        ht = min( height[lp],height[rp]);
        area = wd * ht;

        ans = max( ans ,area);
        height[lp] < height[rp] ? lp++ : rp-- ;
    }
    return ans;
}



int main(){

    vector<int> height;
    height.push_back(1);
    height.push_back(8);
    height.push_back(6);
    height.push_back(2);
    height.push_back(5);
    height.push_back(4);
    height.push_back(8);
    height.push_back(3);
    height.push_back(7);


    cout << "vector is : " ;
    for(int val:height){
        cout<< val << " ";
    }
    cout << endl;

    cout<< "Area of container with max water is : " << maxArea(height);
    return 0;
}