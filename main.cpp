//Student Name: Jennifer Jimenez

//Teacher: Dr. Tyson McMillan

//Date: 4/10/20

//A program to practice working with multi-dimensional arrays

#include <iostream>

using namespace std;

/*

Research Input data: go to http://www.weather.com

Pick two cities of your choice. Fill in the temperature for the 7 days of this week of both cities. Fill in this text data table, which will be used in your program.

//City_One = 1, City_Two = 2  Replace City_One and City_Two with the names of your cities

//Data Table

//City X, Day X: Temp


Arlington, Day 1: 57

Arlington, Day 2: 69

Arlington, Day 3: 78

Arlington, Day 4: 55

Arlington, Day 5: 54

Arlington, Day 6: 61

Arlington, Day 7: 69

Mineral Wells, Day 1: 55

Mineral Wells, Day 2: 69

Mineral Wells, Day 3: 76

Mineral Wells, Day 4: 55

Mineral Wells, Day 5: 53

Mineral Wells, Day 6: 59

Mineral Wells, Day 7: 69
*/

 

int main()

{

      const int CITY = 2;

      const int WEEK = 7;

 

    int temperature[CITY][WEEK];

    //Note your input data from the above

    cout << "Enter all temperature for a week of first city and then second city. \n";

 

    // Inserting the values into the temperature array

    //note for every dimension of the array you need a for loop 2 dimensions = 2 for loops

    for (int i = 0; i < CITY; ++i)

    {

        for(int j = 0; j < WEEK; ++j)

        {

            cout << "City " << i + 1 << ", Day " << j + 1 << " : ";

            cin >> temperature[i][j];

        }

    }

 

    cout << "\n\nDisplaying Values:\n";

 

    // Accessing the values from the temperature array

    for (int i = 0; i < CITY; ++i)

    {

        for(int j = 0; j < WEEK; ++j)

        {

            cout << "City " << i + 1 << ", Day " << j + 1 << " = " << temperature[i][j] << endl;

        }

    }

 

    return 0;

}
