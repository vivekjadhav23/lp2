1. Create Amazon EC2 Instance using AWS Educate
Steps
Login to AWS Educate
Open AWS Console.
Search for Amazon EC2
Click Launch Instance
Enter:
Instance Name → MyEC2
OS → Amazon Linux / Ubuntu
Select:
Instance Type → t2.micro
Create new Key Pair
Allow:
HTTP
HTTPS
SSH
Click Launch Instance
How to Run
Start instance.
Copy Public IP.
Open browser:
http://your-public-ip

2. Apex Program – Addition of Two Numbers
Code
public class AdditionDemo {
    public static void addNumbers() {
        Integer a = 10;
        Integer b = 20;

        Integer sum = a + b;

        System.debug('Addition = ' + sum);
    }
}
How to Run
Login to Salesforce Developer Org
Open Developer Console.
Go to:
Debug → Open Execute Anonymous Window
Run:
AdditionDemo.addNumbers();
Check Output in Logs.4

3. Apex Program – Subtraction
Code
public class SubtractionDemo {
    public static void subtractNumbers() {
        Integer a = 50;
        Integer b = 20;

        Integer sub = a - b;

        System.debug('Subtraction = ' + sub);
    }
}
Run
SubtractionDemo.subtractNumbers();

4. Apex Program – Multiplication
Code
public class MultiplicationDemo {
    public static void multiplyNumbers() {
        Integer a = 5;
        Integer b = 4;

        Integer mul = a * b;

        System.debug('Multiplication = ' + mul);
    }
}
Run
MultiplicationDemo.multiplyNumbers();

5. Apex Program – Division
Code
public class DivisionDemo {
    public static void divideNumbers() {
        Integer a = 20;
        Integer b = 5;

        Decimal div = a / b;

        System.debug('Division = ' + div);
    }
}
Run
DivisionDemo.divideNumbers();

6. Apex Program – All Arithmetic Operations
Code
public class CalculatorDemo {
    public static void operations() {

        Integer a = 20;
        Integer b = 10;

        System.debug('Addition = ' + (a + b));
        System.debug('Subtraction = ' + (a - b));
        System.debug('Multiplication = ' + (a * b));
        System.debug('Division = ' + (a / b));
    }
}
Run
CalculatorDemo.operations();

7. Apex Program – Table of 5
Code
public class TableOfFive {
    public static void printTable() {

        for(Integer i=1; i<=10; i++) {
            System.debug('5 x ' + i + ' = ' + (5*i));
        }
    }
}
Run
TableOfFive.printTable();

8. Apex Program – Table of 10
Code
public class TableOfTen {
    public static void printTable() {

        for(Integer i=1; i<=10; i++) {
            System.debug('10 x ' + i + ' = ' + (10*i));
        }
    }
}
Run
TableOfTen.printTable();

9. Apex Program – Welcome Message
Code
public class WelcomeMessage {
    public static void displayMessage() {

        System.debug('Welcome to Apex Programming Language of Salesforce Platform');
    }
}
Run
WelcomeMessage.displayMessage();

10. Design and Develop Custom Application using Salesforce Cloud
Steps
Login to Salesforce.
Go to:
Setup → App Manager
Click:
New Lightning App
Enter:
App Name
Logo
Add:
Tabs
Objects
Save & Finish.
Example

Student Management System:

Student Name
Roll Number
Department
Marks

11. Amazon S3 – Simple Storage Service
Steps
Login to AWS Console.
Search:
Amazon S3
Click:
Create Bucket
Enter Bucket Name.
Select Region.
Create Bucket.
Upload Files.
How to Run
Open Bucket.
Upload any file.
Access uploaded file using Object URL.

12. Amazon RDS – Relational Database Service
Steps
Login AWS Console.
Search:
Amazon RDS
Click:
Create Database
Select:
MySQL
Free Tier
Enter:
DB Name
Username
Password
Create Database.
How to Run
Open Endpoint from RDS.
Connect using MySQL Workbench.

Example:

CREATE DATABASE college;

USE college;

CREATE TABLE student(
    id INT,
    name VARCHAR(50)
);

INSERT INTO student VALUES(1,'Vivek');

SELECT * FROM student;
Important Viva Questions
What is Cloud Computing?

Delivery of computing services over the internet.

What is EC2?

Virtual server service provided by AWS.

What is S3?

Object storage service in AWS.

What is RDS?

Managed relational database service.

What is Apex?

Programming language of Salesforce platform.

What is Salesforce?

Cloud-based CRM platform.

Difference between EC2 and S3?
EC2 → Compute service
S3 → Storage service
