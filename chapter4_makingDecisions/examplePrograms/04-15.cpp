// This program demonstrates the && logical operator.

#include <iostream>

using namespace std;

int main()
{
    char employed,  // Currently employed, Y or N
        recentGrad; // Recent graduate, Y or N

    // Is the user employed and a recent graduate?
    cout << "Answer the following questions with either Y for Yes or N for No." << endl;
    cout << "Are you employed? ";
    cin >> employed;

    cout << "Have you graduated from college in the past two years? ";
    cin >> recentGrad;

    // Determine the user's loan qualifications.
    if (employed == 'Y' && recentGrad == 'Y')
    {
        cout << "You qualify for the special interest rate." << endl;
    }
    else
    {
        cout << "You must be employed and have graduated from college in the past two years to qualify." << endl;
    }

    return 0;
}