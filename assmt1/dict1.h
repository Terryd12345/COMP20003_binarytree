struct Data {
    char ID[128];
    char Sex[128];
    char Age[128];
    char Height[128];
    char Weight[128];
    char TeamName[128];
    char NOC[128];
    char YearAndSeason[128];
    char Year[128];
    char Season[128];
    char City[128];
    char Sport[128];
    char Event[128];
    char Medal[128];
};

struct Name {
    char name[128];
    struct Data *data;
    struct Name *right;
    struct Name *left;
};

typedef struct Data data;
typedef struct Name name;