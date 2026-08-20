class Solution {
    public int[] pivotArray(int[] nums, int pivot) {
        int n=nums.length;
        int cur=0;
        int ocr=0;
        int arr[]=new int[n];
        for(int i=0;i<n;i++){
            if(nums[i]<pivot){
                arr[cur]=nums[i];
                cur++;
            }
            else if(nums[i]==pivot){
                ocr++;
            }
        }
        for(int i=0;i<ocr;i++){
            arr[cur]=pivot;
            cur++;
        }

        for(int i=0;i<n;i++){
            if(nums[i]>pivot){
                arr[cur]=nums[i];
                cur++;
            }
        }
       return arr; 
    }
}