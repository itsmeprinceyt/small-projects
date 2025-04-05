from datetime import datetime

def calculate_time_difference():
    user_input = input("Enter the past date and time:\n(YYYY-MM-DD HH:MM:SS)\nExample: 2024-09-28 08:54:10\nEnter Your Input:  ")
    past_time = datetime.strptime(user_input, "%Y-%m-%d %H:%M:%S")
    
    current_time = datetime.now()
    time_difference = current_time - past_time
    
    total_days = time_difference.days
    total_seconds = time_difference.seconds
    
    total_hours = total_seconds // 3600
    remaining_seconds = total_seconds % 3600
    total_minutes = remaining_seconds // 60
    remaining_seconds = remaining_seconds % 60

    print(f"[ {total_days} days, {int(total_hours)} hours, {int(total_minutes)} minutes, and {int(remaining_seconds)} seconds ] have passed since the time you entered.")

calculate_time_difference()
