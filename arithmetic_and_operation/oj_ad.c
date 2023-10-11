#include <stdio.h>

int main(){
    int phy_dmg, mgc_dmg, pure_dmg;
    scanf("%d %d %d", &phy_dmg, &mgc_dmg, &pure_dmg);
    double phy_por = phy_dmg * 0.2;
    double mgc_por = mgc_dmg * 0.3;
    double pure_por = pure_dmg * 0.5;
    printf("%.2lf\n", phy_por + mgc_por + pure_por);
}