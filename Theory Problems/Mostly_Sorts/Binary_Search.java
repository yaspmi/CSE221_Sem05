public class Binary_Search{
    public static void main(String [] args) {
        int[] arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
        int target = 5;
        int result = binarySearch(arr, target);
        if (result == -1) {
            System.out.println("Element not found in the array.");
        } else {
            System.out.println("Element found at index: " + result);
        }
    }
    public static int binarySearch(int [] arr, int x){
        int left=0;
        int right=arr.length-1;
        int mid=(right+left)/2;

        while(left<=right){
            if(arr[mid]==x) return mid;
            else if (arr[mid]>x) right=mid-1;
            else left=mid+1;
            mid=(left+right)/2;
        }
        return -1;
    }
}