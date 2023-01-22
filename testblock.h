class testblock
{
private:
    float Density;
    double AreaStrength;
    float BreakingStrength;
    const int SPAN = 120;
    float ForcePerArea;
    void DoFormula();
public:
    float Height;
    float Width;
    float Lenght;
    int Weight;
    float GetDensity();
    double GetAreaStrength();
    void SetBreakingStrength(float breakingStrength);

    testblock(/* args */);
    ~testblock();
};
