class A{
    public void display(){
        System.out.println("A");
    }
}
class B{
    public void display(){
        System.out.println("B");
    }
}
class C{
    public void display(){
        System.out.println("C");
    }
}

class Sample{
    public static void main(String arg[]){
        A a = new A();
        B b = new B();
        C c = new C();
        a.display();
        b.display();
        c.display();
    }
}

