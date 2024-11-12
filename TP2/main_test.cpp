#include "GaussianGenerator.h"
#include "TimeSeriesGenerator.h"

using namespace std;

int main() {
    // Initialiser un générateur gaussien avec une graine, une moyenne et un écart-type
    GaussianGenerator gaussianGen(12345, 0.5, 1.0);

    // Générer une série temporelle de 10 valeurs
    vector<double> series = gaussianGen.generateTimeSeries(10);

    // Afficher la série générée
    gaussianGen.printTimeSeries(series);

    return 0;
}
