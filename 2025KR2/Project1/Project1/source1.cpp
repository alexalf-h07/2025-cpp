#include<cstdio>
#include<cstdlib>
#include<clocale>
#define _CRT_SECURE_NO_WARNINGS
#include<windows.h>
#include<cstring>

typedef struct
{ //структура для актёра
	char name[50];
	char role[50];
} Actor;
typedef struct
{
	Actor* actors; //дин массив актёров
	int count; //количество актёров
	int capacity; //вместимость массива
} ActorArray;

typedef struct
{ // структура для фильма
	char title[100];
	char genre[100];
	ActorArray actorArray;// вложенная структура с актёрами
} film;
void init_actor_array(ActorArray* aa)
{
	aa->count = 0;
	aa->capacity = 5;
	aa->actors = (Actor*)malloc(aa->capacity * sizeof(Actor));
}
void add_actor(ActorArray* aa, const Actor* actor) //увеличение массива, если он полный
{
	if (aa->count >= aa->capacity)
	{
		aa->capacity *= 2;
		aa->actors = (Actor*)realloc(aa->actors, aa->capacity * sizeof(Actor));
	}
	strcpy(aa->actors[aa->count].name, actor->name); //копирую имя и роль актёра в массив актёров , потом увеличиваю количество
	strcpy(aa->actors[aa->count].role, actor->role);
	aa->count++;
}
void free_actor_array(ActorArray* aa) //обнуление памяти
{
	free(aa->actors);
	aa->actors = NULL;
	aa->count = 0;
	aa->capacity = 0;
}
void free_films(film* films, int n)
{
	for (int i = 0; i < n; i++)
	{
		free_actor_array(&films[i].actorArray); //освобождаю массив актёров, потом фильмов
	}
	free(films);
}
film* create_films(int n)
{
	film* films = (film*)malloc(n * sizeof(film));
	if (films == NULL)
	{
		return NULL;
	}
	for (int i = 0; i < n; i++)
	{
		films[i].title[0] = '\0';  // Инициализирую строки названия и жанра фильма нулём
		films[i].genre[0] = '\0';
		init_actor_array(&films[i].actorArray); //инициализирую массив актёров
	}
	return films;
}
film* find_max_film(film* films, int n)
{
	if (n <= 0)
	{
		return NULL;
	}
	film* max_film = &films[0];
	int max_count = films[0].actorArray.count;

	for (int i = 1; i < n; i++) //поиск фильма с наибольшим счётчиков
	{
		int current_count = films[i].actorArray.count;
		if (current_count > max_count)
		{
			max_film = &films[i];
			max_count = current_count;
		}
	}
	return max_film;
}
void print_film(const film* film) //вывод нужной информации
{
	printf("Фильм: %s, жанр: %s\n", film->title, film->genre);
	printf("Количество актеров: %d\n", film->actorArray.count);
	if (film->actorArray.count > 0)
	{
		printf("Актеры:\n");
		for (int i = 0; i < film->actorArray.count; i++)
		{
			printf(" %s - %s\n", film->actorArray.actors[i].name, film->actorArray.actors[i].role);
		}
	}
	printf("\n");
}

void clear_input_buffer()
{
	int c = 0;
	while ((c = getchar()) != '\n' && c != EOF) {}
}
void clear_last_linebreak(char* str)
{
	if (str != NULL)
	{
		str[strcspn(str, "\n")] = '\0';
	}
}
int main(int argc, char** argv)
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "Russian");
	int n = 0;
	printf("Введите количество фильмов : ");
	scanf_s("%d", &n);
	clear_input_buffer();
	film* films = create_films(n);
	for (int i = 0; i < n; i++)
	{
		printf("\nФильм %d:\n", i + 1);// вывожу фильм и всю информацию о нем

		printf("Название фильма: ");
		fgets(films[i].title, sizeof(films[i].title), stdin);
		clear_last_linebreak(films[i].title);

		printf("Жанр: ");
		fgets(films[i].genre, sizeof(films[i].genre), stdin);
		clear_last_linebreak(films[i].genre);

		int actor_count = 0;;
		printf("Количество актёров: ");
		scanf_s("%d", &actor_count);
		clear_input_buffer();
		printf("Введите данные об актёрах: \n");
		for (int j = 0; j < actor_count; j++)
		{
			Actor actor;
			printf(" Актер %d:\n", j + 1);
			printf(" Имя: ");
			fgets(actor.name, sizeof(actor.name), stdin);
			clear_last_linebreak(actor.name);
			printf("Роль: ");
			fgets(actor.role, sizeof(actor.role), stdin);
			clear_last_linebreak(actor.role);

			add_actor(&films[i].actorArray, &actor);
		}
		clear_input_buffer();
	}
	printf("\nВсе фильмы\n");
	for (int i = 0; i < n; i++)
	{
		printf("%d. ", i + 1);
		print_film(&films[i]);
	}

	film* max = find_max_film(films, n);
	if (max != NULL)
	{
		printf("\nФильм с наибольшим количеством актеров\n");
		print_film(max);
	}
	free_films(films, n);
	return 0;
}