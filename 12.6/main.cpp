#include <iostream>
#include <cstdlib> // for rand() and srand()
#include <ctime> // for time()
#include "queue.h"

const int MIN_PER_HR = 60;

bool newcustomer(double x); // is there a new customer?

int main()
{
  using std::cin;
  using std::cout;
  using std::endl;
  using std::ios_base;
  
  // setting things up
  std::srand(std::time(0)); // random initializing of rand()
  cout << "Case Study: Bank of Heather Automatic Teller\n";
  cout << "Enter maximum size of queue: ";
  
  int qs;
  cin >> qs;
  Queue line1(qs), line2(qs); // line queue holds up to qs people
  int hours = 100; // hours of simulation
  // simulation will run 1 cycle per minute
  long cyclelimit = MIN_PER_HR * hours; // # of cycles
  Item temp; // new customer data
  
  long turnaways; // turned away by full queue
  long customers; // joined the queue
  long served; // served during the simulation
  long sum_line; // cumulative line length
  int wait_time_1, wait_time_2; // time until autoteller is free
  long line_wait; // cumulative time in line

  double left = 0.0, right = 1000000.0;
  double perhour; // average # of arrival per hour
  double min_per_cust; // average time between arrivals
  double average_wait;

  // running the simulation
  do
  {  
    perhour = (left + right) / 2;
    min_per_cust = MIN_PER_HR / perhour;
    turnaways = 0;
    customers = 0;
    served = 0;
    sum_line = 0;
    wait_time_1 = 0;
    wait_time_2 = 0;
    line_wait = 0;
    for (int cycle = 0; cycle < cyclelimit; cycle++)
    {
      if (newcustomer(min_per_cust)) // have newcomer
      {
        if (line1.isfull() && line2.isfull())
          turnaways++;
        else
        {
          customers++;
          temp.set(cycle); // cycle = time of arrival
          if (line1.queuecount() < line2.queuecount())
            line1.enqueue(temp);
          else
            line2.enqueue(temp);
        }
      }
      if (wait_time_1 <= 0 && !line1.isempty())
      {
        line1.dequeue (temp); // attend next customer
        wait_time_1 = temp.ptime(); // for wait_time minutes
        line_wait += cycle - temp.when();
        served++;
      }
      if (wait_time_1 > 0)
        wait_time_1--;
      if (wait_time_2 <= 0 && !line2.isempty())
      {
        line2.dequeue (temp); // attend next customer
        wait_time_2 = temp.ptime(); // for wait_time minutes
        line_wait += cycle - temp.when();
        served++;
      }
      if (wait_time_2 > 0)
        wait_time_2--;
      sum_line += line1.queuecount();
      sum_line += line2.queuecount();
    }
    average_wait = (double) line_wait / served;

    //cout << "wait " << average_wait << " on " << perhour << " perhour" << '\n';
    
    (average_wait > 1.0 ? right : left) = perhour;
  }
  while (fabs(average_wait - 1.0) > 0.05);
  // reporting results
  if (customers > 0)
  {
    cout << "customers accepted: " << customers << endl;
    cout << " customers served: " << served << endl;
    cout << " turnaways: " << turnaways << endl;
    cout << "average queue size: ";
    cout.precision(2);
    cout.setf(ios_base::fixed, ios_base::floatfield);
    cout << (double) sum_line / cyclelimit / 2 << endl;
    cout << "Average wait time of "
      << average_wait << " minutes was achieved for " << perhour << " customers per hour.\n";
  }
  else
    cout << "No customers!\n";
  cout << "Done!\n";

  return 0;
}

// x = average time, in minutes, between customers
// return value is true if customer shows up this minute
bool newcustomer(double x)
{
  return (std::rand() * x / RAND_MAX < 1);
}
