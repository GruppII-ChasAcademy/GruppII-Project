#include <iostream>
#include <string>
#include <map>

// Tröskelvärden för olika sensorer
struct Threshold
{
    double min;
    double max;
};

// Funktion som kollar avvikelse
bool checkDeviation(const std::string &sensorName, double value, const Threshold &t)
{
    if (value < t.min || value > t.max)
    {
        std::cout << "[VARNING] Sensor: " << sensorName
                  << " värde: " << value
                  << " (tillåtet: " << t.min << " - " << t.max << ")\n";
        return true;
    }
    return false;
}

int main()
{
    // Exempel: definiera tröskelvärden
    std::map<std::string, Threshold> thresholds = {
        {"Temperatur", {0.0, 30.0}},
        {"Luftfuktighet", {20.0, 70.0}},
        {"CO2", {0.0, 1000.0}}};

    // Simulerade sensorvärden
    std::map<std::string, double> sensorValues = {
        {"Temperatur", 32.5},
        {"Luftfuktighet", 55.0},
        {"CO2", 1200.0}};

    // Kontrollera alla sensorer
    for (const auto &[name, value] : sensorValues)
    {
        checkDeviation(name, value, thresholds[name]);
    }

    return 0;
}
