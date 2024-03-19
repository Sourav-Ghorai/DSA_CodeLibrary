package College_Programmes.Day1;

public class CompareObject {
    String name;
    int age;
    CompareObject(String name, int age){
        this.name = name;
        this.age = age;
    }
    public boolean equals(Object obj){
        if(this == obj) return true;
        if(obj == null) return false;
        
        CompareObject person = (CompareObject) obj;
        return age == person.age && name.equals(person.name);
    }
    public static void main(String [] args){
        CompareObject person1 = new CompareObject("Sourav", 20);
        CompareObject person2 = new CompareObject("Shashi", 22);
        CompareObject person3 = new CompareObject("Sourav", 20);

        System.out.println("person1.equals(person2): " + person1.equals(person2));
        System.out.println("person1.equals(person3): " + person1.equals(person3)); 
    }
}
