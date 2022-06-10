void sort012(int *arr, int n)
{
   int l = 0, m = 0, h = n-1; // Have three variable low for 0, mid for 1, and high for 2
   // Intialize low and mid with 0 and high with last index of array
   while(m <= h){
       if(arr[m]==0){ // Swap the elements with mid if 0 is found
           swap(arr[m], arr[l]); 
           l++; m++; // increase the low as well mid
       }
       else if(arr[m]==2){ // swap the elements with mid if 2 is found
           swap(arr[h], arr[m]);
           h--; // decrease the high but not mid
       }
       else{
           m++; // if 1 is found just move the mid
       }
   }
}