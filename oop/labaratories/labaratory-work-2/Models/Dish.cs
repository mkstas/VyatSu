namespace labaratory_work_2.Models
{
    public abstract class Dish
    {
        public string Name { get; set; }
        public int Weight { get; set; }
        public double Price { get; set; }

        public Dish()
        {
            Name = "dish";
            Weight = 100;
            Price = 10;
        }

        public Dish(string name)
        {
            Name = name;
            Weight = 200;
            Price = 20;
        }

        public Dish(string name, int weight, double price = 15)
        {
            Name = name;
            Weight = weight;
            Price = price;
        }

        public abstract string DisplayInfo();
        public abstract double CalcFullPrice();
    }
}
