#pragma once
#include <iostream>

class Node
{
    private:
        int note = 0;
        Node* right = nullptr;
        Node* left = nullptr;

    public:
        Node() {}//Constructor
        ~Node() {}//Destructor

        Node* createNode(int p)
        {
            Node* newNode = new Node();
            newNode->note = p;
            return newNode;
        }

        void add(Node*& source, int value)
        {
            if (source == NULL)
            {
                Node* newNode = createNode(value);
                source = newNode;
                std::cout << "Se realiza la estructura de datos " << value << std::endl;
            }
            else
            {

                int newSource = source->note;
                if (value < newSource)
                {
                    add(source->left, value);
                    std::cout << "Se integra " << value << " el valor por parte de la izquierda " << std::endl;
                }
                else
                {
                    add(source->right, value);
                    std::cout << "Se integra " << value << " el valor por parte de la derecha " << std::endl;
                }

            }
        }

        void rem(Node*& source, int value)
        {
            if (source == NULL)
            {                
                std::cout << "No hay nada en el valor:  " << value << std::endl;
            }
            else
            {

                int newSource = source->note;
                if (value < newSource)
                {
                    add(source->left, 0);
                }
                else
                {
                    add(source->right, 0);
                }

            }
        }
};
