public class HelloJni
{
	static
	{
		System.load("/data/data/com.termux/files/home/CAndJava/lib/HelloJni.so");
	}
	public native void hello();
	public static void main(String[] args)
	{
		HelloJni hello = new HelloJni();
		hello.hello();
	}
}

