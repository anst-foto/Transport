namespace Transport;

public abstract class Auto : Transport
{
    public override void Move()
    {
        Console.WriteLine("Едем!");
    }
}