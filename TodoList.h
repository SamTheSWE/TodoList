#ifndef TODOLIST_H
#define TODOLIST_H

#include <vector>
#include <string>
#include <iostream>

// TodoList class definition
class TodoList {
private:
    std::vector<std::string> tasks;  // Vector to store tasks

public:
    // Function to add a task to the list
    void addTask(const std::string &task) {
        tasks.push_back(task);
    }

    // Function to display all tasks
    void viewTasks() const {
        if (tasks.empty()) {
            std::cout << "No tasks to show." << std::endl;
        } else {
            for (size_t i = 0; i < tasks.size(); ++i) {
                std::cout << i + 1 << ". " << tasks[i] << std::endl;
            }
        }
    }

    // Function to delete a task from the list
    void deleteTask(int index) {
        if (index >= 0 && index < tasks.size()) {
            tasks.erase(tasks.begin() + index);
            std::cout << "Task deleted." << std::endl;
        } else {
            std::cout << "Invalid task number." << std::endl;
        }
    }
};

#endif
