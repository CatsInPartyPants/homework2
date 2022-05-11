// homework2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <Windows.h>

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    //task 1
	
	int secondsFromStart;
	int hours = 0, minutes = 0, seconds = 0;
	std::cout << "Введите количество секунд, прошедших с 00:00 -> \n";
	std::cin >> secondsFromStart;
	seconds = secondsFromStart % 60;
	minutes = secondsFromStart / 60 % 60;
	hours = secondsFromStart / 60 / 60;
	std::cout << "Текущее время: " << hours << ":" << minutes << ":" << seconds << std::endl;
	
	//task 2
	
	double userNumber=0;
	int firstPart=0;
	int secondPart=0;
	std::cout << "Перевод дробного числа в денежный формат.\n Введите дробное число -> ";
	std::cin >> userNumber;
	firstPart = userNumber;
	secondPart = (userNumber - firstPart) * 100;
	std::cout << firstPart << " долларов " << secondPart << " центов." << std::endl;
	
	//task 3

	int userDays;
	int weeks, days;
	std::cout << "Введите количество дней -> ";
	std::cin >> userDays;
	days = userDays % 7;
	weeks = userDays / 7;
	std::cout << weeks << " недель " << days << " дней." << std::endl;

    //task 4

    float userDistance, userTime, timeSec;
    int timeMin;
    std::cout << "Calculating running speed.\n";
    std::cout << "Enter the length of distance(meters) -> ";
    std::cin >> userDistance;
    std::cout << "Enter time(min.sec) -> ";
    std::cin >> userTime;
    timeMin = userTime;
    timeSec = (userTime - timeMin) * 100;
    if (timeSec >= 60 || userTime <= 0 || userDistance <= 0) {
        std::cout << "Incorrect Time or Distance!";
    }
    else {
        std::cout << "Distance: " << userDistance << " m.\n";
        std::cout << "Time: " << timeMin << " min. " << timeSec << " sec. - > " << ((timeMin * 60) + timeSec) << " seconds total.\n";
        std::cout << "You were running at speed " << round(((userDistance / ((timeMin * 60) + timeSec)) * 3.6) * 100) / 100 << " km/h\n";

    }

    //task 5

    double balance, percentage;
    std::cout << "Enter the amount of money in the account (euro) -> ";
    std::cin >> balance;
    std::cout << "Enter percentage per annum paid by the bank(%) -> ";
    std::cin >> percentage;
    std::cout << "You will get total " << (balance / 100 * percentage) << " euro for year, " << round(((balance / 100 * percentage) / 12) * 100) / 100 << " euro every month.\n";

    //task 6

    double distanceToAirport = 0;
    double userTimeHours, userTimeMinutes, timeForCalculate;
    std::cout << "Enter distance to the airport -> ";
    std::cin >> distanceToAirport;
    std::cout << "Enter the time you need to get to the airport  (hours) -> ";
    std::cin >> userTimeHours;
    std::cout << "Enter the time you need to get to the airport  (minutes) -> ";
    std::cin >> userTimeMinutes;
    timeForCalculate = userTimeHours + userTimeMinutes / 60;
    std::cout << "You need to move with speed: " << distanceToAirport / timeForCalculate << " km/h.\n";

    //task 7 

    double hoursStart, minutesStart, secondsStart, hoursStop, minutesStop, secondsStop;
    std::cout << "Enter start hour: ";
    std::cin >> hoursStart;
    std::cout << "Enter start minute: ";
    std::cin >> minutesStart;
    std::cout << "Enter start second: ";
    std::cin >> secondsStart;
    std::cout << "Enter stop hour: ";
    std::cin >> hoursStop;
    std::cout << "Enter stop minute: ";
    std::cin >> minutesStop;
    std::cout << "Enter stop second: ";
    std::cin >> secondsStop;
    if ((hoursStart < 0 || hoursStart > 23) ||
        (hoursStop < 0 || hoursStop > 23) ||
        (minutesStart < 0 || minutesStart > 59) ||
        (minutesStop < 0 || minutesStop > 59) ||
        (secondsStart < 0 || secondsStart > 59) ||
        (secondsStop < 0 || secondsStop > 59)) {
        std::cout << "Incorrect time!\n";
    }
    else {
        std::cout << "Total price is: " << round((((hoursStop * 60 + minutesStop + secondsStop / 60) - (hoursStart * 60 + minutesStart + secondsStart / 60)) * 2) * 100) / 100 << " gr.\n";
    }


    //task 8 

    double gas92, gas95, Diesel;
    double fuelConsumptionGas92, fuelConsumptionGas95, fuelConsumptionDiesel, distanceOfTravel;

    std::cout << "Enter distance of travel (km.) -> ";
    std::cin >> distanceOfTravel;
    std::cout << "Enter fuel consumption of gas 92 (l/100km.) -> ";
    std::cin >> fuelConsumptionGas92;
    std::cout << "Enter fuel consumption of gas 95 (l/100km.) -> ";
    std::cin >> fuelConsumptionGas95;
    std::cout << "Enter fuel consumption of diesel (l/100km.) -> ";
    std::cin >> fuelConsumptionDiesel;
    std::cout << "Enter cost of 92 (rub.) -> ";
    std::cin >> gas92;
    std::cout << "Enter cost of 95 (rub.) -> ";
    std::cin >> gas95;
    std::cout << "Enter cost of diesel (rub.) -> ";
    std::cin >> Diesel;

    std::cout << "Type of gas |\t" << "Price (rub.)\n";
    std::cout << "Gas 92      |\t" << (fuelConsumptionGas92 / 100) * distanceOfTravel * gas92 << std::endl;
    std::cout << "Gas 95      |\t" << (fuelConsumptionGas95 / 100) * distanceOfTravel * gas95 << std::endl;
    std::cout << "Diesel      |\t" << (fuelConsumptionDiesel / 100) * distanceOfTravel * Diesel << std::endl;
 }

