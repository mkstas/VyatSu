namespace labaratory_work_2.Models
{
    enum Dough
    {
        Thin,
        Thick
    };

    public class Pizza : Dish
    {
        public Dough Dough { get; set; } = Dough.Thick

        public Pizza() : base()
        { 
        }

        public Pizza(string name) : base(name)
        { 
        }

        public Pizza(string name, int weight, double price)
            : base(name, weight, price)
        {
        }

        public override void DisplayInfo()
        {
            return $"Pizza: {Name}, {Dough.ToString()} douph, {Weight} g, ${CalcFullPrice()}";
        }

        public override double CalcFullPrice()
        {
            return Dough == Dough.Thin ? Price * 1.3 : Price * 1.5;
        }

        public void ChangeDough()
        {
            Dough = Dough == Dough.Thin ? Dough.Thick : Dough.Thin;
        }

        public string CutInSlices()
        {
            return "Cutting the pizza into slices...";
        }
    }
}
