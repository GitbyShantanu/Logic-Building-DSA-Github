import java.util.*;

class Program342
{
    public static void main(String arg[]) throws Exception
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter string : ");
        String str = sobj.nextLine();

        str = str.trim();
        System.out.println("After trim : "+str);

        str = str.replaceAll("\\s+"," ");
        System.out.println("After replaceall : "+ str);

        String words[] = str.split(" ");
        System.out.println("Number of words in the sentance are : "+words.length);
    }
}