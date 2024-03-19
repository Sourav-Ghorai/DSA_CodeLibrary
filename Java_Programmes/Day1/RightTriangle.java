package College_Programmes.Day1;

public class RightTriangle {
    int n;
    RightTriangle(int n){
        this.n = n;
    }
    void display(){
        for(int i = 0; i<n; i++){
            for(int j = 0; j<=i; j++){
                System.out.print("*");
            }
            System.out.println();
        }
    }

    public static void main(String [] args){
        RightTriangle rt = new RightTriangle(5);
        rt.display();
    }
}
