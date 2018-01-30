
import java.util.Scanner;
import java.io.BufferedWriter;
import java.io.File;
import java.io.FileWriter;

class two21
{
	public static void main(String[] args) 
	{
		  // File temp = new File("E:number.txt");
    //   	  File temp2 = new File("E:Fibonacci.txt");

	
		Scanner scan=new java.util.Scanner(System.in);
		 File fac = new File("E:fibo.txt");
           File fac2 = new File("E:numb.txt");
		//temp = File.createTempFile("Fibonacci", ".txt");
		int n;
		int t;
		System.out.println("enter the number");
	 	
		t=scan.nextInt();
		while(t!=0){
			int a=0,b=1,c;
		try
       {
          
      
           System.out.println("enter the number");
			n=scan.nextInt();
           FileWriter write2= new FileWriter(fac2);
           write2.write("");
           write2.append(n+ "\n");
           	write2.flush();
            write2.close();

           if (!fac.exists())
           {
               fac.createNewFile();
           }
           System.out.println("The file has been created.");
           int r = 1;
           FileWriter write = new FileWriter(fac);
           write.write("");
           write.append(" "+a+" "+b);
           for(int i=3;i<=n;i++)
			{
					c=a+b;
               write.append(" "+c);
               a=b;
					b=c;
           }

           write.flush();
            write.close();
       }
       catch (Exception e)
       {
           e.printStackTrace();
       }
       t--;
   }