#ifndef BOOST_PREPROCESSOR_TUPLE_REVERSE_HPP
#define BOOST_PREPROCESSOR_TUPLE_REVERSE_HPP

/* Copyright (C) 2002
 * Housemarque Oy
 * http://www.housemarque.com
 *
 * Permission to copy, use, modify, sell and distribute this software is
 * granted provided this copyright notice appears in all copies. This
 * software is provided "as is" without express or implied warranty, and
 * with no claim as to its suitability for any purpose.
 *
 * See http://www.boost.org for most recent version.
 */

/** <p>Tuple reversal.</p>

<p>For example,</p>

<pre>
BOOST_PP_TUPLE_REVERSE(3,(A,B,C))
</pre>

<p>expands to <code>(C,B,A)</code>.</p>
*/
#define BOOST_PP_TUPLE_REVERSE(SIZE_OF_TUPLE,TUPLE) BOOST_PP_TUPLE_REVERSE_DELAY(SIZE_OF_TUPLE,TUPLE)

#if !defined(BOOST_NO_COMPILER_CONFIG) && defined(__MWERKS__)
/* This is a workaround for a CodeWarrior PP bug. Strictly speaking
 * this workaround invokes undefined behavior, but it works as desired.
 */
#  define BOOST_PP_TUPLE_REVERSE_DELAY(N,T) BOOST_PP_TUPLE##N##_REVERSE##T
#else
#  define BOOST_PP_TUPLE_REVERSE_DELAY(N,T) BOOST_PP_TUPLE##N##_REVERSE T
#endif
#define BOOST_PP_TUPLE0_REVERSE() ()
#define BOOST_PP_TUPLE1_REVERSE(A) (A)
#define BOOST_PP_TUPLE2_REVERSE(A,B) (B,A)
#define BOOST_PP_TUPLE3_REVERSE(A,B,C) (C,B,A)
#define BOOST_PP_TUPLE4_REVERSE(A,B,C,D) (D,C,B,A)
#define BOOST_PP_TUPLE5_REVERSE(A,B,C,D,E) (E,D,C,B,A)
#define BOOST_PP_TUPLE6_REVERSE(A,B,C,D,E,F) (F,E,D,C,B,A)
#define BOOST_PP_TUPLE7_REVERSE(A,B,C,D,E,F,G) (G,F,E,D,C,B,A)
#define BOOST_PP_TUPLE8_REVERSE(A,B,C,D,E,F,G,H) (H,G,F,E,D,C,B,A)
#define BOOST_PP_TUPLE9_REVERSE(A,B,C,D,E,F,G,H,I) (I,H,G,F,E,D,C,B,A)
#define BOOST_PP_TUPLE10_REVERSE(A,B,C,D,E,F,G,H,I,J) (J,I,H,G,F,E,D,C,B,A)
#define BOOST_PP_TUPLE11_REVERSE(A,B,C,D,E,F,G,H,I,J,K) (K,J,I,H,G,F,E,D,C,B,A)
#define BOOST_PP_TUPLE12_REVERSE(A,B,C,D,E,F,G,H,I,J,K,L) (L,K,J,I,H,G,F,E,D,C,B,A)
#define BOOST_PP_TUPLE13_REVERSE(A,B,C,D,E,F,G,H,I,J,K,L,M) (M,L,K,J,I,H,G,F,E,D,C,B,A)
#define BOOST_PP_TUPLE14_REVERSE(A,B,C,D,E,F,G,H,I,J,K,L,M,N) (N,M,L,K,J,I,H,G,F,E,D,C,B,A)
#define BOOST_PP_TUPLE15_REVERSE(A,B,C,D,E,F,G,H,I,J,K,L,M,N,O) (O,N,M,L,K,J,I,H,G,F,E,D,C,B,A)
#define BOOST_PP_TUPLE16_REVERSE(A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P) (P,O,N,M,L,K,J,I,H,G,F,E,D,C,B,A)
#define BOOST_PP_TUPLE17_REVERSE(A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,Q) (Q,P,O,N,M,L,K,J,I,H,G,F,E,D,C,B,A)
#define BOOST_PP_TUPLE18_REVERSE(A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,Q,R) (R,Q,P,O,N,M,L,K,J,I,H,G,F,E,D,C,B,A)
#define BOOST_PP_TUPLE19_REVERSE(A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,Q,R,S) (S,R,Q,P,O,N,M,L,K,J,I,H,G,F,E,D,C,B,A)
#define BOOST_PP_TUPLE20_REVERSE(A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,Q,R,S,T) (T,S,R,Q,P,O,N,M,L,K,J,I,H,G,F,E,D,C,B,A)
#define BOOST_PP_TUPLE21_REVERSE(A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,Q,R,S,T,U) (U,T,S,R,Q,P,O,N,M,L,K,J,I,H,G,F,E,D,C,B,A)
#define BOOST_PP_TUPLE22_REVERSE(A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,Q,R,S,T,U,V) (V,U,T,S,R,Q,P,O,N,M,L,K,J,I,H,G,F,E,D,C,B,A)
#define BOOST_PP_TUPLE23_REVERSE(A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,Q,R,S,T,U,V,W) (W,V,U,T,S,R,Q,P,O,N,M,L,K,J,I,H,G,F,E,D,C,B,A)
#define BOOST_PP_TUPLE24_REVERSE(A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,Q,R,S,T,U,V,W,X) (X,W,V,U,T,S,R,Q,P,O,N,M,L,K,J,I,H,G,F,E,D,C,B,A)
#define BOOST_PP_TUPLE25_REVERSE(A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,Q,R,S,T,U,V,W,X,Y) (Y,X,W,V,U,T,S,R,Q,P,O,N,M,L,K,J,I,H,G,F,E,D,C,B,A)
#define BOOST_PP_TUPLE26_REVERSE(A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,Q,R,S,T,U,V,W,X,Y,Z) (Z,Y,X,W,V,U,T,S,R,Q,P,O,N,M,L,K,J,I,H,G,F,E,D,C,B,A)
#define BOOST_PP_TUPLE27_REVERSE(A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,Q,R,S,T,U,V,W,X,Y,Z,a) (a,Z,Y,X,W,V,U,T,S,R,Q,P,O,N,M,L,K,J,I,H,G,F,E,D,C,B,A)
#define BOOST_PP_TUPLE28_REVERSE(A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,Q,R,S,T,U,V,W,X,Y,Z,a,b) (b,a,Z,Y,X,W,V,U,T,S,R,Q,P,O,N,M,L,K,J,I,H,G,F,E,D,C,B,A)
#define BOOST_PP_TUPLE29_REVERSE(A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,Q,R,S,T,U,V,W,X,Y,Z,a,b,c) (c,b,a,Z,Y,X,W,V,U,T,S,R,Q,P,O,N,M,L,K,J,I,H,G,F,E,D,C,B,A)
#define BOOST_PP_TUPLE30_REVERSE(A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,Q,R,S,T,U,V,W,X,Y,Z,a,b,c,d) (d,c,b,a,Z,Y,X,W,V,U,T,S,R,Q,P,O,N,M,L,K,J,I,H,G,F,E,D,C,B,A)
#define BOOST_PP_TUPLE31_REVERSE(A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,Q,R,S,T,U,V,W,X,Y,Z,a,b,c,d,e) (e,d,c,b,a,Z,Y,X,W,V,U,T,S,R,Q,P,O,N,M,L,K,J,I,H,G,F,E,D,C,B,A)
#define BOOST_PP_TUPLE32_REVERSE(A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,Q,R,S,T,U,V,W,X,Y,Z,a,b,c,d,e,f) (f,e,d,c,b,a,Z,Y,X,W,V,U,T,S,R,Q,P,O,N,M,L,K,J,I,H,G,F,E,D,C,B,A)
#endif
