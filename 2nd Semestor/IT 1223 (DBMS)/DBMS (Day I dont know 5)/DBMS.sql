--> Create Database

    Create Database it1223db;

--> 1. Create a MySQL table named "Employee_Details" with appropriate fields to store employee information.

      Create table Employee_details(
        ID int primary key,
        Name VARCHAR(100),
        Age int,
        Gender VARCHAR(10),
        Salary int,
        Join_Date date,
        Last_Promotion_Date date
        );

--> 2. Explain how you would define the structure of the "Employee_Details" table in MySQL, specifying the data types and constraints for each field

    desc Employee_details;

--> 3. What SQL statement would you use to insert records into the "Employee_Details" table?

    Insert into Employee_details values
    ("1","Henry","42","Male","78000","2017-03-15","2020-10-20"),
    ("2","Evelyn","29","Female","59000","2019-01-10","2022-07-05"),
    ("3","Jacob","37","Male","67000","2024-02-28","2024-08-10"),
    ("4","Abigail","23","Female","50000","2023-06-05 ","2024-04-15"),
    ("5","Noah","31","Male","66000","2018-08-20","2022-03-25"),
    ("6","Lily","25","Female","52000","2020-07-30","2023-02-10"),
    ("7","Samuel","43","Male","79000","2016-12-12","2020-09-28"),
    ("8","Grace","28","Female","57000","2019-10-22 ","2022-06-15")
    ;

--> How would you retrieve and view the data that has been inserted into the "Employee_Details" table using MySQL

    SELECT * FROM Employee_details;