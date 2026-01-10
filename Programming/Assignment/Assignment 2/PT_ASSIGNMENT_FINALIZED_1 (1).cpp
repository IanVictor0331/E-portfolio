//Name : IAN VICTOR ANAK NEHEMIAH BELANDA KUMBANG (A25CS0233)
//Partner's Name : Jed Yong Weng Kin A/L YONG KUAN HONG (A25CS0237)
//Date : 27/12/2025
//SET NUMBER : 1

#include <iostream>
#include <cmath>
#include <cctype>
#include <string>
#include <iomanip>
using namespace std;
const int caldwidth = 10;
const int labelwidth = 50;


void getInput(int &,char &, int &, int &);
double calcBMR(int ,int , int, char);

int main()
{
    int age = 0, weight = 0, height = 0;
    char gender = 'a', loopValid;
    double BMR;
    cout << "Basal Metabolic Calculator (BMR) Calculator\n" << endl;

    do{
        //get input
        getInput(age, gender, weight, height);
        
        //calculate BMR using data
        BMR = calcBMR(weight, height, age, gender);
        
        cout << "BMR = " << BMR << " Calories / day (using Mifflin-St Jeor Equation)" <<endl;
        cout << "\nDaily calorie needs based on activity level\n";

        //activity level

        cout << "\nActivity level\t\t\t\t\t\tCalorie" << endl;

        double noExercise = BMR *1.2;//no exercise
        cout <<left<< setw(labelwidth) << "Sedentary: little or no exercise";
        cout << right <<setw(caldwidth) << round(noExercise) << endl;

        double Exercise_13 = BMR * 1.375;
        cout <<left<< setw(labelwidth) << "Exercise 1-3 times/week";
        cout << right <<setw(caldwidth)<< round(Exercise_13) << endl;


        double Exercise_45 = BMR * 1.465;
        cout << left << setw(labelwidth)<< "Exercise 4-5 times/week";
        cout <<right <<setw(caldwidth)<< round(Exercise_45) << endl;

        double Intense_34 = BMR * 1.55;
        cout << left << setw(labelwidth)<< "Daily exercise or intense exercise 3-4 times/week";
        cout << right << setw(caldwidth) <<  round(Intense_34) << endl;

        double Intense_67 = BMR * 1.725;
        cout << left << setw(labelwidth)<< "Intense exercise 6-7 times/week";
        cout << right<< setw(caldwidth) << round(Intense_67) << endl;

        double physicalJob = BMR * 1.725;
        cout <<left << setw(labelwidth)<< "Very intense exercise daily, or physical job";
        cout << right << setw(caldwidth) << round(physicalJob) << endl;
        
        cout << "\nExercise: 15-30 minutes of elevated heart rate activity." << endl;
        cout << "Intense exercise: 45-120 minutes of elevated heart rate activity." << endl;
        cout << "very intense exercise: 2+ hours of elevated heart rate activity." << endl << endl;

        do{
            cout << "Do you want to enter other data? [Y @ N]: ";
            cin >> loopValid;
            if (islower(loopValid)){
                loopValid = toupper(loopValid);
            }
        } while(loopValid != 'Y' && loopValid != 'N');

    }while (loopValid == 'Y');
    
    cout << "\nThank you :)";
    return 0;
}

void getInput(int &age, char &gender, int &height, int &weight)
{
    do
    {
        cout << "Age [15-80] : ";
        cin >> age;
    }while((age <15) || (age > 80));
    
    do
    {
        cout << "Gender [F @ M] : ";
        cin >> gender;
        if(islower(gender)){
            gender = toupper(gender);
        }
    }while((gender != 'M')&&(gender != 'F'));
    
    do
    {
        cout << "Height (cm) : ";
        cin >> height;
    }while(height <= 0);
    
    do
    {
        cout << "Weight (kg) : ";
        cin >> weight;
    }while(weight <= 0);
    
    

}

double calcBMR(int weight, int height, int age, char gender)
{
    double BMR;
    if(gender == 'M')
        BMR = (10 * height) + (6.25 * weight) - (5 * age) + 5;
    if(gender == 'F')
        BMR = (10 * height) + (6.25 * weight) - (5 * age) - 161;
    return BMR;
    
}