class Math
{
public:
	int Add(int v1, int v2);
	int Add(int v1, int v2, int v3);
	int Add(int v1, int v2, int v3, int v4);
	float Add(float v1, float v2);
};
int Math::Add(int v1, int v2)
{
	return v1 + v2;
}
int Math::Add(int v1, int v2, int v3)
{
	return v1 + v2 + v3;
}
int Math::Add(int v1, int v2, int v3, int v4)
{
	return v1 + v2 + v3 + v4;
}
float Math::Add(float v1, float v2)
{
	return v1 + v2;
}