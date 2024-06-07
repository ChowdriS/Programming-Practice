package text.editor;

import java.io.IOException;
import java.util.Scanner;

public class Editor 
{
    private int choice;
    private FileHandler f;
    Scanner x = new Scanner(System.in);
    public Editor()
    {
        f = new FileHandler();
    }

    public void run()
    {
        menu();
    }

    public void menu()
    {
        System.out.println("----------------------------");
        System.out.println("1.Add TextFile\n2.Edit File\n3.Delete File\n4.Open File\n5.Exit");
        System.out.print("Enter you choice: ");
        choice = Integer.valueOf(x.nextLine());

        switch(choice)
        {
            case 1:
                addFile();
                break;
            case 2:
                editFile();
                break;
            case 3:
                deleteFile();
                break;
            case 4:
            	openFile();
            case 5:
                System.out.print("---> Exit Editor <---");
                System.exit(0);
            default:
                break;
        }

        System.out.print("\nDo you need to continue? (y/n) : ");
        if(x.nextLine().equals("y"))
        {
            menu();
        }
        else
        {
            System.out.print("----> Exit Editor <----");
            System.exit(0);
        }
    }


    private void addFile()
    {
        System.out.print("\nEnter Filename: ");
        String name = x.nextLine();

        if(f.add(name))
        {
            System.out.println("----> File Created Successfully <----");
        }
        
    }
    
    private void openFile()
    {
        System.out.print("\nEnter Filename: ");
        String name = x.nextLine();

        f.display(name);
        System.out.println("----> File Opened Successfully <----");
        
    }
    
    private void editFile()
    {
        System.out.print("\nEnter Filename: ");
        String name = x.nextLine();

        try 
        {
            f.editFile(name);
        } 
        catch (IOException e) 
        {
            e.printStackTrace();
        }
    }
    
    private void deleteFile()
    {
        System.out.print("\nEnter Filename: ");
        String name = x.nextLine();

        if(f.delete(name))
        {
            System.out.println("----> File Deleted Successfully <----");
        }
    }
}
