import java.util.ArrayList;

public class rearrange_powere_of_two{
    public boolean reorderedPowerOf2(int n) {
        if(n<1)return false;
        ArrayList<Integer> ar=new ArrayList<>();
        String num=Integer.toString(n);
        int number=(int)Math.pow(10, num.length());
        ar.add(1);
        for(int i=1;i<number;i=i*2){
            ar.add(i);
        }
        for(int i=0;i<ar.size();i++){
        if(sameDigitFrequency(n, ar.get(i)))
            return true;
        }

        return false;
    }
    boolean sameDigitFrequency(int a, int b) {
    int[] count = new int[10];
    
    while (a > 0) {
        count[a % 10]++;
        a /= 10;
    }
    
    while (b > 0) {
        count[b % 10]--;
        b /= 10;
    }
    
    for (int c : count) {
        if (c != 0) return false;
    }
    return true;
}

    public static void main(String[] args) {
        System.out.println(new rearrange_powere_of_two().reorderedPowerOf2(45));
    }
}