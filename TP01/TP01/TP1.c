/****************************************************************************
 * Copyright (C) 2020 by Programa��o de Hardware Engenharia de computa��o   *
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
 *   Teamplate based on Matteo Franchin�s code:                             *
 *   <http://fnch.users.sourceforge.net/doxygen_c.html>                     *
 ****************************************************************************/

/**
 * @file TP01.h
 * @author Aluno
 * @date 13 Aug 2020
 * @brief TP01 da mat�ria Programa��o de Hardware do 6 ciclo de engenharia de computa��o.
 *
 * Altere aqui a descri��o completa do que o programa faz;
 * Doxygens tags are words preceeded by either a backslash @\
 * or by an at symbol @@.
 * @see http://inovfablab.unisanta.br
 * @see http://fabmanager.unisanta.br
 */

#ifndef _TP01_
#  define _TP01_

#include <avr/io.h>

/**
 * @brief Este Tp � o primeiro TP da disciplica de Program���o de Hardware.
 *
 *  Desenvolva um c�digo em C, resolvendo (com inline assembly) a equa��o ( 0x45 - 25 + 0b00110110  - 0x62) e fa�a um print do resultado (usando C). 
 *  Crie tamb�m uma fun��o de Delay onde pode-se inserir o par�metro de tempo,
 *  mas a resolu��o dentro da fun��o em assembly. A resposta dever� ser implementado cabe�alho e descri��o de cada comando usando Doxygen.
 *  A resposta dever� ser enviada pelo Github no reposit�rio da mat�ria.
 */


typedef struct BoxStruct_struct {
	int a = 0x45;    
	int b = 25;    
	double c = 0b00110110; 
	int d = 0x62;
} BoxStruct;


int main(void)
{
  equacao = (a - b + c  - d);
  print(equacao);
}

#endif /* _TP01_ */