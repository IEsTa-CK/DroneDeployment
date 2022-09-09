// Cluster.cpp

#include "Cluster.h"

Cluster::Cluster(Cluster a, Cluster b){
    Cluster::subclusters = { a, b };
    Cluster::dissimilarity = dissimilarity;
}

Cluster::Cluster(Cluster a, Cluster b, double dissimilarity){
    Cluster::subclusters = { a, b };
    Cluster::dissimilarity = dissimilarity;
}

double Cluster::calculateDissimilarity(){
    return 0;
}