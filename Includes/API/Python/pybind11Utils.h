/*************************************************************************
> File Name: pybind11Utils.h
> Project Name: CubbyFlow
> This code is based on Jet Framework that was created by Doyub Kim.
> References: https://github.com/doyubkim/fluid-engine-dev
> Purpose: pybind11 utility functions for CubbyFlow Python API.
> Created Time: 2018/01/19
> Copyright (c) 2018, Chan-Ho Chris Ohk
*************************************************************************/
#ifndef CUBBYFLOW_PYTHON_PYBIND11_UTILS_H
#define CUBBYFLOW_PYTHON_PYBIND11_UTILS_H

#include <Core/Vector/Vector2.h>
#include <Core/Vector/Vector3.h>
#include <Core/Vector/Vector4.h>

#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace CubbyFlow
{
	template <typename T, size_t N>
	inline Vector<T, N> TupleToVector(pybind11::tuple tuple)
	{
		Vector<T, N> ret;

		if (tuple.size() == N)
		{
			for (size_t i = 0; i < N; ++i)
			{
				ret[i] = tuple[i].cast<T>();
			}
		}
		else
		{
			throw std::invalid_argument("Invalid size.");
		}

		return ret;
	}

	template <typename T, size_t N>
	inline Vector<T, N> TupleToVector(pybind11::list list)
	{
		Vector<T, N> ret;

		if (list.size() == N)
		{
			for (size_t i = 0; i < N; ++i)
			{
				ret[i] = list[i].cast<T>();
			}
		}
		else
		{
			throw std::invalid_argument("Invalid size.");
		}

		return ret;
	}

	inline Vector2F TupleToVector2F(pybind11::tuple tuple)
	{
		return TupleToVector<float, 2>(tuple);
	}

	inline Vector2F TupleToVector2F(pybind11::list list)
	{
		return TupleToVector<float, 2>(list);
	}

	inline Vector3F TupleToVector3F(pybind11::tuple tuple)
	{
		return TupleToVector<float, 3>(tuple);
	}

	inline Vector3F TupleToVector3F(pybind11::list list)
	{
		return TupleToVector<float, 3>(list);
	}

	inline Vector4F TupleToVector4F(pybind11::tuple tuple)
	{
		return TupleToVector<float, 4>(tuple);
	}

	inline Vector4F TupleToVector4F(pybind11::list list)
	{
		return TupleToVector<float, 4>(list);
	}

	inline Vector2D TupleToVector2D(pybind11::tuple tuple)
	{
		return TupleToVector<double, 2>(tuple);
	}

	inline Vector2D TupleToVector2D(pybind11::list list)
	{
		return TupleToVector<double, 2>(list);
	}

	inline Vector3D TupleToVector3D(pybind11::tuple tuple)
	{
		return TupleToVector<double, 3>(tuple);
	}

	inline Vector3D TupleToVector3D(pybind11::list list)
	{
		return TupleToVector<double, 3>(list);
	}

	inline Vector4D TupleToVector4D(pybind11::tuple tuple)
	{
		return TupleToVector<double, 4>(tuple);
	}

	inline Vector4D TupleToVector4D(pybind11::list list)
	{
		return TupleToVector<double, 4>(list);
	}

	template <typename T>
	inline pybind11::tuple Vector2ToTuple(const Vector<T, 2>& vec)
	{
		return pybind11::make_tuple(vec.x, vec.y);
	}

	template <typename T>
	inline pybind11::tuple Vector3ToTuple(const Vector<T, 3>& vec)
	{
		return pybind11::make_tuple(vec.x, vec.y, vec.z);
	}

	template <typename T>
	inline pybind11::tuple Vector4ToTuple(const Vector<T, 4>& vec)
	{
		return pybind11::make_tuple(vec.x, vec.y, vec.z, vec.w);
	}

	inline Vector2F ObjectToVector2F(const pybind11::object& obj)
	{
		if (pybind11::isinstance<Vector2F>(static_cast<pybind11::handle>(obj)))
		{
			return obj.cast<Vector2F>();
		}
		
		if (pybind11::isinstance<pybind11::tuple>(static_cast<pybind11::handle>(obj)))
		{
			return TupleToVector2F(pybind11::tuple(obj));
		}
		
		if (pybind11::isinstance<pybind11::list>(static_cast<pybind11::handle>(obj)))
		{
			return TupleToVector2F(pybind11::list(obj));
		}
		
		throw std::invalid_argument("Cannot convert to Vector2F.");
	}

	inline Vector2D ObjectToVector2D(const pybind11::object& obj)
	{
		if (pybind11::isinstance<Vector2D>(static_cast<pybind11::handle>(obj)))
		{
			return obj.cast<Vector2D>();
		}

		if (pybind11::isinstance<pybind11::tuple>(static_cast<pybind11::handle>(obj)))
		{
			return TupleToVector2D(pybind11::tuple(obj));
		}

		if (pybind11::isinstance<pybind11::list>(static_cast<pybind11::handle>(obj)))
		{
			return TupleToVector2D(pybind11::list(obj));
		}
		
		throw std::invalid_argument("Cannot convert to Vector2D.");
	}

	inline Vector3F ObjectToVector3F(const pybind11::object& obj)
	{
		if (pybind11::isinstance<Vector3F>(static_cast<pybind11::handle>(obj)))
		{
			return obj.cast<Vector3F>();
		}

		if (pybind11::isinstance<pybind11::tuple>(static_cast<pybind11::handle>(obj)))
		{
			return TupleToVector3F(pybind11::tuple(obj));
		}

		if (pybind11::isinstance<pybind11::list>(static_cast<pybind11::handle>(obj)))
		{
			return TupleToVector3F(pybind11::list(obj));
		}

		throw std::invalid_argument("Cannot convert to Vector3F.");
	}

	inline Vector3D ObjectToVector3D(const pybind11::object& obj)
	{
		if (pybind11::isinstance<Vector3D>(static_cast<pybind11::handle>(obj)))
		{
			return obj.cast<Vector3D>();
		}

		if (pybind11::isinstance<pybind11::tuple>(static_cast<pybind11::handle>(obj)))
		{
			return TupleToVector3D(pybind11::tuple(obj));
		}

		if (pybind11::isinstance<pybind11::list>(static_cast<pybind11::handle>(obj)))
		{
			return TupleToVector3D(pybind11::list(obj));
		}

		throw std::invalid_argument("Cannot convert to Vector3D.");
	}

	inline Vector4F ObjectToVector4F(const pybind11::object& obj)
	{
		if (pybind11::isinstance<Vector4F>(static_cast<pybind11::handle>(obj)))
		{
			return obj.cast<Vector4F>();
		}

		if (pybind11::isinstance<pybind11::tuple>(static_cast<pybind11::handle>(obj)))
		{
			return TupleToVector4F(pybind11::tuple(obj));
		}

		if (pybind11::isinstance<pybind11::list>(static_cast<pybind11::handle>(obj)))
		{
			return TupleToVector4F(pybind11::list(obj));
		}

		throw std::invalid_argument("Cannot convert to Vector4F.");
	}

	inline Vector4D ObjectToVector4D(const pybind11::object& obj)
	{
		if (pybind11::isinstance<Vector4D>(static_cast<pybind11::handle>(obj)))
		{
			return obj.cast<Vector4D>();
		}

		if (pybind11::isinstance<pybind11::tuple>(static_cast<pybind11::handle>(obj)))
		{
			return TupleToVector4D(pybind11::tuple(obj));
		}

		if (pybind11::isinstance<pybind11::list>(static_cast<pybind11::handle>(obj)))
		{
			return TupleToVector4D(pybind11::list(obj));
		}

		throw std::invalid_argument("Cannot convert to Vector4D.");
	}
}

#endif