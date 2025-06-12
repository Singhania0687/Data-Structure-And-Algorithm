// search element in an infinite sorted array
int low=0,high=100;
while(high<arr.size() and low<=high )
{
     if(target>arr[high])
    {
        low=high;
         high=min(high*2,arr.size()-1);
    }
    else
     break;

}
   while(low<=high )
   {
   
    
        int mid=low+(high-low)/2;
        if(arr[mid]==target)
        return mid;
        else if(arr[mid]>target)
        high=mid-1;
        else
        low=mid+1;

   }