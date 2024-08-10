#include <iostream>
#include <vector>
#include <algorithm>

struct Task {
    std::string name;
    bool completed;
};

std::vector<Task> tasks;

void addTask(const std::string& taskName) {
    Task newTask = {taskName, false};
    tasks.push_back(newTask);
    std::cout << "Task added successfully.\n";
}

void markTaskComplete(int index) {
    if(index >= 0 && index < tasks.size()) {
        tasks[index].completed = true;
        std::cout << "Task marked as complete.\n";
    } else {
        std::cout << "Invalid task index.\n";
    }
}

void deleteTask(int index) {
    if(index >= 0 && index < tasks.size()) {
        tasks.erase(tasks.begin() + index);
        std::cout << "Task deleted successfully.\n";
    } else {
        std::cout << "Invalid task index.\n";
    }
}

void displayTasks() {
    std::cout << "Tasks:\n";
    for(int i = 0; i < tasks.size(); ++i) {
        std::cout << i+1 << ". " << tasks[i].name;
        if(tasks[i].completed) {
            std::cout << " (Completed)";
        }
        std::cout << "\n";
    }
}

int main() {
    int choice;
    std::string taskName;
    
    do {
        std::cout << "\nMenu:\n";
        std::cout << "1. Add Task\n";
        std::cout << "2. Mark Task as Complete\n";
        std::cout << "3. Delete Task\n";
        std::cout << "4. Display Tasks\n";
        std::cout << "5. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch(choice) {
            case 1:
                std::cout << "Enter task name: ";
                std::cin.ignore();
                std::getline(std::cin, taskName);
                addTask(taskName);
                break;
            case 2:
                displayTasks();
                int completeIndex;
                std::cout << "Enter task index to mark as complete: ";
                std::cin >> completeIndex;
                markTaskComplete(completeIndex - 1);
                break;
            case 3:
                displayTasks();
                int deleteIndex;
                std::cout << "Enter task index to delete: ";
                std::cin >> deleteIndex;
                deleteTask(deleteIndex - 1);
                break;
            case 4:
                displayTasks();
                break;
            case 5:
                std::cout << "Exiting program.\n";
                break;
            default:
                std::cout << "Invalid choice. Please try again.\n";
        }

    } while(choice != 5);

    return 0;
}