CQueue Algo

#define N 10
char CQueue[N];
int Rear = -1;
int Front = -1;

Procedure Add(item, Cqueue)
begin
	if((Rear + 1) mod N) = Front)
			Circular Queue Is Full;
	else
	{
		CQueue[Rear] = item;
	}
end

Procedure Delete(item, CQueue)
begin
	if (Front == Rear)
		Circular Queue Is Empty;
	else
	{
		Front = (Front + 1) Mod N
		item = CQueue[Front];
	}
end

//==== with tag --> indicate the CQueue is Full

#define N 10
char CQueue[N];
int Rear = -1;
int Front = -1;
bool Tag = 0;
Tag = 0;

Procedure Add(item, CQueue)
Begin
	if ((Rear + 1) Mod N) == Front AND (Tag-1)
		CircularQueue Is Full;
	else
	{
		CQueue[Rear] = item;
		if(Rear == Front) then Tag = 1;
	}
End

Procedure Delete(item, Cqueue)
begin
	if(Front == Rear) AND (Tag = 0)
		Circularr Queue Is Empty;
	else
	{
		Front = {Front + 1} Mod n
		item = CQueue[Front];
		if(Rear = Front)then Tag = 0;
	}
end