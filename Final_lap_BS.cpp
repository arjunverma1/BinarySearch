// to find lower bound in binary seach 

// int lowerBound(vector<int>& arr , int n ,  int x){
//     int low = 0 ; int high = n-1 ; 
//     int ans = n ; 

//     while(low<high){
//         int mid = (low+ high)/2 ; 

//         if(arr[mid]>=x){
//             ans = mid ; 
//             high = mid - 1; 
//         }
//         else {
//             low = mid+1 ; 
//         }
//     }
//     return ans ; 
// }


// //  to find upper bound in binary search

// int upperBound(vector<int>& arr , int n , int x ){
//     int low = 0 ; int high = n-1 ; 
//     int ans = n ; 

//     while(low<high){
//         int mid = (low+high)/2 ; 

//         if(arr[mid<=x]){
//             ans = mid ; 
//             low = mid -1 ; 
//         }
//         else{
//             high = mid -1 ; 
//         }
//     }
//     return ans ; 
// }
