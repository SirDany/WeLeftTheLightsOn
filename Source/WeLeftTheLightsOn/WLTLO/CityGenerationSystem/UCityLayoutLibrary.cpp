#include "WLTLO/CityGenerationSystem/UCityLayoutLibrary.h"



void UUCityLayoutLibrary::GenerateGridPlots(FVector Origin, FVector Size, float CellSize, TArray<FCityPlot>& OutPlots)
{
	int32 XCount = Size.X / CellSize;
	int32 YCount = Size.Y / CellSize;

	for (int32 x=0; x < XCount; ++x)
	{
		for (int32 y=0; y < YCount; ++y)
		{
			FCityPlot Plot;

			Plot.Center = Origin + FVector(x * CellSize, y * CellSize, 0);
			Plot.Extents = FVector(CellSize * .5f);
			OutPlots.Add(Plot);
		}
	}
}
