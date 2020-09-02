#ifndef MENSCH_HPP_
#define MENSCH_HPP_

#include <string>
#include <ostream>

struct Mensch {

private:
	std::string name_ = "";
	int alter_ = 0;
	double gewicht_ = 0.0, hoehe_ = 0.0;

public:
	Mensch (std::string name = "", int alter = 0, double gewicht = 0.0, double hoehe = 0.0);

	/// @brief Mensch adds weight
	///
	/// @param gewicht double: Adds weight through eating
	///
	void essen (double gewicht);

	/// @brief Prints all information about Mensch
	///
	std::ostream& status_drucken (std::ostream& out);

	/// @brief Extract the name of Mensch
	///
	/// @return std::string: name of Mensch
        inline std::string getName() {return name_;}
};

/*std::ostream& operator<< (std::ostream& out, Mensch& m) {
        return m.status_drucken(out);
} */
#endif /* MENSCH_HPP_ */