/* #include<iostream>
using namespace std;

int binarysearch(int arr[],int size, int key){
int start=0;
int end=size-1;

int mid=start+(end-start)/2;

while(start<=end){
    if(arr[mid]==key){
        return mid;
    }
    if(key>arr[mid]){
        start=mid+1;

    }
    else{
        end=mid-1;
    }

    mid=start+(end-start)/2;

}
return -1;
}


int findpeak(int arr[], int n){
int start=0;
int end=n-1;

int mid=start+(end-start)/2;

while(start<=end){
    if(arr[mid]<arr[mid+1]){
        start=mid+1;
    }
    
    else{
        
        end=mid;
    }

    mid=start+(end-start)/2;

}
return start;
}

int main(){

    //int key;
    //cin>>key;
    int even[6]={3,7,9,13,20,};
    int odd[5]={33,56,70,88,90};

    int evenindex=binarysearch(even,6,13);
    cout<<"index of key is "<<evenindex<<endl;

    int oddindex=binarysearch(odd,6,70);
    cout<<"index of key is "<<oddindex<<endl;
    
    int peak=findpeak(odd,5);
    cout<<"index of key is "<<peak<<endl;

    return 0;

}

*/
#include <iostream>
#include <vector>

using namespace std;

int binarySearch(const vector<int>& arr, int target) {
    int left = 0;
    int right = arr.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2; // To prevent integer overflow

        if (arr[mid] == target) {
            return mid; // Found the target at index mid
        } else if (arr[mid] < target) {
            left = mid + 1; // Adjust the left boundary
        } else {
            right = mid - 1; // Adjust the right boundary
        }
    }

    return -1; // Target not found
}

int main() {
    vector<int> arr = {1, 3, 4, 5, 7, 9, 11};
    int target = 7;

    int result = binarySearch(arr, target);

    if (result != -1) {
        cout << "Element " << target << " found at index " << result << endl;
    } else {
        cout << "Element " << target << " not found in the array." << endl;
    }

    return 0;
}



