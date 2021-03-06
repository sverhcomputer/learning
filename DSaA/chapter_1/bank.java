// Демонстрация базового синтаксиса ООП
// Запуск программы: java BankApp

class BankAccount {
    private double balance; //  Баланс счёта

    public BankAccount(double openingBalance) { // Конструктор
        balance = openingBalance;}
    
    public void deposit(double amount) {  // Внесение средств
        balance = balance + amount;}

    public void withdraw(double amount) { // Снятие средств
        balance = balance - amount;}

    public void display() { // Вывод баланса
        System.out.println("Balance = " + balance);}}

class BankApp {
    public static void main(String[] args) {
        BankAccount ba1 = new BankAccount(100.00); // Создание счёта
        System.out.print("До переводов, ");
        ba1.display(); // Вывод баланса

        ba1.deposit(74.35);  // Внесение средств
        ba1.withdraw(20.00); // Снятие средств

        System.out.print("После переводов, ");
        ba1.display();}}


