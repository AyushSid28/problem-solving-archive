class Solution{
    public:
      void mergeSort(int arr[],int low,int high){
        
      }
      void merge(int arr[],int low,int mid,int high){
        int mid=(low+high)/2;
        merge(arr,low,mid,high);
        mergeSort(arr,low,mid+1,high);

    
      }
}