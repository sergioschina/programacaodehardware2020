/****************************************************************************
 * Copyright (C) 2020 by Programação de Hardware Engenharia de computação   *
 *                                                                          *
 * This file is part of Box.                                                *
 *                                                                          *
 *   Box is free software: you can redistribute it and/or modify it         *
 *   under the terms of the GNU Lesser General Public License as published  *
 *   by the Free Software Foundation, either version 3 of the License, or   *
 *   (at your option) any later version.                                    *
 *                                                                          *
 *   Box is distributed in the hope that it will be useful,                 *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of         *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the          *
 *   GNU Lesser General Public License for more details.                    *
 *                                                                          *
 *   You should have received a copy of the GNU Lesser General Public       *
 *   License along with Box.  If not, see <http://www.gnu.org/licenses/>.   * 
 *   Teamplate based on Matteo Franchin´s code:                             *
 *   <http://fnch.users.sourceforge.net/doxygen_c.html>                     *
 ****************************************************************************/

/**
 * @file TP01.h
 * @author Aluno
 * @date 13 Aug 2020
 * @brief TP01 da matéria Programação de Hardware do 6 ciclo de engenharia de computação.
 *
 * Altere aqui a descrição completa do que o programa faz;
 * Doxygens tags are words preceeded by either a backslash @\
 * or by an at symbol @@.
 * @see http://inovfablab.unisanta.br
 * @see http://fabmanager.unisanta.br
 */

#ifndef _TP01_
#  define _TP01_

#include <avr/io.h>

/**
 * @brief Este Tp é o primeiro TP da disciplica de Programãção de Hardware.
 *
 *  Desenvolva um código em C, resolvendo (com inline assembly) a equação ( 0x45 - 25 + 0b00110110  - 0x62) e faça um print do resultado (usando C). 
 *  Crie também uma função de Delay onde pode-se inserir o parâmetro de tempo,
 *  mas a resolução dentro da função em assembly. A resposta deverá ser implementado cabeçalho e descrição de cada comando usando Doxygen.
 *  A resposta deverá ser enviada pelo Github no repositório da matéria.
 */


typedef struct BoxStruct_struct {
	int a;    /**< Exemplo de explicação de uma struct #a. */
	int b;    /**< Exemplo de explicação de uma struct#b. */
	double c; /**< Exemplo de explicação de uma struct #c */
} BoxStruct;

//exemplo de documentação de uma função - Versão completa - Pode apagar ou usar a seu gosto

/**
 * @brief Example showing how to document a function with Doxygen.
 *
 * Description of what the function does. This part may refer to the parameters
 * of the function, like @p param1 or @p param2. A word of code can also be
 * inserted like @c this which is equivalent to <tt>this</tt> and can be useful
 * to say that the function returns a @c void or an @c int. If you want to have
 * more than one word in typewriter font, then just use @<tt@>.
 * We can also include text verbatim,
 * @verbatim like this@endverbatim
 * Sometimes it is also convenient to include an example of usage:
 * @code
 * BoxStruct *out = Box_The_Function_Name(param1, param2);
 * printf("something...\n");
 * @endcode
 * Or,
 * @code{.py}
 * pyval = python_func(arg1, arg2)
 * print pyval
 * @endcode
 * when the language is not the one used in the current source file (but
 * <b>be careful</b> as this may be supported only by recent versions
 * of Doxygen). By the way, <b>this is how you write bold text</b> or,
 * if it is just one word, then you can just do @b this.
 * @param param1 Description of the first parameter of the function.
 * @param param2 The second one, which follows @p param1.
 * @return Describe what the function returns.
 * @see Box_The_Second_Function
 * @see Box_The_Last_One
 * @see http://website/
 * @note Something to note.
 * @warning Warning.
 */
BoxStruct Box_The_Function_Name(BoxStruct param1, BoxStruct param2 /*, ...*/);// pode deletar esta função é apenas exemplo

//exemplo de documentação de uma função - Versão mais simples - Pode apagar ou usar a seu gosto
/**
 * @brief A simple stub function to show how links do work.
 *
 * Links are generated automatically for webpages (like http://www.google.co.uk)
 * and for structures, like BoxStruct_struct. For typedef-ed types use
 * #BoxStruct.
 * For functions, automatic links are generated when the parenthesis () follow
 * the name of the function, like Box_The_Function_Name().
 * Alternatively, you can use #Box_The_Function_Name.
 * @return @c NULL is always returned.
 */
BoxStruct Box_The_Second_Function(void);// pode deletar esta função é apenas exemplo

//exemplo de documentação de uma função - Versão resumida - Pode apagar ou usar a seu gosto
/**
 * Brief can be omitted. If you configure Doxygen with
 * <tt>JAVADOC_AUTOBRIEF=YES</tt>, then the first Line of the comment is used
 * instead. In this function this would be as if
 * @verbatim @brief Brief can be omitted. @endverbatim
 * was used instead.
 */
BoxStruct Box_The_Last_One(void); // pode deletar esta função é apenas exemplo


int main(void)
{
    /* Seu programa aqui */
    while (1) 
    {
    }
}

#endif /* _TP01_ */