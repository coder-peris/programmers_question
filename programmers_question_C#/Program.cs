namespace TheOnlyOne
{
    class Employees
    {
        string name;
        string company;
        string[] lang;
        int salary;

        public Employees(string Name, string Company, int Salary)
        {
            name = Name;
            company = Company;
            salary = Salary;
        }

        public void getLangInfo()
        {
            Console.Write("Enter the no. of languages u know : ");
            int langNo = Convert.ToInt16(Console.ReadLine());
            lang = new string[langNo];
            for (int i = 0; i < langNo; i++)
            {
                Console.Write($"Enter language {i + 1} : ");
                lang[i] = Console.ReadLine();
            }

        }
        public void showInfo()
        {
            Console.Write($"Name : {name}\nCompany : {company}\nSalary : {salary}");
            Console.Write("\nLanguages: ");
            for (int i = 0; i < lang.Length; i++)
                Console.Write(lang[i] + " ");
            Console.Write("\n");
        }
    }

    class Program
    {
        static void Main(string[] args)
        {
            Console.Clear();
            Console.Write("Enter the no. of programmers : ");
            int Pr = Convert.ToInt16(Console.ReadLine());
            Employees[] e = new Employees[Pr];
            for (int i = 0; i < Pr; i++)
            {
                Console.Write($"\nFor programmer {i + 1}:\n");
                Console.Write("Enter name : ");
                string? NAME = Console.ReadLine();
                Console.Write("Enter company : ");
                string? COMPANY = Console.ReadLine();
                Console.Write("Enter salary per month in US $ : ");
                int SALARY = Convert.ToInt32(Console.ReadLine());
                e[i] = new Employees(NAME, COMPANY, SALARY);
                e[i].getLangInfo();
            }
            Console.Write("Press any key to see stored data...");
            Console.ReadKey();
            Console.Clear();
            Console.WriteLine("********* STORED DATA *********");
            for (int i = 0; i < Pr; i++)
            {
                Console.Write($"\nFor programmer {i + 1}:\n");
                e[i].showInfo();
            }
            Console.Write("Press any key to exit...");
            Console.ReadKey();
            Console.Write("\nExited successfully.");
        }
    }
}