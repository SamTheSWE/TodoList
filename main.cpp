
---

**2. `main.cpp`:**

```cpp
#include <iostream>
#include <vector>
#include <string>
#include "TodoList.h"

// Function prototypes
void displayMenu();
void addTask(TodoList &todoList);
void viewTasks(const TodoList &todoList);
void deleteTask(TodoList &todoList);

int main() {
    TodoList todoList;
    int choice;

    do {
        displayMenu();
        std::cin >> choice;

        switch (choice) {
            case 1:
                addTask(todoList);
                break;
            case 2:
                viewTasks(todoList);
                break;
            case 3:
                deleteTask(todoList);
                break;
            case 4:
                std::cout << "Goodbye!" << std::endl;
                break;
            default:
                std::cout << "Invalid option. Please try again." << std::endl;
        }
    } while (choice != 4);

    return 0;
}

// Function to display the menu options
void displayMenu() {
    std::cout << "1. Add a task" << std::endl;
    std::cout << "2. View tasks" << std::endl;
    std::cout << "3. Delete a task" << std::endl;
    std::cout << "4. Exit" << std::endl;
    std::cout << "Choose an option: ";
}

// Function to add a task to the list
void addTask(TodoList &todoList) {
    std::string task;
    std::cout << "Enter task: ";
    std::cin.ignore();
    std::getline(std::cin, task);
    todoList.addTask(task);
}

// Function to view all tasks
void viewTasks(const TodoList &todoList) {
    todoList.viewTasks();
}

// Function to delete a task from the list
void deleteTask(TodoList &todoList) {
    int index;
    std::cout << "Enter the task number to delete: ";
    std::cin >> index;
    todoList.deleteTask(index - 1); // Adjusting for zero-based index
}
