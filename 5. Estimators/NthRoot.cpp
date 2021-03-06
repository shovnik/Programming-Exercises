#include <iostream>
#include <stdlib.h>

using namespace std;

int main(const int argc, const char* const argv[])
{
    if (argc < 4)
    {
        cerr << "Error: Unable to compute Nth root because there is an insufficient amount of "
                "arguments."
             << endl;
    }
    else
    {
        float S = atof(argv[1]);
        int n = atoi(argv[2]);
        float e = atof(argv[3]);
        float dif;
        if (n % 2 == 0 && S < 0)
        {
            cerr << "Error: Unable to compute Nth root because there is no even root of a negative "
                    "number."
                 << endl;
        }
        else if (n < 2 || e <= 0)
        {
            cerr << "Error: Unable to compute Nth root because of invalid input." << endl;
        }
        else
        {
            if (argc > 4)
            {
                cerr << "Warning: Expecting three command-line arguments; received " << (argc - 1)
                     << "; ignoring extraneous arguments." << endl;
            }
            if (S < 0)
            {
                S = S * (-1);
            }
            float guess;
            if (S > 1)
            {
                guess = S / 2;
            }
            else
            {
                guess = 1;
            }
            int i = 0;
            while (i < 1)
            {
                float y = guess;
                int j = 1;
                while (j < n)
                {
                    y = y * guess;
                    j += 1;
                }
                if (S > y)
                {
                    pecision = ((S - y) / S);
                }
                else
                {
                    precision = ((y - S) / S);
                }

                if (precision <= e)
                {
                    i += 1;
                    if (atof(argv[1]) < 0)
                    {
                        guess = guess * (-1);
                    }
                    cout << "Root (" << S << "," << n << ") = " << guess << endl;
                    cout << "(with precision " << precision << ")" << endl;
                }
                else
                {
                    guess = ((float)(n - 1) / n) * guess + S / ((float)n * (y / guess));
                }
            }
        }
    }
}
