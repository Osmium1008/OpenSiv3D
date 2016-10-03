﻿//-----------------------------------------------
//
//	This file is part of the Siv3D Engine.
//
//	Copyright (C) 2008-2016 Ryo Suzuki
//	Copyright (C) 2016 OpenSiv3D Project
//
//	Licensed under the MIT License.
//
//-----------------------------------------------

# pragma once
# include "Distribution.hpp"
# include "DefaultRNG.hpp"

namespace s3d
{
	/// <summary>
	/// [0.0-1.0] の範囲の乱数を返します。
	/// </summary>
	/// <remarks>
	/// グローバルな乱数エンジンを使用します。
	/// </remarks>
	/// <returns>
	/// [0.0-1.0] の範囲の乱数
	/// </returns>
	inline double Random()
	{
		return GetDefaultRNG()() / static_cast<double>(0xffFFffFFu);
	}

	/// <summary>
	/// 指定した型と範囲の乱数を返します。
	/// </summary>
	/// <param name="min">
	/// 生成したい乱数の最小値
	/// </param>
	/// <param name="max">
	/// 生成したい乱数の最大値
	/// </param>
	/// <remarks>
	/// グローバルな乱数エンジンを使用します。
	/// </remarks>
	/// <returns>
	/// 指定した型と範囲の乱数
	/// </returns>
	template <class Type>
	inline Type Random(Type min, Type max)
	{
		return UniformDistribution<Type>(min, max)(GetDefaultRNG());
	}

	/// <summary>
	/// 0 から、指定した範囲までの乱数を返します。
	/// </summary>
	/// <param name="max">
	/// 生成したい乱数の最大値
	/// </param>
	/// <remarks>
	/// グローバルな乱数エンジンを使用します。
	/// </remarks>
	/// <returns>
	/// 0 以上 max 以下の乱数
	/// </returns>
	template <class Type>
	inline Type Random(Type max)
	{
		return Random<Type>(0, max);
	}

	/// <summary>
	/// 指定した型と範囲の乱数を返します。
	/// </summary>
	/// <param name="min">
	/// 生成したい乱数の最小値
	/// </param>
	/// <param name="max">
	/// 生成したい乱数の最大値
	/// </param>
	/// <remarks>
	/// グローバルな乱数エンジンを使用します。
	/// </remarks>
	/// <returns>
	/// 指定した型と範囲の乱数
	/// </returns>
	template <>
	inline wchar Random<wchar>(wchar min, wchar max)
	{
		return static_cast<wchar>(UniformDistribution<uint32>(min, max)(GetDefaultRNG()));
	}

	/// <summary>
	/// 2 値の乱数を返します。
	/// </summary>
	/// <param name="p">
	/// true を返す確率 [0.0, 1.0]
	/// </param>
	/// <remarks>
	/// グローバルな乱数エンジンを使用します。
	/// </remarks>
	/// <returns>
	/// 確率 p でtrue, 確率 (1-p) で false
	/// </returns>
	inline bool RandomBool(double p = 0.5)
	{
		return std::bernoulli_distribution(p)(GetDefaultRNG());
	}

	/// <summary>
	/// リストの中からランダムに値を選択します。
	/// </summary>
	/// <param name="ilist">
	/// 値のリスト
	/// </param>
	/// <remarks>
	/// グローバルな乱数エンジンを使用します。
	/// </remarks>
	/// <returns>
	/// リストの中からランダムに選択された値
	/// </returns>
	template <class Iterator>
	inline auto RandomSelect(Iterator begin, Iterator end)
	{
		assert(begin != end);
		std::advance(begin, Random(std::distance(begin, end) - 1));
		return *begin;
	}

	template <class Range>
	inline auto RandomSelect(Range&& range)
	{
		return RandomSelect(std::begin(std::forward<Range>(range)), std::end(std::forward<Range>(range)));
	}

	template <class Type>
	inline Type RandomSelect(std::initializer_list<Type> ilist)
	{
		return RandomSelect(std::begin(ilist), std::end(ilist));
	}

	/// <summary>
	/// コンテナの中身をシャッフルします。
	/// </summary>
	/// <param name="c">
	/// コンテナ
	/// </param>
	/// <returns>
	/// なし
	/// </returns>
	template <class Container>
	inline void Shuffle(Container& c)
	{
		std::shuffle(c.begin(), c.end(), GetDefaultRNG());
	}

	/// <summary>
	/// 指定した範囲の値をシャッフルします。
	/// </summary>
	/// <param name="first">
	/// 範囲の開始位置
	/// </param>
	/// <param name="last">
	/// 範囲の終了位置
	/// </param>
	/// <returns>
	/// なし
	/// </returns>
	template <class RandomIt>
	inline void Shuffle(RandomIt first, RandomIt last)
	{
		std::shuffle(first, last, GetDefaultRNG());
	}
}