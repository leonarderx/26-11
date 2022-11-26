#include <SFML/Graphics.hpp>

using namespace sf;

int main()
{
	// ������, �������, ����������, �������� ������� ����� ����������
	RenderWindow window(VideoMode(800, 600), "SFML Works!");

	CircleShape c1(200.f);

	// ������� ���� ����������. �����������, ���� ������� ����
	while (window.isOpen())
	{
		// ������������ ������� ������� � �����
		Event event;
		while (window.pollEvent(event))
		{
			// ������������ ����� �� �������� � ����� ������� ����?
			if (event.type == Event::Closed)
				// ����� ��������� ���
				window.close();
		}
		// ��������� ���� 
		window.draw(c1);
		window.display();
	}

	return 0;
}