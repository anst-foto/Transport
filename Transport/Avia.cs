namespace Transport;

public abstract class Avia : Transport
{
    public override void Move()
    {
        Console.WriteLine("Летим!");
    }
}