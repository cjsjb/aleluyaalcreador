\context ChordNames \chords {
	$(if (>= (cadr (ly:version)) 24)
		#{ \set Score.rehearsalMarkFormatter = #format-mark-box-numbers #}
		#{ \set Score.markFormatter = #format-mark-box-numbers #})

	% intro
	\mark \default
	\skip 2.*1

	% Aleluya al Creador...
	\mark \default
	\skip 1*4
	\skip 1*4
	\skip 1*1

	% interludio
	\mark \default
	\skip 1*6

	% Aleluya al Creador...
	\mark \default
	\skip 1*4
	%\skip 1*4
}
