int task_number = 1;
const int mindistance = 60;
bool checkpoint = false;
void linefollow(){
// line following algorithm
//obtain reqdings and check if all sensors report white. If so, it is a checkpoint
  if (checkpoint){
    task_number += 1;
  }
}

void wallfollowleft(){ // follow wall continuously until distance is greater than mindistance
  while(leftdistance < mindistance){
    // follow wall
  }
}

void wallfollowright(){ // follow wall continuously until distance is greater than mindistance
  while(rightdistance < mindistance){
    // follow wall
  }
}

void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

  switch task_number{
    case 1:
      linefollow();
      break;
    case 2:
      linefollow();
      if (leftdistance < mindistance){
        wallfollowleft();
      }
      else if (rightdistance < mindistance){
        wallfollowright();
      }
  }

}
