

class MyBook extends Book {
    String title;
    String author;
    int price;

    MyBook(String t, String a, int p) {
        super(t, a);
        title = t;
        author = a;
        price = p;
        
    }

    void display() {
        System.out.println("Title: "+title);
        System.out.println("Author: "+author);
        System.out.println("Price: "+price);
    }
}

