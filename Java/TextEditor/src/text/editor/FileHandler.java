package text.editor;


import java.awt.Desktop;
import java.io.BufferedReader;
import java.io.File;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Paths;
import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class FileHandler 
{
    private File file;
    Scanner x = new Scanner(System.in);
    public FileHandler()
    {
        file = null;
    }
    
    public void display(String name)
    {
    	file = new File("D:/Programming-Practice/Java/TextEditor/src/text/editor/"+name+".txt");
    	if(file.exists() && Desktop.isDesktopSupported())
    	{
    		Desktop d = Desktop.getDesktop();
    		try 
    		{
				d.open(file);
			} catch (IOException e) 
    		{
				e.printStackTrace();
			}
    	}
    }
    public boolean add(String name) 
    {
        file = new File("D:/Programming-Practice/Java/TextEditor/src/text/editor/"+name+".txt");
        if(!file.exists())
        {
            try
            {
                file.createNewFile();
                return true;

            }
            catch(Exception e)
            {
                e.printStackTrace();
            }
            
        }
        else
        {
            System.out.println("\nFile Already Exists! Provide someother filename!!");
            
        }
        return false;
    }

    public boolean delete(String name)
    {
        file = new File("D:/Programming-Practice/Java/TextEditor/src/text/editor/"+name+".txt");
        if(file.exists())
        {
            try
            {
                file.delete();
                return true;

            }
            catch(Exception e)
            {
                e.printStackTrace();
            }
        }
        else
        {
            System.out.println("\nFile Does not Exists! Provide someother filename!!");
            
        }
        return false;
    }

    public void editFile(String name) throws IOException
    {
        System.out.println("------------------------\n1.Write\n2.Append\n3.EditLine");
        System.out.print("Enter the choice: ");
        final int ch = Integer.valueOf(x.nextLine());  
        file = new File("D:/Programming-Practice/Java/TextEditor/src/text/editor/"+name+".txt");
        if(ch==1)
        {
            try
            {
                FileWriter fw = new FileWriter(file);
                System.out.println("\nEnter the file content:");
                String content = ""; 
                while(x.hasNextLine())
                {
                    content=x.nextLine();
                    if(content.length()>40)
                    {
                        content = content.substring(0,41)+"\n"+content.substring(41,content.length());
                    }
                    else if(content.length()<1)
                    	break;
                    
                    fw.write(content+"\n");
                }
                fw.close();
            }
            catch(Exception e)
            {
                e.printStackTrace();
            }

        } 
        else if(ch==2)
        {
            try
            {
                FileWriter fw = new FileWriter(file,true);
                System.out.println("\nEnter the file content:");
                String content="";
                while(x.hasNextLine())
                {
                    content=x.nextLine();
                    if(content.length()>40)
                    {
                        content = content.substring(0,41)+"\n"+content.substring(41,content.length());
                    }
                    else if(content.length()<1)
                    	break;
                    
                    fw.write(content+"\n");
                }
                fw.close();
                System.out.println("\nFileContent Saved Successfully");
            }
            catch(Exception e)
            {
                e.printStackTrace();
            }

        }
        else
        {
        	List<String> ls = Files.readAllLines(Paths.get("D:/Programming-Practice/Java/TextEditor/src/text/editor/"+name+".txt"));
        	System.out.print("\nEnter the LineNumber: ");
        	int lno = Integer.valueOf(x.nextLine());
        	System.out.print("\nEnter the Content: ");
        	String content = x.nextLine();
        	try (FileWriter fw = new FileWriter(file)) {
				if(content.length()>40)
				{
				    content = content.substring(0,41)+"\n"+content.substring(41,content.length());
				}
				ls.set(lno-1, content);
				content="";
				
				for(String s:ls)
				{
					content+=s+"\n";
				}
				fw.write(content);
			}
        }
    }
}

