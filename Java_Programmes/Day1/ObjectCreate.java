package College_Programmes.Day1;

public class ObjectCreate {
    int a;
    char ch;
    ObjectCreate(int a, char ch){
        this.a = a;
        this.ch = ch;
    }
    void display(){
        System.out.println(a + " " + ch);
    }

    public static void main(String [] args){
        ObjectCreate obj = new ObjectCreate(5,'a');
        obj.display();
    }
}
