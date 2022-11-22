#ifndef ITER_HPP
#define ITER_HPP

template <typename T>
void	iter(T *parameter1, int MaxIterations, void (*function)(T const &)) {
	for (int indexOfTemplate = 0; indexOfTemplate < MaxIterations; indexOfTemplate++)
		function(parameter1[indexOfTemplate]);
}

#endif //ITER_HPP
