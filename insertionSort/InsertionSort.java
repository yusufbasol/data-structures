public class InsertionSort{
 public static void main(String a[]){
 	int i;
 	int array[] = {12,9,4,99,120,1,3,10};
 System.out.println("Sıralamadan önceki durum:");
 	for(i = 0; i < array.length; i++)
 		 System.out.print( array[i]+" ");
 		 System.out.println();
		 insertion_srt(array, array.length);
		 System.out.print("Sıralamadan sonraki durum:\n");
 	for(i = 0; i <array.length; i++)
		 System.out.print(array[i]+" ");
 		 System.out.println();
 }
 public static void insertion_srt(int array[], int n){
 	for (int i = 1; i < n; i++){
 		int j = i;
 		int tasinan = array[i];
 		while ((j > 0) && (array[j-1] > tasinan)){
 		array[j] = array[j-1];
		 j--;
 	}
 	array[j] = tasinan;
 }
 }}
