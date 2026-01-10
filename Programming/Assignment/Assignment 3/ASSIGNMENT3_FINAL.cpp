//Name : IAN VICTOR ANAK NEHEMIAH BELANDA KUMBANG (A25CS0233)
//Partner's Name : Jed Yong Weng Kin A/L YONG KUAN HONG (A25CS0237)
//Date : 06/1/2026
//SET NUMBER : 1


#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;
const int ROWS = 12, COLUMNS = 7;
const int width1 = 8;

//function prototypes
void displayLine(ofstream& outFile);
void winnerTeam(int num[], ofstream& outFile);
void winnerIND(int num[], int num2[][COLUMNS], ofstream& outFile);

int main()
{
    //creating and opening files
    ifstream inputFile;
    ofstream outputFile;
    inputFile.open("input.txt");
    outputFile.open("output.txt");

    //opening file check
    if(!(inputFile))
    {
        cout << "Sorry, input file does not exsit!" << endl;
        return 1;
    }

    //2d array to read input.txt
    int mark[ROWS][COLUMNS];
    int totalIND[ROWS] = {0};
    int totalTEAM[3] = {0}; 

    //input information from input.txt into array
    for(int i = 0; i < ROWS; i++)
    {
        for(int j = 0; j < COLUMNS;j++)
            inputFile >> mark[i][j];
    }

    displayLine(outputFile);

    //output headers
    outputFile<< left << setw(width1) << "Id" << setw(width1)  << "E1" << setw(width1)  << "E2" << setw(width1)  << "E3" << setw(width1)  << "E4" << setw(width1)  << "E5" << setw(width1)  << "Total" << endl;
    
    
    int counter = 1;
    int teamNUM = 0;
    for(int i = 0; i < ROWS; i++)
    {
        totalIND[i] = 0;
        
        if(counter ==1)
        {
            //can delete this line if done
            displayLine(outputFile);
            outputFile << "TEAM " << teamNUM+1<<endl;
        }


        
        
        for(int j = 0; j < COLUMNS;j++)
        {
            if(j>1)
            {
                totalIND[i] +=  mark[i][j]; 
            }
            if(j>0)
                outputFile << left << setw(width1) << mark[i][j];            
            
                
        }

        totalTEAM[teamNUM] += totalIND[i];
        outputFile << setw(width1) << totalIND[i] << endl;
        if(counter == 4)
        {
            outputFile<< left<< setw(width1) << "TOTAL";
            outputFile << setw(40) << "";
            outputFile<< left << setw(width1) << totalTEAM[teamNUM] << endl;
            teamNUM++;
            counter = 0;
            
        }
        counter++;        

        
    }

    displayLine(outputFile);

    //calculate total for everyteam
    
    

    //find winner team
    winnerIND(totalIND, mark, outputFile);
    winnerTeam(totalTEAM, outputFile);
   

    return 0;
}

void displayLine(ofstream& outFile)
{
    for(int i = 0; i < 52 ; i++)
        outFile << "-";
    outFile << "\n";
}

void winnerTeam(int num [], ofstream& outFile)
{
    int currWin = 0, team = 0;
    for(int i = 0; i< 3; i++)
    {
        if(currWin < num[i])
        {
            currWin = num[i];
            team = i;
        }
            

    }
    outFile << "Winner for Group Category: Team " << team + 1 << "(Score = " << currWin << ")" << endl; 
}

void winnerIND(int num [],int num2 [][COLUMNS], ofstream& outFile)
{
    int currWin = 0, individual = 0;
    for(int i = 0; i< ROWS; i++)
    {
        if(currWin < num[i])
        {
            currWin = num[i];
            individual = num2[i][1];
        }
            
    }
    outFile << "Winner for Individual Category: " << individual << "(Score = " << currWin << ")" << endl; 
}