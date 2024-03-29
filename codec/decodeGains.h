/*
 * Copyright (c) 2011-2019 Belledonne Communications SARL.
 *
 * This file is part of bcg729.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 */
#ifndef DECODEGAINS_H
#define DECODEGAINS_H
/* init function */
void initDecodeGains(bcg729DecoderChannelContextStruct *decoderChannelContext);

/*****************************************************************************/
/* decodeGains : decode adaptive and fixed codebooks gains as in spec 4.1.5  */
/*    parameters:                                                            */
/*      -(i/o) decoderChannelContext : the channel context data              */
/*      -(i) GA : parameter GA: Gain Codebook Stage 1 (3 bits)               */
/*      -(i) GB : paremeter GB: Gain Codebook Stage 2 (4 bits)               */
/*      -(i) fixedCodebookVector: 40 values current fixed Codebook vector    */
/*           in Q1.13.                                                       */
/*      -(i) frameErasureFlag : set in case of frame erasure                 */
/*      -(i/o) adaptativeCodebookGain : input previous/output current        */
/*             subframe Pitch Gain in Q14                                    */
/*      -(i/o) fixedCodebookGain : input previous/output current Fixed       */
/*             Codebook Gain in Q1                                           */
/*                                                                           */
/*****************************************************************************/
void decodeGains (bcg729DecoderChannelContextStruct *decoderChannelContext, uint16_t GA, uint16_t GB, word16_t *fixedCodebookVector,
			word16_t *adaptativeCodebookGain, word16_t *fixedCodebookGain);
#endif /* ifndef DECODEGAINS_H */
