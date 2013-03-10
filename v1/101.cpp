// UVa Online Judge
// Problem 101 - The Blocks Problem
// Written by Tian Zhou
// Created 3/4/13
// Last Modified 3/5/13

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

// return the position of the block n
int find_block_pos(vector<vector<int> >& blocks, int n)
{
    vector<int>::iterator it;

    for (int i = 0; i < blocks.size(); i++)
    {
        it = find(blocks[i].begin(), blocks[i].end(), n);

        if (it != blocks[i].end())
            return i;
    }

    return -1;
}

int find_stack_pos(vector<vector<int> >& blocks, int n_block_pos, int n)
{
    for(int i = 0; i < blocks[n_block_pos].size(); i++)
    {
        if (blocks[n_block_pos][i] == n)
            return i;
    }

    return -1;
}

void return_pos(vector<vector<int> >& blocks, int block_pos, int stack_pos)
{
    for (int i = stack_pos + 1; i < blocks[block_pos].size(); i++)
    {
        blocks[blocks[block_pos][i]].push_back(blocks[block_pos][i]);
    }

    blocks[block_pos].erase(blocks[block_pos].begin() + stack_pos + 1, blocks[block_pos].end());
}

void print(vector<vector<int> >& blocks, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << i << ":";
        
        for (int j = 0; j < blocks[i].size(); j++)
            cout << " " << blocks[i][j];

        cout << endl;
    }
}

int main()
{
    int n;
    string cmd1, cmd2;
    int a, b;
    vector<vector<int> > blocks(25);
    int a_block_pos;
    int b_block_pos;
    int a_stack_pos;
    int b_stack_pos;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        blocks[i].push_back(i);
    }
    
    cin >> cmd1;
    while(cmd1 != "quit")
    {
        cin >> a >> cmd2 >> b;

        a_block_pos = find_block_pos(blocks, a);
        b_block_pos = find_block_pos(blocks, b);

        if (a == b || a_block_pos == b_block_pos)
        {
            cin >> cmd1;
            continue;
        }

        a_stack_pos = find_stack_pos(blocks, a_block_pos, a);
        b_stack_pos = find_stack_pos(blocks, b_block_pos, b);

        if (cmd1 == "move")
        {
            return_pos(blocks, a_block_pos, a_stack_pos);

            if (cmd2 == "onto")
                return_pos(blocks, b_block_pos, b_stack_pos);

            blocks[b_block_pos].push_back(blocks[a_block_pos].back());
            blocks[a_block_pos].pop_back();
        }

        else if (cmd1 == "pile")
        {
            if (cmd2 == "onto")
                return_pos(blocks, b_block_pos, b_stack_pos);

            for (int i = a_stack_pos; i < blocks[a_block_pos].size(); i++)
            {
                blocks[b_block_pos].push_back(blocks[a_block_pos][i]);
            }

            blocks[a_block_pos].erase(blocks[a_block_pos].begin() + a_stack_pos, blocks[a_block_pos].end());

        }
        
        cin >> cmd1;
    }

    print(blocks, n);

    return 0;
}
