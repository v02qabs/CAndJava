public class GHello
{
	static
	{
		System.loadLibrary("hello");
	}
	public static void main(String args[])
	{
		GHello gh = new GHello();
		gh.hellof();
	}
	public native void hellof();
}

