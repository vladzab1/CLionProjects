#include <iostream>

int main () {
    // 1 task
    int secondInp = 0;

    int hour = 0;
    int minute = 0;
    int second = 0;
    std::cout << "Program for converting seconds to hours, minutes and seconds" << std::endl;

    std::cout << "Enter the time in second: ";
    std::cin >> secondInp;

    hour = secondInp / 3600;
    minute = (secondInp % 3600) / 60;
    second = (secondInp % 3600) % 60;

    std::cout << hour << " hours " << minute << " minutes " << second << " seconds \n\n" << std::endl;


    // 2 task
    double number = 0;
    int hryvnias = 0;
    int pennies = 0;

    std::cout << "Program for converting fractional numbers to monetary format" << std::endl;

    std::cout << "Enter a fractional number: ";
    std::cin >> number;

    hryvnias = number;
    pennies = (number - hryvnias) * 100;
    std::cout << hryvnias << " hry. " << pennies  << " pen. " << std::endl;


    // 3 task
    double distance = 0;
    double time = 0;
    double speed = 0;

    int minutesT = 0;
    int secondsT = 0;
    int secondsR = 0;

    std::cout << "Calculating running speed" << std::endl;
    std::cout << "Enter the distance(meters): ";
    std::cin >> distance;
    std::cout << "Enter the time (m.s): ";
    std::cin >> time;

    minutesT = time;
    secondsT = (time - minutesT) * 100;
    
    secondsR = (minutesT * 60) + secondsT;
    speed = (distance / 1000.0) / (secondsR / 3600.0);

    std::cout << "Distance: " << distance << " m." << std::endl;
    std::cout <<"Time: " << minutesT << " m " << secondsT << " s " << " = " << secondsR << " s " << std::endl;
    std::cout << "You ran at speed: " << speed  << " km/h \n" << std::endl;



    // 4 task
    int days = 0;

    int weeksC = 0;
    int daysC = 0;
    std::cout << "Program for converting days into weeks and days" << std::endl;

    std::cout << "Enter the days: ";
    std::cin >> days;

    weeksC = days/7;
    daysC = days - (weeksC * 7);

    std::cout << "In " << days << " days " << weeksC << " weeks and " << daysC << " days" <<  std::endl;
}
