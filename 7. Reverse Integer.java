class Main {
    public static void main(String[] args) {
        System.out.println(reverse(1534236469));
    }
    public static int reverse(int x) {
        int [] a = new int [10];
        int i=0;
        if(x>(Math.pow(2,31)-1) || x<(0-Math.pow(2,31)) )
            return 0;
        int num=0;
        for(i=0;i<10;i++) a[i]=0;
        i=0;
        while(x!=0){
            a[i]=x%10;
            x=x/10;
            i++;
        }
        int j=0;
        for(i=i-1;i>-1;i--){
            if(num+a[i]*(Math.pow(10,j))> (Math.pow(2,31)-1)) return 0;
            if(num+a[i]*(Math.pow(10,j))<(0-Math.pow(2,31))) return 0;
            num+=a[i]*(Math.pow(10,j));
            j++;
        }
        //System.out.println(num);
        
        if(num>(Math.pow(2,31)-1) || num<(0-Math.pow(2,31)) )
            return 0;
       
        return num;      
    }
    
}
