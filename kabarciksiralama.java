public class kabarciksiralama {
    public static void main(String args[]){
                    int [] x = {3,2,1};
                    siralama s = new siralama();
            s.bubblesort(x);
            for(int i : x){
                System.out.println(i);
            }
    }
}
