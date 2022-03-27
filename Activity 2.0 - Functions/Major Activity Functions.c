#include <stdio.h>
float DetermineChargeU (float UnitConsumed);
float CalculateUnitCharge (float UnitConsumed, float ChargePerUnit);
float CalculateSurcharge (float Additional);
float TotalCustomerBill (float Additional, float SurCharge);

int main()
{
    int CustomerID;
    float UnitConsumed, ChargePerUnit, Additional, SurCharge, OverAllBill;
    
    printf("Input Customer ID: ");
    scanf("%d", &CustomerID);
    printf("Input the Unit Consumed by the Customer: ");
    scanf("%f", &UnitConsumed);
    
    ChargePerUnit = DetermineChargeU (UnitConsumed);
    Additional = CalculateUnitCharge (UnitConsumed,ChargePerUnit);
    SurCharge = CalculateSurcharge (Additional);
    OverAllBill = TotalCustomerBill (Additional, SurCharge);
    
    if(OverAllBill >= 100)
    {
         printf("\n\n[Electricity Bill]\n\n");
         printf("Customer ID #                    : %d\n", CustomerID);
         printf("Unit Consumed                    : %.2f\n", UnitConsumed);
         printf("Unit Charges at P %.2f per unit  : P %.2f\n", ChargePerUnit, Additional);
         printf("Surcharge Amount                 : P  %.2f\n", SurCharge);
         printf("Total Costumer Bill              : P %.2f\n", OverAllBill);
    }
    else
        printf("\n\nThe Minimum Bill Should be P 100.00.\nPlease Try Again.");
    
    
    return 0;
}

    float DetermineChargeU (float UnitConsumed)
    {
        float ChargePerUnit;
        if(UnitConsumed > 199 && UnitConsumed < 250)
        {
            ChargePerUnit = 1.50;
        }
        else if(UnitConsumed >= 250 && UnitConsumed < 450)
        {
            ChargePerUnit = 1.60;
        }
        else if (UnitConsumed >= 450 && UnitConsumed < 600)
        {
            ChargePerUnit = 1.85;
        }
        else if (UnitConsumed >= 600)
        {
            ChargePerUnit = 2.00;
        }
        return ChargePerUnit;
    }
    
    float CalculateUnitCharge (float UnitConsumed, float ChargePerUnit)
    {
        float Additional;
        Additional = UnitConsumed * ChargePerUnit;
        return Additional;
    }
    
    float CalculateSurcharge (float Additional)
    {
        float SurCharge;
        if(Additional > 400)
        {
            SurCharge = (Additional * 10) / 100;
        }
        else if(Additional < 400)
        {
            SurCharge = 0;
        }
        return SurCharge;
    }
    
    float TotalCustomerBill (float Additional, float SurCharge)
    {
        float OverAllBill;
        OverAllBill = Additional + SurCharge;
        return OverAllBill;
    }