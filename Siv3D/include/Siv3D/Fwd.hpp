﻿//-----------------------------------------------
//
//	This file is part of the Siv3D Engine.
//
//	Copyright (c) 2008-2019 Ryo Suzuki
//	Copyright (c) 2016-2019 OpenSiv3D Project
//
//	Licensed under the MIT License.
//
//-----------------------------------------------

# pragma once
# include <cstddef>
# include "Platform.hpp"
# include "Types.hpp"

namespace s3d
{
	//////////////////////////////////////////////////////
	//
	//	PlaceHolder.hpp
	//
	struct PlaceHolder_t;

	//////////////////////////////////////////////////////
	//
	//	Uncopyable.hpp
	//
	class Uncopyable;

	//////////////////////////////////////////////////////
	//
	//	NamedParameter.hpp
	//
	template <class Tag, class Type> class NamedParameter;
	template <class Tag> struct NamedParameterHelper;

	//////////////////////////////////////////////////////
	//
	//	Meta.hpp
	//
	struct Nonesuch;

	//////////////////////////////////////////////////////
	//
	//	Byte.hpp
	//
	enum class Byte : unsigned char;

	//////////////////////////////////////////////////////
	//
	//	ByteArrayViewAdapter.hpp
	//
	class ByteArrayViewAdapter;

	//////////////////////////////////////////////////////
	//
	//	ByteArrayView.hpp
	//
	class ByteArrayView;

	//////////////////////////////////////////////////////
	//
	//	ConcurrentTask.hpp
	//
	template <class Type> class ConcurrentTask;

	//////////////////////////////////////////////////////
	//
	//	AlignedMemory.hpp
	//
	template <class Type> struct AlignedDeleter;

	//////////////////////////////////////////////////////
	//
	//	AlignedAllocator.hpp
	//
	template <class Type, size_t Alignment> class AlignedAllocator;
	template <class Type> struct DefaultAllocator;

	//////////////////////////////////////////////////////
	//
	//	Array.hpp
	//
	template <class Type, class Allocator> class Array;

	//////////////////////////////////////////////////////
	//
	//	Grid.hpp
	//
	template <class Type, class Allocator> class Grid;

	//////////////////////////////////////////////////////
	//
	//	KDTree.hpp
	//
	template <class DatasetAdapter> class KDTree;
	template <class Dataset, class Point, class Element, int32 Dim> struct KDTreeAdapter;

	//////////////////////////////////////////////////////
	//
	//	Step.hpp
	//
	template <class T, class N, class S> class Step;

	//////////////////////////////////////////////////////
	//
	//	Step2D.hpp
	//
	class Step2D;

	//////////////////////////////////////////////////////
	//
	//	InfiniteList.hpp
	//
	template <class Type> class InfiniteList;

	//////////////////////////////////////////////////////
	//
	//	Optional.hpp
	//
	struct None_t;
	template <class Type> class Optional;

	//////////////////////////////////////////////////////
	//
	//	Hash.hpp
	//
	template <class Type> struct FNV1aHash;
	template <class Type> struct Murmur2Hash;

	//////////////////////////////////////////////////////
	//
	//	RangeIterator.hpp
	//
	template <class Iterator> class RangeIterator;

	//////////////////////////////////////////////////////
	//
	//	ScopeGuard.hpp
	//
	template<typename Callback> class ScopeGuard;

	//////////////////////////////////////////////////////
	//
	//	Error.hpp
	//
	class Error;
	class ParseError;

	//////////////////////////////////////////////////////
	//
	//	StringView.hpp
	//
	class StringView;
	using FilePathView = StringView;

	//////////////////////////////////////////////////////
	//
	//	String.hpp
	//
	class String;
	using FilePath = String;
	
	//////////////////////////////////////////////////////
	//
	//	Unicode.hpp
	//
	struct Translator_UTF8toUTF32;
	struct Translator_UTF16toUTF32;
	struct Translator_UTF32toUTF8;
	struct Translator_UTF32toUTF16;

	//////////////////////////////////////////////////////
	//
	//	LetterCase.hpp
	//
	enum class LetterCase;

	//////////////////////////////////////////////////////
	//
	//	BigInt.hpp
	//
	class BigInt;

	//////////////////////////////////////////////////////
	//
	//	BigFloat.hpp
	//
	class BigFloat;

	//////////////////////////////////////////////////////
	//
	//	Format.hpp
	//
	struct FormatData;

	//////////////////////////////////////////////////////
	//
	//	EmojiDictionary.hpp
	//
	class EmojiDictionary;

	//////////////////////////////////////////////////////
	//
	//	DayOfWeek.hpp
	//
	enum class DayOfWeek;

	//////////////////////////////////////////////////////
	//
	//	Date.hpp
	//
	struct Date;

	//////////////////////////////////////////////////////
	//
	//	DateTime.hpp
	//
	struct DateTime;

	//////////////////////////////////////////////////////
	//
	//	Stopwatch.hpp
	//
	class Stopwatch;

	//////////////////////////////////////////////////////
	//
	//	CustomStopwatch.hpp
	//
	class CustomStopwatch;

	//////////////////////////////////////////////////////
	//
	//	Timer.hpp
	//
	class Timer;

	//////////////////////////////////////////////////////
	//
	//	TimeProfiler.hpp
	//
	class TimeProfiler;

	//////////////////////////////////////////////////////
	//
	//	MillisecClock.hpp
	//
	class MillisecClock;

	//////////////////////////////////////////////////////
	//
	//	MicrosecClock.hpp
	//
	class MicrosecClock;

	//////////////////////////////////////////////////////
	//
	//	RDTSCClock.hpp
	//
	class RDTSCClock;

	//////////////////////////////////////////////////////
	//
	//	FileSystem.hpp
	//
	enum class OpenMode;
	enum class CopyOption;
	enum class SpecialFolder;

	//////////////////////////////////////////////////////
	//
	//	DirectoryWatcher.hpp
	//
	enum class FileAction;
	class DirectoryWatcher;

	//////////////////////////////////////////////////////
	//
	//	IReader.hpp
	//
	class IReader;

	//////////////////////////////////////////////////////
	//
	//	IWriter.hpp
	//
	class IWriter;

	//////////////////////////////////////////////////////
	//
	//	ReaderView.hpp
	//
	class ReaderView;

	//////////////////////////////////////////////////////
	//
	//	MemoryMapping.hpp
	//
	class MemoryMapping;

	//////////////////////////////////////////////////////
	//
	//	WritableMemoryMapping.hpp
	//
	enum class MMFOpenMode_if_Exists;
	enum class MMFOpenMode_if_NotFound;
	class WritableMemoryMapping;

	//////////////////////////////////////////////////////
	//
	//	ByteArray.hpp
	//
	class ByteArray;

	//////////////////////////////////////////////////////
	//
	//	MemoryWriter.hpp
	//
	class MemoryWriter;

	//////////////////////////////////////////////////////
	//
	//	BinaryReader.hpp
	//
	class BinaryReader;

	//////////////////////////////////////////////////////
	//
	//	BinaryWriter.hpp
	//
	class BinaryWriter;

	//////////////////////////////////////////////////////
	//
	//	TextEncoding.hpp
	//
	enum class TextEncoding;

	//////////////////////////////////////////////////////
	//
	//	TextReader.hpp
	//
	class TextReader;

	//////////////////////////////////////////////////////
	//
	//	TextWriter.hpp
	//
	class TextWriter;

	//////////////////////////////////////////////////////
	//
	//	MD5.hpp
	//
	struct MD5Value;

	//////////////////////////////////////////////////////
	//
	//	LicenseManager.hpp
	//
	struct LicenseInfo;

	//////////////////////////////////////////////////////
	//
	//	Logger.hpp
	//
	enum class OutputLevel;
	enum class LogDescription;

	//////////////////////////////////////////////////////
	//
	//	CSVData.hpp
	//
	class CSVData;

	//////////////////////////////////////////////////////
	//
	//	INIData.hpp
	//
	class INIData;

	//////////////////////////////////////////////////////
	//
	//	XMLReader.hpp
	//
	struct XMLElementDetail;
	class XMLElement;
	class XMLReader;

	//////////////////////////////////////////////////////
	//
	//	JSONReader.hpp
	//
	enum class JSONValueType;
	class JSONArrayIterator;
	class JSONObjectIterator;
	class JSONArrayView;
	class JSONObjectView;
	class JSONValue;
	struct JSONObjectMember;
	class JSONReader;

	//////////////////////////////////////////////////////
	//
	//	TOMLReader.hpp
	//
	enum class TOMLValueType;
	class TOMLTableIterator;
	class TOMLTableView;
	class TOMLArrayIterator;
	class TOMLArrayView;
	class TOMLTableArrayIterator;
	class TOMLTableArrayView;
	class TOMLValue;
	struct TOMLTableMember;
	class TOMLReader;

	//////////////////////////////////////////////////////
	//
	//	HTMLWriter.hpp
	//
	class HTMLWriter;

	//////////////////////////////////////////////////////
	//
	//	Color.hpp
	//
	struct Color;
	struct ColorF;

	//////////////////////////////////////////////////////
	//
	//	HSV.hpp
	//
	struct HSV;

	//////////////////////////////////////////////////////
	//
	//	PointVector.hpp
	//
	struct Point;
	using Size = Point;
	template <class Type> struct Vector2D;
	template <class Type> struct Vector3D;
	template <class Type> struct Vector4D;
	using Float2	= Vector2D<float>;
	using Vec2		= Vector2D<double>;
	using SizeF		= Vec2;
	using Float3	= Vector3D<float>;
	using Vec3		= Vector3D<double>;
	using Float4	= Vector4D<float>;
	using Vec4		= Vector4D<double>;

	//////////////////////////////////////////////////////
	//
	//	Circular.hpp
	//
	template <int32 Oclock> struct CircularBase;
	using Circular  = CircularBase<0>;
	using Circular0 = CircularBase<0>;
	using Circular3 = CircularBase<3>;
	using Circular6 = CircularBase<6>;
	using Circular9 = CircularBase<9>;
		
	//////////////////////////////////////////////////////
	//
	//	OffsetCircular.hpp
	//
	template <int32 Oclock> struct OffsetCircularBase;
	using OffsetCircular  = OffsetCircularBase<0>;
	using OffsetCircular0 = OffsetCircularBase<0>;
	using OffsetCircular3 = OffsetCircularBase<3>;
	using OffsetCircular6 = OffsetCircularBase<6>;
	using OffsetCircular9 = OffsetCircularBase<9>;

	//////////////////////////////////////////////////////
	//
	//	Cylindrical.hpp
	//
	struct Cylindrical;

	//////////////////////////////////////////////////////
	//
	//	Spherical.hpp
	//
	struct Spherical;

	//////////////////////////////////////////////////////
	//
	//	Mat3x2.hpp
	//
	struct Mat3x2;

	//////////////////////////////////////////////////////
	//
	//	Line.hpp
	//
	struct LineStyle;
	struct Line;

	//////////////////////////////////////////////////////
	//
	//	Rectangle.hpp
	//
	template <class SizeType> struct Rectangle;
	using Rect = Rectangle<Point>;
	using RectF = Rectangle<Vec2>;

	//////////////////////////////////////////////////////
	//
	//	Circle.hpp
	//
	struct Circle;

	//////////////////////////////////////////////////////
	//
	//	Ellipse.hpp
	//
	struct Ellipse;

	//////////////////////////////////////////////////////
	//
	//	Triangle.hpp
	//
	struct Triangle;

	//////////////////////////////////////////////////////
	//
	//	Quad.hpp
	//
	struct Quad;

	//////////////////////////////////////////////////////
	//
	//	RoundRect.hpp
	//
	struct RoundRect;

	//////////////////////////////////////////////////////
	//
	//	LineString.hpp
	//
	class LineString;

	//////////////////////////////////////////////////////
	//
	//	Polygon.hpp
	//
	class Polygon;

	//////////////////////////////////////////////////////
	//
	//	MultiPolygon.hpp
	//
	class MultiPolygon;

	//////////////////////////////////////////////////////
	//
	//	Bezier2.hpp
	//
	struct Bezier2;
	struct Bezier2Path;

	//////////////////////////////////////////////////////
	//
	//	Bezier3.hpp
	//
	struct Bezier3;
	struct Bezier3Path;

	//////////////////////////////////////////////////////
	//
	//	FloatRect.hpp
	//
	struct FloatRect;

	//////////////////////////////////////////////////////
	//
	//	FloatQuad.hpp
	//
	struct FloatQuad;

	//////////////////////////////////////////////////////
	//
	//	Shape2D.hpp
	//
	class Shape2D;

	//////////////////////////////////////////////////////
	//
	//	Distribution.hpp
	//
	template <class Type> class UniformDistribution;
	template <class Type> class NormalDistribution;
	class DiscreteDistribution;

	//////////////////////////////////////////////////////
	//
	//	HardwareRNG.hpp
	//
	class HardwareRNG;

	//////////////////////////////////////////////////////
	//
	//	SFMT.hpp
	//
	class SFMT19937_64;

	//////////////////////////////////////////////////////
	//
	//	MersenneTwister.hpp
	//
	class MT11213b;
	class MT19937;
	class MT19937_64;

	//////////////////////////////////////////////////////
	//
	//	RNG.hpp
	//
	class SplitMix64;
	class Xoroshiro128Plus;
	class Xoshiro256StarStar;

	//////////////////////////////////////////////////////
	//
	//	DefaultRNG.hpp
	//
	using DefaultRNGType = SFMT19937_64;

	//////////////////////////////////////////////////////
	//
	//	EasingController.hpp
	//
	template <class Type> class EasingController;

	//////////////////////////////////////////////////////
	//
	//	Transition.hpp
	//
	class Transition;

	//////////////////////////////////////////////////////
	//
	//	PerlinNoise.hpp
	//
	class PerlinNoise;

	//////////////////////////////////////////////////////
	//
	//	NoiseGenerator.hpp
	//
	enum class NoiseType;
	enum class FractalType;
	enum class CellularDistanceFunction;
	enum class CellularReturnType;
	enum class PerturbType;
	class NoiseGenerator;

	//////////////////////////////////////////////////////
	//
	//	HalfFloat.hpp
	//
	struct HalfFloat;

	//////////////////////////////////////////////////////
	//
	//	MathParser.hpp
	//
	class MathParser;

	//////////////////////////////////////////////////////
	//
	//	Image.hpp
	//
	enum class AdaptiveMethod;
	enum class BorderType;
	enum class FloodFillConnectivity;
	enum class Interpolation;
	enum class HaarCascade;
	class Image;

	//////////////////////////////////////////////////////
	//
	//	ImageRegion.hpp
	//
	class ImageRegion;

	//////////////////////////////////////////////////////
	//
	//	ImageFormat.hpp
	//
	enum class ImageFormat;
	enum class PPMType;
	enum class WebPMethod;
	class IImageFormat;

	//////////////////////////////////////////////////////
	//
	//	ImageProcessing.hpp
	//
	enum class EdgePreservingFilterType;

	//////////////////////////////////////////////////////
	//
	//	TextureFormat.hpp
	//
	enum class TextureFormat;
	struct TextureFormatProperty;

	//////////////////////////////////////////////////////
	//
	//	Exif.hpp
	//
	struct Exif;

	//////////////////////////////////////////////////////
	//
	//	QRCode.hpp
	//
	enum class QRErrorCorrection;
	enum class QRMode;
	struct QRCode;
	struct QRContent;
	class QRDecoder;

	//////////////////////////////////////////////////////
	//
	//	WaveSample.hpp
	//
	struct WaveSampleS16;
	struct WaveSample;

	//////////////////////////////////////////////////////
	//
	//	AudioFormat.hpp
	//
	enum class AudioFormat;
	enum class WAVEFormat;
	class IAudioFormat;

	//////////////////////////////////////////////////////
	//
	//	Wave.hpp
	//
	class Wave;

	//////////////////////////////////////////////////////
	//
	//	SoundFont.hpp
	//
	enum PianoKey : uint8;
	enum class GMInstrument : uint8;

	//////////////////////////////////////////////////////
	//
	//	FFT.hpp
	//
	enum class FFTSampleLength;
	struct FFTResult;

	//////////////////////////////////////////////////////
	//
	//	AnimatedGIFWriter.hpp
	//
	class AnimatedGIFWriter;

	//////////////////////////////////////////////////////
	//
	//	VideoWriter.hpp
	//
	class VideoWriter;

	//////////////////////////////////////////////////////
	//
	//	IPv4.hpp
	//
	union IPv4;

	//////////////////////////////////////////////////////
	//
	//	Network.hpp
	//
	enum class NetworkError;

	//////////////////////////////////////////////////////
	//
	//	TCPServer.hpp
	//
	class TCPServer;

	//////////////////////////////////////////////////////
	//
	//	TCPClient.hpp
	//
	class TCPClient;

	//////////////////////////////////////////////////////
	//
	//	CPU.hpp
	//
	enum class CPUVendor;
	struct CPUFeature;

	//////////////////////////////////////////////////////
	//
	//	Monitor.hpp
	//
	struct Monitor;

	//////////////////////////////////////////////////////
	//
	//	Window.hpp
	//
	enum class WindowStyle;
	enum class WindowResizeOption;
	struct WindowState;

	//////////////////////////////////////////////////////
	//
	//	MessageBox.hpp
	//
	enum class MessageBoxStyle;
	enum class MessageBoxButtons;
	enum class MessageBoxSelection;

	//////////////////////////////////////////////////////
	//
	//	DragDrop.hpp
	//
	enum class DragItemType;
	struct DragStatus;
	struct DroppedFilePath;
	struct DroppedText;

	//////////////////////////////////////////////////////
	//
	//	FileFilter.hpp
	//
	struct FileFilter;

	//////////////////////////////////////////////////////
	//
	//	PowerStatus.hpp
	//
	enum class ACLineStatus;
	enum class BatteryStatus;
	struct PowerStatus;

	//////////////////////////////////////////////////////
	//
	//	Profiler.hpp
	//
	struct Statistics;

	//////////////////////////////////////////////////////
	//
	//	Process.hpp
	//
	enum class Pipe;
	class ChildProcess;

	//////////////////////////////////////////////////////
	//
	//	Cursor.hpp
	//
	enum class CursorStyle;

	//////////////////////////////////////////////////////
	//
	//	Key.hpp
	//
	enum class InputDevice : uint8;
	class Key;

	//////////////////////////////////////////////////////
	//
	//	KeyConjunction.hpp
	//
	class KeyConjunction;

	//////////////////////////////////////////////////////
	//
	//	KeyGroup.hpp
	//
	class KeyGroup;

	//////////////////////////////////////////////////////
	//
	//	TextInput.hpp
	//
	enum class TextInputMode;

	//////////////////////////////////////////////////////
	//
	//	Gamepad.hpp
	//
	struct GamepadInfo;

	//////////////////////////////////////////////////////
	//
	//	DeadZone.hpp
	//
	enum class DeadZoneType;
	struct DeadZone;

	//////////////////////////////////////////////////////
	//
	//	JoyCon.hpp
	//
	class JoyCon;

	//////////////////////////////////////////////////////
	//
	//	ProController.hpp
	//
	class ProController;

	//////////////////////////////////////////////////////
	//
	//	Microphone.hpp
	//
	enum class RecordingFormat;
	class Microphone;

	//////////////////////////////////////////////////////
	//
	//	Audio.hpp
	//
	struct AudioLoopTiming;
	class Audio;

	//////////////////////////////////////////////////////
	//
	//	Scene.hpp
	//
	enum class ScaleMode;

	//////////////////////////////////////////////////////
	//
	//	Vertex2D.hpp
	//
	struct Vertex2D;

	//////////////////////////////////////////////////////
	//
	//	Sprite.hpp
	//
	struct Sprite;

	//////////////////////////////////////////////////////
	//
	//	BlendState.hpp
	//
	enum class Blend : uint8;
	enum class BlendOp : uint8;
	struct BlendState;

	//////////////////////////////////////////////////////
	//
	//	RasterizerState.hpp
	//
	enum class FillMode : uint8;
	enum class CullMode : uint8;
	struct RasterizerState;

	//////////////////////////////////////////////////////
	//
	//	SamplerState.hpp
	//
	enum class TextureFilter : bool;
	enum class TextureAddressMode : uint8;
	struct SamplerState;

	//////////////////////////////////////////////////////
	//
	//	ShaderCommon.hpp
	//
	enum class ShaderStage;
	struct BindingPoint;

	//////////////////////////////////////////////////////
	//
	//	VertexShader.hpp
	//
	class VertexShader;

	//////////////////////////////////////////////////////
	//
	//	PixelShader.hpp
	//
	class PixelShader;

	//////////////////////////////////////////////////////
	//
	//	ConstantBuffer.hpp
	//
	template <class Type> class ConstantBuffer;

	//////////////////////////////////////////////////////
	//
	//	Graphics.hpp
	//
	struct DisplayMode;
	struct DisplayOutput;

	//////////////////////////////////////////////////////
	//
	//	ScopedRenderState2D.hpp
	//
	class ScopedRenderStates2D;

	//////////////////////////////////////////////////////
	//
	//	ScopedViewport2D.hpp
	//
	class ScopedViewport2D;

	//////////////////////////////////////////////////////
	//
	//	ScopedColor2D.hpp
	//
	class ScopedColorMul2D;
	class ScopedColorAdd2D;

	//////////////////////////////////////////////////////
	//
	//	ScopedCustomShader2D.hpp
	//
	class ScopedCustomShader2D;

	//////////////////////////////////////////////////////
	//
	//	ScopedRenderTarget2D.hpp
	//
	class ScopedRenderTarget2D;

	//////////////////////////////////////////////////////
	//
	//	Transformer2D.hpp
	//
	class Transformer2D;

	//////////////////////////////////////////////////////
	//
	//	Camera2D.hpp
	//
	class BasicCamera2D;
	struct Camera2DParameters;
	class Camera2D;

	//////////////////////////////////////////////////////
	//
	//	TextureDesc.hpp
	//
	enum class TextureDesc;

	//////////////////////////////////////////////////////
	//
	//	Texture.hpp
	//
	class Texture;

	//////////////////////////////////////////////////////
	//
	//	TextureRegion.hpp
	//
	struct TextureRegion;

	//////////////////////////////////////////////////////
	//
	//	TexturedCircle.hpp
	//
	struct TexturedCircle;

	//////////////////////////////////////////////////////
	//
	//	TexturedQuad.hpp
	//
	struct TexturedQuad;

	//////////////////////////////////////////////////////
	//
	//	TexturedRoundRect.hpp
	//
	struct TexturedRoundRect;

	//////////////////////////////////////////////////////
	//
	//	DynamicTexture.hpp
	//
	class DynamicTexture;

	//////////////////////////////////////////////////////
	//
	//	RenderTexture.hpp
	//
	class RenderTexture;

	//////////////////////////////////////////////////////
	//
	//	MSRenderTexture.hpp
	//
	class MSRenderTexture;

	//////////////////////////////////////////////////////
	//
	//	OutlineGlyph.hpp
	//
	struct OutlineGlyph;

	//////////////////////////////////////////////////////
	//
	//	Font.hpp
	//
	enum class Typeface;
	enum class FontStyle : uint32;
	struct Glyph;
	class Font;
	class GlyphIterator;
	struct DrawableText;

	//////////////////////////////////////////////////////
	//
	//	Emoji.hpp
	//
	struct Emoji;

	//////////////////////////////////////////////////////
	//
	//	Icon.hpp
	//
	struct Icon;

	//////////////////////////////////////////////////////
	//
	//	SimpleGUI.hpp
	//
	struct TextEditState;

	//////////////////////////////////////////////////////
	//
	//	TextBox.hpp
	//
	class TextBox;

	//////////////////////////////////////////////////////
	//
	//	Effect.hpp
	//
	struct IEffect;
	class Effect;

	//////////////////////////////////////////////////////
	//
	//	Particle2D.hpp
	//
	struct Particle2D;

	//////////////////////////////////////////////////////
	//
	//	Emitter2D.hpp
	//
	struct Emission2D;
	struct IEmitter2D;
	struct CircleEmitter2D;
	struct ArcEmitter2D;
	struct RectEmitter2D;
	struct PolygonEmitter2D;

	//////////////////////////////////////////////////////
	//
	//	ParticleSystem2D.hpp
	//
	struct ParticleSystem2DParameters;
	class ParticleSystem2D;

	//////////////////////////////////////////////////////
	//
	//	Webcam.hpp
	//
	struct WebcamInfo;
	class Webcam;

	//////////////////////////////////////////////////////
	//
	//	Ray.hpp
	//
	struct Ray;

	//////////////////////////////////////////////////////
	//
	//	Sphere.hpp
	//
	struct Sphere;

	//////////////////////////////////////////////////////
	//
	//	NavMesh.hpp
	//
	struct NavMeshConfig;
	class NavMesh;

	//////////////////////////////////////////////////////
	//
	//	AssetHandle.hpp
	//
	template <class Type> class AssetIDWrapper;
	template <class Type> class AssetHandle;

	//////////////////////////////////////////////////////
	//
	//	Asset.hpp
	//
	struct AssetParameter;
	class IAsset;

	//////////////////////////////////////////////////////
	//
	//	AudioAsset.hpp
	//
	struct AudioAssetData;
	class AudioAsset;

	//////////////////////////////////////////////////////
	//
	//	TextureAsset.hpp
	//
	struct TextureAssetData;
	class TextureAsset;

	//////////////////////////////////////////////////////
	//
	//	FontAsset.hpp
	//
	struct FontAssetData;
	class FontAsset;

	//////////////////////////////////////////////////////
	//
	//	Physics2D.hpp
	//
	struct P2Material;
	struct P2Filter;
	enum class P2BodyType;
	enum class P2ShapeType;
	struct P2ContactPair;
	struct P2Contact;
	struct P2Collision;
	class P2World;
	class P2Body;
	struct P2Fixture;
	class P2Shape;
	class P2Line;
	class P2LineString;
	class P2Circle;
	class P2Rect;
	class P2Triangle;
	class P2Quad;
	class P2Polygon;
	class P2PivotJoint;
	class P2DistanceJoint;
	class P2RopeJoint;
	class P2SliderJoint;
	class P2WheelJoint;

	//////////////////////////////////////////////////////
	//
	//	SVM.hpp
	//
	namespace SVM
	{
		template <size_t _Dimensions> struct SupportVector;
		struct SparseSupportVector;
		class Problem;
		class PredictModel;
	}

	//////////////////////////////////////////////////////
	//
	//	NLP_Japanese.hpp
	//
	namespace NLP
	{
		namespace Japanese
		{
			enum class WordClass;
			struct Morpheme;
		}
	}

	//////////////////////////////////////////////////////
	//
	//	Script.hpp
	//
	struct ScriptModuleData;
	template <class Type> struct ScriptFunction;
	class Script;

	//////////////////////////////////////////////////////
	//
	//	ManagedScript.hpp
	//
	class ManagedScript;

	//////////////////////////////////////////////////////
	//
	//	SceneManager.hpp
	//
	template <class State, class Data> class IScene;
	template <class State, class Data> class SceneManager;
}
