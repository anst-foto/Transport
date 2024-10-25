using Transport;

Transport.Transport transport = new CargoPlaner
{
    Name = "Грузовой самолёт"
};
PrintTransport(transport);
transport.Move();

//PrintPassenger((IPassenger)transport);
PrintCargo((ICargo)transport);

return;


void PrintTransport(Transport.Transport transport)
{
    Console.WriteLine(transport.Name);
}

void PrintCargo(ICargo cargoTransport)
{
    cargoTransport.Load();
    cargoTransport.UnLoad();
}

void PrintPassenger(IPassenger passengerTransport)
{
    passengerTransport.Boarding();
    passengerTransport.UnBoarding();
}