#include "headers/stp.h"

using namespace std;

int main() {
    // Créer un générateur de séries temporelles avec une graine de 42
    StepGenerator stepGen(425353);

    // Générer une série temporelle de 10 valeurs
    vector<double> series = stepGen.generateTimeSeries(10);

    // Afficher la série générée
    stepGen.printTimeSeries(series);

    return 0;
}
