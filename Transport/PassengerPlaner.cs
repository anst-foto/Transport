namespace Transport;

public class PassengerPlaner : Avia, IPassenger
{
    public void Boarding()
    {
        Console.WriteLine("Посадка пассажиров в самолёт");
    }

    public void UnBoarding()
    {
        Console.WriteLine("Высадка пассажиров из самолёта");
    }
}