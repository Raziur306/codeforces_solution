import java.util.*;
public class firstClass {
	public static void main(String[] args)
	{
		Scanner sc = new Scanner(System.in);
		long n,a,b;
		a=sc.nextLong();
		b=sc.nextLong();
		n=sc.nextLong();
		boolean flag=true;
		for(int i=0; i<10; i++)
		{
			if(((a*10)+i)%b==0)
			{
				System.out.print(a*10+i);
				String s = "0".repeat((int)n-1);
				System.out.print(s);
				flag=false;
				break;
			}
		}
		if(flag)
		{
			System.out.println(-1);
		}
		
		
		
	}
}
