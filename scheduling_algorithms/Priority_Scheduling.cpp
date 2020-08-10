#include<bits/stdc++.h>
using namespace std;

struct Process
{
	int pid;
	int burst_time;
	int priority;
};

// Function to sort the Process acc. to priority
bool comparison(Process a, Process b)
{
	return (a.priority > b.priority);
}


void findWaitingTime(Process proc[], int n,
					int wt[])
{

	wt[0] = 0;


	for (int i = 1; i < n ; i++ )
		wt[i] = proc[i-1].burst_time + wt[i-1] ;
}

// calculate turn around time
void findTurnAroundTime( Process proc[], int n,
						int wt[], int tat[])
{
	for (int i = 0; i < n ; i++)
		tat[i] = proc[i].burst_time + wt[i];
}

 //calculate average time
void findavgTime(Process proc[], int n)
{
	int wt[n], tat[n], total_wt = 0, total_tat = 0;

	findWaitingTime(proc, n, wt);

	findTurnAroundTime(proc, n, wt, tat);

	cout << "\nProcesses"<< "\tBurst time "
		<< " \tWaiting time " << " \tTurn around time\n";

	// Calculate total waiting time and total turn around time
	for (int i=0; i<n; i++)
	{
		total_wt = total_wt + wt[i];
		total_tat = total_tat + tat[i];
		cout << " " << proc[i].pid << "\t\t"
			<< proc[i].burst_time << "\t\t" << wt[i]
			<< "\t\t" << tat[i] <<endl;
	}

	cout << "\nAverage waiting time = "
		<< (float)total_wt / (float)n;
	cout << "\nAverage turn around time = "
		<< (float)total_tat / (float)n;
}

void priorityScheduling(Process proc[], int n)
{
	// Sort processes by priority
	sort(proc, proc + n, comparison);

	cout<< "Order in which processes gets executed \n";
	for (int i = 0 ; i < n; i++)
		cout << proc[i].pid <<" " ;

	findavgTime(proc, n);
}

int main()
{
	Process proc[] = {{1, 10, 2}, {2, 5, 0}, {3, 8, 1}};
	int n = sizeof proc / sizeof proc[0];
	priorityScheduling(proc, n);
	return 0;
}
