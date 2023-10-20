struct Data{ //Self-referential structure (Generally uses in data structure)
    int x;
    struct Data* p;
    /**
     ATTENTION: struct Data p; That is illegal!!! That p is not a pointer!
     */
};

