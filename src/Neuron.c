#include <stdio.h>
#include <string.h>

// Define the Neuron structure
// Remember C struc is a data type not an instance;
// Create an instance to initialse it
struct Neuron {
    char name[50];         // Character array for the neuron name
    int n_trials;          // Integer field for the number of trials
    float data;            // To hold the timing of spikes across trials (1 trial version is also allowed)
    float t_refractory;    // Refractory time period is 3 ms
    float v_rest;          // Float field for resting membrane potential in millivolts
    float v_thresh;        // Float field for threshold membrane potential in millivolts
};

// Function to print the Neuron structure fields
void printNeuron(struct Neuron *neuron) {
    printf("Neuron Name: %s\n", neuron->name);
    printf("Number of Trials: %d\n", neuron->n_trials);
    printf("Timing of Spikes: %.3f ms\n", neuron->data);
    printf("Refractory Time Period: %.3f ms\n", neuron->t_refractory);
    printf("Resting Membrane Potential: %.1f mV\n", neuron->v_rest);
    printf("Threshold Membrane Potential: %.1f mV\n", neuron->v_thresh);
}

int main() {
    // Example usage of the Neuron structure
    struct Neuron myNeuron;

    // Assign values to the fields
    strcpy(myNeuron.name, "Spiking Neuron");
    myNeuron.n_trials = 10;
    myNeuron.data = 2.5;         // Example value for timing of spikes
    myNeuron.t_refractory = 3;
    myNeuron.v_rest = -70.0;
    myNeuron.v_thresh = -55.0;

    // Call the print function
    printNeuron(&myNeuron);

    return 0;
}

