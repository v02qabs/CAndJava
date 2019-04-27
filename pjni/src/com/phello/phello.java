package com.phello;

public class phello
{
	static
	{
		System.load("/data/data/com.termux/files/home/CAndJava/pjni/phello.so");
	}
	public native void hello();
	public static void main(String[] args)
	{
		phello ph = new phello();
		ph.hello();
	}
}

