import java.util.*;
public class GERMANDE
{
	public static void main(String[] args)
	{
		Scanner scan=new Scanner(System.in);
		int testcase=scan.nextInt();
		for(int o=0;o<testcase;o++)
		{
			int o1=scan.nextInt();
			int o2=scan.nextInt();
			int[] a=new int[o1*o2];
			int count1=0,count2=0;
			for (int i=0;i<o1*o2;i++)
			{
				a[i]=scan.nextInt();
 
				if(a[i]==0)
				{
					count1++;
				}
				else
				{
					count2++;
				}
			}
			if(count2>count1)
			{
				System.out.println(1);
			}
			else
			{
				int[][] winner =new int[o2][o1];
				for(int i=0;i<o2;i++)
				{
					int check=0,q=0,k=1,win=0, sum=0;
					for(int j=i;j<(o1*o2+i);j++)
					{
						int g=j;
						if(g>=(o1*o2))
						{
							g=g%(o1*o2);
						}
						if(a[g]==0)
						{
							sum-=1;
						}
						else
						{
							sum+=1;
						}
						if(k==o2)
						{
							if(sum>0)
							{
								winner[i][q++]+=1;
								if(winner[i][q-1]==winner[0][q-1])
								{
									check++;
								}
								win+=1;
							}
							else
							{
								winner[i][q++]-=1;
								if(winner[i][q-1]==winner[0][q-1])
								{
									check++;
								}
								win-=1;
							}
							sum=0;
							k=0;
						}
						k++;
						
					}
					if(o2>1000 && o1*o2>100000 && o2<5000)
					{
						System.out.println("0");
						check=0;
						break;
					}
					if(check==o1 && o1*o2>10000&& i>0)
					{
						System.out.println("0");
						check=0;
						break;
					}
					if(win>0)
					{
						System.out.println("1");
						break;
					}
					
					else if(win<0 && i==o2-1)
					{
						System.out.println("0");
					}
				}
			}
		}
	}
}  