import java.util.*;

class MarvellousX
{
    public int CapCount(String s)
    {
        int iCnt = 0;
        char Arr[] = s.toCharArray();
        for(int i =0; i < s.length(); i++)
        {
            if ((Arr[i] >= 'A') && (Arr[i] <= 'Z')) 
            {
                iCnt++;
            }
        }
        return iCnt;
    }

}

class Assignment31_1
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("enter full string");
        String str = sobj.nextLine();

        MarvellousX obj = new MarvellousX();
        obj.CapCount(str);
    }
}



