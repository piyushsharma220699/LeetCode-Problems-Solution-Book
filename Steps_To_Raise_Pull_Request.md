
Steps to Raise Pull Request
---

--- 

#### 1. Fork [this](https://github.com/piyushsharma220699/Hacktoberfest-2021) repository.
> Click on the Fork button at the top right corner.
#### 2. Clone the forked repository into your local system.
> Clone the repo by opening the terminal on your computer and running the command: 

> git clone https://github.com/Your-Github-Username/Hacktoberfest-2021

#### 3. Navigate to the Repository directory
> cd Hacktoberfest-2021

#### 4. Add the Upstream
> git remote add upstream https://github.com/piyushsharma220699/Hacktoberfest-2021

#### 5. Connect this local repository to the remote one.
> git remote -v

#### 6. Pull the latest update from upstream to avoid conflict issues.
> git pull upstream main

#### 7. Create a new branch.
> git checkout -b <your_branch_name>

#### 8. Make your changes to the above branch and push it when completed.
> git add .

> git commit -m "commit_message"    
*Note: Please use relevant commit messages.*

> git push -u origin <your_branch_name> 

#### 9. Create Pull request
> Go to your forked repository, click on `Compare and pull requests`.

> Confirm your changed files. Add appropriate title and description.

**Note: PR Title should be in the following format [LeetCode_question_number]\_[Question_name separated by underscore]_[Language]**

Ex : 174_Dungeon_Game_C++
 
> Click on `Create Pull Request`.

#### 10. Wait for approval
> Adjust the PR as per the review comments if any.
