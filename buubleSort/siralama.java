class siralama{
  public void bubblesort(int [] A) 
  {
     int tmp;

    for(int i=0; i<A.length; i++)
    {
    boolean sirali=true;
      for(int j=A.length-1 ; j>i;j--) 
      {

        if(A[j-1]>A[j]) //şayet buraya girmiyorsak dizi sıralı demektir
        {
          sirali=false;  
          tmp=A[j-1];
          A[j-1]=A[j];
          A[j]=tmp;
	
	System.out.println(A[j]);
        }

	
      }
      if(sirali)
               //dizi sirali cikilabiir
         break;
    }
  }
}

