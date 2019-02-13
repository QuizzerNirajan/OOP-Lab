#include <stdio.h>
enum month {jan, feb, mar, apr, may, june, july, aug, sep, oct, nov,  dec};
const char* month[]={"jan","feb","mar","apr","may","june","july","aug","sep","oct","nov","dec"};
int main()
{
  int start;
  int totalYears;
  printf("Enter the year to start with : ");
  scanf(" %d",&start);
  printf("Enter total no of years : ");
  scanf(" %d",&totalYears);
  int expMonth[totalYears][12];
  int yearlyAvg[totalYears];
  int monthlyAvg[] = {0,0,0,0,0,0,0,0,0,0,0,0};
  int total= 0;
  int i;
  printf("Enter the expenditure for given months of the year : " );

  for (i = 0;i < totalYears; i++ )
    {
      printf("\nFor year %d\n",start+i);
	yearlyAvg[i] = 0;
      enum month mon;
      for (mon = jan; mon <= dec; mon++)
	{
	  printf("%s : ",month[mon]);
	  scanf(" %d",&expMonth[i][mon]);
	  yearlyAvg[i] += expMonth[i][mon];
	  monthlyAvg[mon] += expMonth[i][mon];
	  total += expMonth[i][mon];
	}
      printf("\n");
    }
  enum month mon;
  printf("year |");
  for (mon = jan; mon <= dec; mon++)
	{
	  printf(" %s |",month[mon]);
	}
  printf("Avg");
  printf("\n");
  for (i = 0; i < totalYears; i++)
    {
      enum month mon;
      printf("%d |",i+start);
      for (mon = jan; mon <= dec; mon++)
	{
	  printf(" Rs%d |",expMonth[i][mon]);
	}
      printf(" Rs%d",yearlyAvg[i]/12);
      printf("\n");
    }
  printf("Avg  |");
  for (mon = jan; mon <= dec; mon++)
    {
      printf(" Rs%d |",monthlyAvg[mon]/totalYears);
    }

  printf("\n Total Expenditure : Rs%d",total);
  printf("\n Average monthly Expediture : Rs%d",total/(totalYears*12));
  return 0;
}
