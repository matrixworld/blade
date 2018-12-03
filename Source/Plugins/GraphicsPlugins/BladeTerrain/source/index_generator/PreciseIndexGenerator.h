/********************************************************************
	created:	2013/10/13
	filename: 	PreciseIndexGenerator.h
	author:		Crazii
	purpose:	
*********************************************************************/
#ifndef __Blade_PreciseIndexGenerator_h__
#define __Blade_PreciseIndexGenerator_h__
#include <utility/BladeContainer.h>
#include "../terrain_interface/ITerrainTile.h"
#include "../TerrainConfigManager.h"


namespace Blade
{
	class PreciseIndexGenerator : public IIndexGenerator, public Allocatable
	{
	public:
		PreciseIndexGenerator()		{}
		~PreciseIndexGenerator()	{}

		/*
		@describe 
		@param 
		@return 
		*/
		virtual indexdiff_t	compareLOD(index_t neighborLOD, index_t selfLOD)
		{
			return indexdiff_t(neighborLOD - selfLOD);
		}
		
		/*
		@describe 
		@param 
		@return 
		*/
		virtual TerrainIndexGroup*	createTileIndexBuffer();

		/*
		@describe create software index buffer for space query
		@param 
		@return
		@note this kind of index buffer is not arranged in simple order ( not z in row, x in col),\n
		it is arranged by minimal quad trees, so that each quad tree's index buffer is consecutive
		*/
		virtual TerrainQueryIndexGroup*	createBlockQueryIndexBuffer();

		/**
		@describe
		@param
		@return
		*/
		virtual TerrainFixedIndexGroup*	createFixedIndexBuffer();

		/*
		@describe 
		@param 
		@return 
		*/
		virtual size_t				getLODMaxIndexCount(index_t LOD) const
		{
			assert( LOD < mMaxIndexCount.size() );
			return mMaxIndexCount[LOD];
		}

		/*
		@describe 
		@param 
		@return 
		*/
		virtual int16				getLowLODHeight(const int16* tileHeightaMap, size_t& LOD,
			index_t blockX, index_t blockZ, index_t x, index_t z) const;

	protected:


		struct SQueryIndexData
		{
			index_t	LODLevel;
			uint32	RowStride;
			uint32	ColStride;
			uint32	RowCount;
			uint32	ColCount;
			LODDiff	Diff;
			LOD_DI	DiffIndex;
			IndexBufferHelper&	IndexBuffer;
			mutable size_t				IndexCount;

			SQueryIndexData(IndexBufferHelper& ib) :IndexBuffer(ib){}
		private:
			SQueryIndexData& operator=(const SQueryIndexData&);
		};

		//recursive method
#if BLADE_DEBUG && DEBUG_DEPTH
		void	buildQueryIndex(size_t depth,size_t x,size_t z,size_t size, QueryIndexQuad* quad,const SQueryIndexData& data);
#else
		void	buildQueryIndex(size_t x,size_t z,size_t size, QueryIndexQuad* quad,const SQueryIndexData& data);
#endif

		static inline bool	isLeftValid(FixedLODDiff diff) { return diff.l == 0 || diff.l == 1; }
		static inline bool isUpValid(FixedLODDiff diff) { return diff.t == 0 || diff.t == 1; }
		static inline bool	isRightValid(FixedLODDiff diff) { return diff.r == 0 || diff.r == 1; }
		static inline bool isDownValid(FixedLODDiff diff) { return diff.b == 0 || diff.b == 1; }

	protected:
		typedef Vector<size_t> LODMaxIndexCount;
		LODMaxIndexCount	mMaxIndexCount;
	};
	
}//namespace Blade

#endif //  __Blade_PreciseIndexGenerator_h__