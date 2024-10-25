namespace Transport;

public abstract class Transport
{
    private readonly string _name;
    public required string Name
    {
        get => _name;
        init
        {
            if (value == null)
                throw new ArgumentNullException("Имя не может быть null");
            
            if (string.IsNullOrWhiteSpace(value))
                throw new ArgumentException("Имя не может быть пустой строкой");
            
            _name = value;
        }
    }
    
    public abstract void Move();
}