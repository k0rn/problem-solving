package com.sony.tutorial;

public class TutorialOne {
	public static void main(String[] args)
	{
		if(args.length == 2)
		{
			System.out.print( Integer.parseInt(args[0])+Integer.parseInt(args[1]));
		}
		else
		{
			System.out.println("Too few input!");
		}
	}
}
