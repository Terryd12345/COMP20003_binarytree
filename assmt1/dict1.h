struct Record {
    char *ID;
    char *Name;
    char *Sex;
    char *Age;
    char *Height;
    char *Weight;
    char *TeamName;
    char *NOC;
    char *YearAndSeason;
    char *Year;
    char *Season;
    char *City;
    char *Sport;
    char *Event;
    char *Medal;
    struct Record *right;
    struct Record *left;
};

typedef struct Record record;