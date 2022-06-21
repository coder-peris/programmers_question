// WAP to store name, company, salary and programming languages of some programmers in java and display the result.

import java.util.Scanner;

class Programmers {
    private String name;
    private String company;
    private int salary;
    private int noLang;
    private String[] langList;

    public Programmers(String Name, String Company, int Salary) {
        name = Name;
        company = Company;
        salary = Salary;
    }

    public void setLangList(int Nolang, String[] Langlist) {
        langList = Langlist;
        noLang = Nolang;
    }

    public void showInfo() {
        System.out.println(String.format("Name : %s\nCompany : %s\nSalary : %d", name, company, salary));
        System.out.print("Languages (" + noLang + ") : ");
        for (int i = 0; i < noLang; i++)
            System.out.print(langList[i] + "  ");
        System.out.println();
    }
}

public class ProgrammersQuestion {
    public static void main(String[] args) {
        System.out.print("\033[H\033[2J");
        Scanner scan = new Scanner(System.in);
        System.out.print("Enter the no. of programmers : ");
        int N = scan.nextInt();
        scan.nextLine();
        Programmers[] pr = new Programmers[N];
        for (int i = 0; i < N; i++) {
            System.out.print("\nFor programmer " + (i + 1) + ":\n");
            System.out.print("Enter name : ");
            String NAME = scan.nextLine();
            System.out.print("Enter company : ");
            String COMPANY = scan.nextLine();
            System.out.print("Enter salary per month in US $ : ");
            int SALARY = scan.nextInt();
            pr[i] = new Programmers(NAME, COMPANY, SALARY);
            System.out.print("Enter the no. of languages u know : ");
            int NOLANG = scan.nextInt();
            scan.nextLine();
            String[] LANGLIST = new String[NOLANG];
            for (int j = 0; j < NOLANG; j++) {
                System.out.print("Enter language " + (j + 1) + " : ");
                LANGLIST[j] = scan.nextLine();
            }
            pr[i].setLangList(NOLANG, LANGLIST);
        }
        System.out.print("\nPress 'ENTER' key to see stored data...");
        scan.nextLine();
        System.out.print("\033[H\033[2J");
        System.out.println("********** STORED DATA *********");
        for (int i = 0; i < N; i++) {
            System.out.println("\nFor programmer " + (i + 1) + " :");
            pr[i].showInfo();
        }
        System.out.print("\nPress 'ENTER' to exit...");
        scan.nextLine();
        scan.close();
        System.out.print("Exited sucessfully.");
    }
}
