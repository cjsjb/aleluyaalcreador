\context Staff = "tenor" \with { \consists "Ambitus_engraver" } <<
	\set Staff.instrumentName = "Tenor"
	\set Staff.shortInstrumentName = "T."
	\set Score.skipBars = ##t
	\set Staff.printKeyCancellation = ##f
	\new Voice \global
	\new Voice \globalTempo

	\context Voice = "voice 5" {
		\override Voice.TextScript #'padding = #2.0
		\override MultiMeasureRest #'expand-limit = 1

		\clef "treble_8"
		\key g \major

		\transpose c'' c' {
		R1  |
		b' 4 b' 8 b' 4 b' 4.  |
		a' 4 g' 8 fis' ~ fis' 2  |
		g' 4 g' 8 g' 4 g' 4.  |
		%% 5
		fis' 4 e' 8 d' ~ d' 2  |
		e' 4 e' 8 e' 4 e' 4.  |
		fis' 4 fis' 8 fis' 4 fis' 4.  |
		g' 2 a' 4 fis'  |
		g' 1  |
		%% 10
		R1*7  |
		b' 4 b' 8 b' 4 b' 4.  |
		a' 4 g' 8 fis' ~ fis' 2  |
		g' 4 g' 8 g' 4 g' 4.  |
		%% 20
		fis' 4 e' 8 d' ~ d' 2  |
		e' 4 e' 8 e' 4 e' 4.  |
		fis' 4 fis' 8 fis' 4 fis' 4.  |
		g' 2 a' 4 fis'  |
		g' 1  |
		}
		\bar "|."
	} % Voice
	\lyricsto "voice 5" \new Lyrics \lyricmode {
		¡A -- le -- lu -- ya al crea -- dor,
		a -- le -- lu -- "ya al" sal -- va -- dor,
		a -- le -- lu -- ya, a -- le -- lu -- ya,
		a -- le -- lu -- ya!

		¡A -- le -- lu -- ya al crea -- dor,
		a -- le -- lu -- "ya al" sal -- va -- dor,
		a -- le -- lu -- ya, a -- le -- lu -- ya,
		a -- le -- lu -- ya!
	}
>> % Staff ends
