#include <iostream>
using namespace std;

int main()
{
    string eSpectrum;
    double wavelength;
    string answer = "y";
    cout << "Enter a wavelength and I will report the type of the"
         <<  " electromagnetic spectrum.\n\n";
    while ( "y" == answer)
    {
        cout << "Enter a wavelength in meters:  ";
        cin >> wavelength;

        if (wavelength > 1e-1)
        {
            eSpectrum = "Radio waves.";
        }
        else if (wavelength <= 1e-1 && wavelength >= 1e-3)
        {
            eSpectrum = "Microwaves.";
        }
        else if (wavelength <= 1e-3 && wavelength >= 7 * 1e-7)
        {
            eSpectrum = "Infrared.";
        }
        else if (wavelength < 7 * 1e-7 && wavelength >= 4 * 1e-7)
        {
            eSpectrum = "Visible Light.";
        }
        else if (wavelength < 4 * 1e-7 && wavelength >= 1e-8)
        {
            eSpectrum = "Ultraviolet.";
        }
        else if (wavelength < 1e-8 && wavelength >= 1e-11)
        {
            eSpectrum = "X-rays.";
        }
        else if (wavelength < 1e-11)
        {
            eSpectrum = "Gamma Rays.";
        }
        cout << eSpectrum << endl;
        cout << "Run again? (y/n) ";
        cin >> answer;
        cout << "\n\n";
    }

    return 0;
}



