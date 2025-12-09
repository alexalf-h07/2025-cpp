#include <cstdio>
#include <cstdlib>
#include <clocale>
#include <cstring>
#define _CRT_SECURE_NO_WARNINGS
#include <windows.h>

// Прототипы структур
typedef struct Actor Actor;
typedef struct ActorArray ActorArray;
typedef struct film film;

// Структура для актера
typedef struct Actor
{
    char name[50];
    char role[50];
} Actor;

// Структура для массива актеров
typedef struct ActorArray
{
    Actor* actors; // дин массив актеров
    int count;     // количество актеров
    int capacity;  // вместимость массива
} ActorArray;

// Структура для фильма
typedef struct film
{
    char title[100];
    char genre[100];
    ActorArray actorArray; // вложенная структура с актерами
} film;

// Инициализация массива актеров
void init_actor_array(ActorArray* aa)
{
    aa->count = 0;
    aa->capacity = 2; // Начальная вместимость
    aa->actors = (Actor*)malloc(aa->capacity * sizeof(Actor));
}

// Добавление актера в массив
void add_actor(ActorArray* aa, const Actor* actor)
{
    if (aa->count >= aa->capacity)
    {
        aa->capacity *= 2;
        aa->actors = (Actor*)realloc(aa->actors, aa->capacity * sizeof(Actor));
    }
    strcpy(aa->actors[aa->count].name, actor->name);
    strcpy(aa->actors[aa->count].role, actor->role);
    aa->count++;
}

// Освобождение памяти массива актеров
void free_actor_array(ActorArray* aa)
{
    free(aa->actors);
    aa->actors = NULL;
    aa->count = 0;
    aa->capacity = 0;
}

// Создание массива фильмов
film* create_films(int n)
{
    film* films = (film*)malloc(n * sizeof(film));
    if (films == NULL)
    {
        return NULL;
    }
    for (int i = 0; i < n; i++)
    {
        films[i].title[0] = '\0';
        films[i].genre[0] = '\0';
        init_actor_array(&films[i].actorArray);
    }
    return films;
}

// Поиск фильма с наибольшим количеством актеров
film* find_max_film(film* films, int n)
{
    if (n <= 0)
    {
        return NULL;
    }
    film* max_film = &films[0];
    int max_count = films[0].actorArray.count;

    for (int i = 1; i < n; i++)
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

// Вывод информации о фильме
void print_film(const film* film)
{
    printf("Фильм: %s, жанр: %s\n", film->title, film->genre);
    printf("Количество актеров: %d\n", film->actorArray.count);
    if (film->actorArray.count > 0)
    {
        printf("Актеры:\n");
        for (int i = 0; i < film->actorArray.count; i++)
        {
            printf("  %s - %s\n", film->actorArray.actors[i].name,
                film->actorArray.actors[i].role);
        }
    }
    printf("--------------------\n");
}

// Освобождение памяти всех фильмов
void free_films(film* films, int n)
{
    for (int i = 0; i < n; i++)
    {
        free_actor_array(&films[i].actorArray);
    }
    free(films);
}

// Очистка буфера ввода
void clear_input_buffer()
{
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

// Удаление символа новой строки из строки
void clear_last_linebreak(char* str)
{
    if (str != NULL)
    {
        size_t len = strlen(str);
        if (len > 0 && str[len - 1] == '\n')
        {
            str[len - 1] = '\0';
        }
    }
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "Russian");

    int n = 0;
    printf("Введите количество фильмов: ");
    scanf("%d", &n);
    clear_input_buffer();

    film* films = create_films(n);
    if (films == NULL)
    {
        printf("Ошибка выделения памяти!\n");
        return 1;
    }

    // Ввод информации о фильмах
    for (int i = 0; i < n; i++)
    {
        printf("\nФильм %d:\n", i + 1);

        printf("Название фильма: ");
        fgets(films[i].title, sizeof(films[i].title), stdin);
        clear_last_linebreak(films[i].title);

        printf("Жанр: ");
        fgets(films[i].genre, sizeof(films[i].genre), stdin);
        clear_last_linebreak(films[i].genre);

        int actor_count = 0;
        printf("Количество актеров: ");
        scanf("%d", &actor_count);
        clear_input_buffer();

        if (actor_count > 0)
        {
            printf("Введите данные об актерах:\n");
        }

        for (int j = 0; j < actor_count; j++)
        {
            Actor actor;
            printf("  Актер %d:\n", j + 1);

            printf("    Имя: ");
            fgets(actor.name, sizeof(actor.name), stdin);
            clear_last_linebreak(actor.name);

            printf("    Роль: ");
            fgets(actor.role, sizeof(actor.role), stdin);
            clear_last_linebreak(actor.role);

            add_actor(&films[i].actorArray, &actor);
        }
    }

    // Вывод всех фильмов
    printf("\n=== Все фильмы ===\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d. ", i + 1);
        print_film(&films[i]);
    }

    // Поиск фильма с наибольшим количеством актеров
    film* max = find_max_film(films, n);
    if (max != NULL)
    {
        printf("\n=== Фильм с наибольшим количеством актеров ===\n");
        print_film(max);
    }

    // Освобождение памяти
    free_films(films, n);

    return 0;
}