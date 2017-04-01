    import java.util.*;
    class CHEFAPAR
    {
    	public static void main(String[] args)
    	{
    		Scanner scan = new Scanner(System.in);
    		int T = scan.nextInt();
    		int[] due = new int[T];
    		for(int i=0;i<T;i++)
    		{	
    			int month = scan.nextInt();
    			int[] array = new int[month];
    			int due1 = 0;
    			int temp=0;
    			for(int o=0;o<month;o++)
    			{array[o]=scan.nextInt();}
    			for(int j=0;j<month;j++)
    			{
    				if(array[j]==0)
    				{	
    					due1=due1+1100;
    				}
    				else if(array[j]==1)
    				{	if(j==0)
    					{
    						due1+=0;
    					}
     
    					else if(array[j-1]==0&&due1!=0)
    						{
    							due1=due1 + 100;
     
    						}
    					else if (array[j-1]==1&&due1!=0)
    					{
    						due1+=100;
    					}
    				
    						
    				}
    					 temp=due1;
     
    			} due[i] = temp;
    		}
    		for(int k=0;k<T;k++)
    		{
    			System.out.println(due[k]);
    		}
    }
    } 