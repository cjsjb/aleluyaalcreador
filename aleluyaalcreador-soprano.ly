% This LilyPond file was generated by Rosegarden 1.7.3
\version "2.10.0"
% point and click debugging is disabled
#(ly:set-option 'point-and-click #f)
\header {
	title = "Aleluya al creador"
	tagline = "Coro Juvenil San Juan Bosco"
	instrument = "Soprano"
}
#(set-global-staff-size 20)
#(set-default-paper-size "letter")
\paper {
	#(define line-width (* 7 in))
	print-first-page-number = ##t
	ragged-bottom = ##t
	first-page-number = 1
}
global = {
	\time 4/4
	\skip 1*24  %% 1-24
}
globalTempo = {
	\tempo 4 = 130  \skip 1*24
}
\score {
	\new StaffGroup << % common
		% force offset of colliding notes in chords:
		\override Score.NoteColumn #'force-hshift = #1.0

		\include "aleluyaalcreador-acordes.inc"
		\include "aleluyaalcreador-soprano.inc"

	>> % notes

	\layout { \context { \RemoveEmptyStaffContext } }

} % score
