namespace Transport;

public class CargoPlaner : Avia, ICargo
{
    public void Load()
    {
        Console.WriteLine("Погрузка груза в самлёт");
    }

    public void UnLoad()
    {
        Console.WriteLine("Разгрузка груза из самолёта");
    }
}