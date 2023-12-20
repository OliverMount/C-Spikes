// A Neuron structure for simulation

#include <stdio.h>
#include<string.h>

// Define the Neuron structure
struct Neuron {
    char name[50];  // Character array for the neuron name
    int Trials;     // Integer field for the number of trials
    float Vrest;    // Float field for resting membrane potential in millivolts
    float Vthres;   // Float field for threshold membrane potential in millivolts
};

int main() {
    // Example usage of the Neuron structure
    struct Neuron myNeuron;

    // Assign values to the fields
    strcpy(myNeuron.name, "SampleNeuron");
    myNeuron.Trials = 10;
    myNeuron.Vrest = -70.0;
    myNeuron.Vthres = -55.0;

    // Display the values
    printf("Neuron Name: %s\n", myNeuron.name);
    printf("Number of Trials: %d\n", myNeuron.Trials);
    printf("Resting Membrane Potential: %.1f mV\n", myNeuron.Vrest);
    printf("Threshold Membrane Potential: %.1f mV\n", myNeuron.Vthres);

    return 0;
}
