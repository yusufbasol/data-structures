public class Siralama{
public static int [] selectionsort(int [] A,int n)
  {
    int tmp;
    int min;
 
    for(int i=0; i < n-1; i++)
    {
      min=i;
 
      for(int j=i; j < n; j++)
      {
        if (A[j] < A[min]){
 
          min=j;
        }
 
      }
        tmp=A[i];
        A[i]=A[min];
        A[min]=tmp;
    }
    return A;
  }
    public static void main(String args[]){
        int a[] = {6,4,2,3,1,5};
        a = selectionsort(a,6);
        for(int i = 0;i<6;i++)
            System.out.println(a[i]);
    }
}
