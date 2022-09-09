// Cluster.h

#include<vector>

class Cluster {
    public:
        Cluster(Cluster a, Cluster b);
        Cluster(Cluster a, Cluster b, double dissimilarity);
        double dissimilarity;
        bool isLeaf;
    private:
        double calculateDissimilarity();
        std::vector<Cluster> subclusters;
};