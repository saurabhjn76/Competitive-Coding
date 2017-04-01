    import java.util.*;
    import java.util.Arrays;
    import java.math.*;
    import java.util.TreeMap;
    import java.util.Iterator;
    import java.util.Map;
    import java.util.Set;
    public class MAKETRI
    {
    	public static void main(String[] args)
    	{
    		Scanner obj=new Scanner(System.in);
    		int n=obj.nextInt();
    		long l=obj.nextLong();
    		long r=obj.nextLong();
    		long[] leng =new long[n];
    		for(int i=0;i<n;i++)
    		{
    			leng[i]=obj.nextLong();
    		}
    		Arrays.sort(leng);
    		if(n>1000)
    			gret(leng,l,r,n);
    		else
    			lete(leng,l,r,n);
    	}
    	public static void lete(long[] leng,long l,long r,int n)
    	{
    			long ans=0;
    		long min=Long.MAX_VALUE;
    		long max=Long.MIN_VALUE;
    		//Arrays.sort(leng);
    		for(int j=0;j<n-1;j++)
    			{
    				if(leng[j]>=l && leng[j]<=r && leng[j+1]>=l && leng[j+1]<=r)
    					{
    						long minimum=Math.abs(leng[j+1]-leng[j])+1L;
    						long maximum=leng[j+1]+leng[j]-1L;
    						if(min>minimum)
    							min=minimum;
    						if(max<maximum)
    							max=maximum;
    					}	
    							
    			}
    			if(min==Long.MAX_VALUE && max==Long.MIN_VALUE)
    			{
    				ans=0;
    			}
    			else
    			{
    				if(l>min)
    					min=l;
    				if(r<max)
    					max=r;
    				ans=max-min+1;
    			}
    			
    		System.out.println(ans);
    	}
    	public static void gret(long[] leng,long l,long r,int n)
    	{
    		Map<Long,Long> set=new TreeMap<Long,Long>();
    		long min=0;
    		long max=0;
    		//Arrays.sort(leng);
    		long ans=0;
    		for(int j=0;j<n-1;j++)
    			{
    				
    				long minimum=Math.abs(leng[j+1]-leng[j])+1L;
    				long maximum=leng[j+1]+leng[j]-1L;
    				set.put(minimum,maximum);
    				//System.out.println("minimum = "+minimum+" maximum = "+maximum);
    				//System.out.println(set);				
    			}
    		Object[] key=set.keySet().toArray();
    		/*for(int i=0;i<key.length;i++)
    		{
    			System.out.println("key = "+key[i]+" value = "+set.get(key[i]));
    		}*/
    		for(int i=0;i<key.length;i++)
    		{
    			if(i==0)
    			{
    				min=(long)key[i];
    				max=(long)set.get(key[i]);
    				if(min>=l && max<=r && min<=r && max>=l)
    				{
    					ans+=max-min+1;
    					if(max<r)
    						l=max+1;
    					if(max==r)
    						break;
    				}
    				else if(min<l && max<=r && max>=l)
    				{
    					ans+=max-l+1;
    					if(max<r)
    						l=max+1;
    					if(max==r)
    						break;
    				}
    				else if(min>=l && max>r && min<=r)
    				{
    					ans+=r-min+1;
    					if(min>l)
    						r=min-1;
    					if(min==l)
    						break;
    				}
    				else
    				{
    					ans+=0;
    				}
    			}
    			else
    			{
    				long xx=(long)set.get(key[i-1]);
    				long yy=(long)key[i];
    				if(xx>=yy)
    				{
    					min=(xx+1L);
    					max=(long)set.get(key[i]);
    					if(min<=max)
    					{
    						if(min>=l && max<=r && min<=r && max>=l)
    						{
    							ans+=max-min+1;
    							if(max<r)
    								l=max+1;
    							if(max==r)
    								break;
    						}
    						else if(min<l && max<=r && max>=l)
    						{
    							ans+=max-l+1;
    							if(max<r)
    								l=max+1;
    							if(max==r)
    								break;
    						}
    						else if(min>=l && max>r && min<=r)
    						{
    							ans+=r-min+1;
    							if(min>l)
    								r=min-1;
    							if(min==l)
    								break;
    						}
    						else
    						{
    							ans+=0;
    						}
    					}
    				}
    				else
    				{
    					min=(long)key[i];
    					max=(long)set.get(key[i]);
    					if(min>=l && max<=r && min<=r && max>=l)
    					{
    						ans+=max-min+1;
    						if(max<r)
    							l=max+1;
    						if(max==r)
    							break;
    					}
    					else if(min<l && max<=r && max>=l)
    					{
    						ans+=max-l+1;
    						if(max<r)
    							l=max+1;
    						if(max==r)
    							break;
    					}
    					else if(min>=l && max>r && min<=r)
    					{
    						ans+=r-min+1;
    						if(min>l)
    							r=min-1;
    						if(min==l)
    							break;
    					}
    					else
    					{
    						ans+=0;
    					}
    				}
    			}
    		}
    		System.out.println(ans);
    	}
    }  