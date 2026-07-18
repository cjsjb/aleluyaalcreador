\context ChordNames \chords {
	$(if (>= (cadr (ly:version)) 24)
		#{ \set Score.rehearsalMarkFormatter = #format-mark-box-numbers #}
		#{ \set Score.markFormatter = #format-mark-box-numbers #})

	% intro
	\skip 2.*1

	% Aleluya al Creador...
	\break
	\skip 1*4
	\break
	\skip 1*4
	\skip 1*1

	% interludio
	\break
	\skip 1*6

	% Aleluya al Creador...
	\break
	\skip 1*4
	\break
	%\skip 1*4
}
