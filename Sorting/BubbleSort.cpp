class Solution{
    public:
     void bubbleSort(int arr[],int){
        int n=arr.size();
        int arr[]={64,35,25,12,11,90};
        for(int i=0;i<=n-1;i++){
          for(int j=0;j<=n-1-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
        }
        
     }
}