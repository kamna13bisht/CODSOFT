#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Structure to represent a Task
struct Task {
    string description;
    bool isCompleted;

    Task(string desc, bool completed = false)
        : description(desc), isCompleted(completed) {}
};

// To-Do List Manager Class
class ToDoList {
private:
    vector<Task> tasks;

public:
    // Add a new task
    void addTask(const string& taskDescription) {
        tasks.emplace_back(taskDescription);
        cout << "Task added: " << taskDescription << endl;
    }

    // View all tasks
    void viewTasks() const {
        if (tasks.empty()) {
            cout << "Your to-do list is empty." << endl;
            return;
        }

        cout << "\nTo-Do List:" << endl;
        for (size_t i = 0; i < tasks.size(); ++i) {
            cout << i + 1 << ". [" << (tasks[i].isCompleted ? "X" : " ") << "] " 
                 << tasks[i].description << endl;
        }
    }

    // Mark a task as completed
    void markTaskCompleted(size_t index) {
        if (index > 0 && index <= tasks.size()) {
            tasks[index - 1].isCompleted = true;
            cout << "Task marked as completed: " << tasks[index - 1].description << endl;
        } else {
            cout << "Invalid task number." << endl;
        }
    }

    // Remove a task
    void removeTask(size_t index) {
        if (index > 0 && index <= tasks.size()) {
            cout << "Task removed: " << tasks[index - 1].description << endl;
            tasks.erase(tasks.begin() + index - 1);
        } else {
            cout << "Invalid task number." << endl;
        }
    }
};

// Main Program
int main() {
    ToDoList todoList;
    int choice;

    do {
        // Display menu
        cout << "\nTo-Do List Manager\n";
        cout << "Enter 1 to Add Task\n";
        cout << "Enter 2 to View Tasks\n";
        cout << "Enter 3 to Mark Task as Completed\n";
        cout << "Enter 4 to Remove Task\n";
        cout << "Enter 5 to Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        cin.ignore(); // Ignore the newline character after input
        switch (choice) {
        case 1: {
            // Add Task
            string taskDescription;
            cout << "Enter task description: ";
            getline(cin, taskDescription);
            todoList.addTask(taskDescription);
            break;
        }
        case 2:
            // View Tasks
            todoList.viewTasks();
            break;

        case 3: {
            // Mark Task as Completed
            int taskNumber;
            cout << "Enter task number to mark as completed: ";
            cin >> taskNumber;
            todoList.markTaskCompleted(taskNumber);
            break;
        }

        case 4: {
            // Remove Task
            int taskNumber;
            cout << "Enter task number to remove: ";
            cin >> taskNumber;
            todoList.removeTask(taskNumber);
            break;
        }

        case 5:
            // Exit
            cout << "Exiting the program. Goodbye!" << endl;
            break;

        default:
            cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 5);

    return 0;
}
