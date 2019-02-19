	string rijec;

		while (i1 < recenica.length())
		{
			if (recenica.at(i1) == ' ' || recenica.at(i1) == '.')
			{
				brojrazmaka++;
				recenice[i2] = rijec;
				rijec = "";
				i2++;
			}
			else
				rijec += recenica.at(i1);
			i1++;
		}

		tekst[i3].ur = --brojrazmaka;
		tekst[i3].uz = tekst[i3].uz - tekst[0].ur;

		string najkraca = recenice[0];