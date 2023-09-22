#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodExecutionContextInfo g_methodExecutionContextInfos[1] = { { 0, 0, 0 } };
#else
static const Il2CppMethodExecutionContextInfo g_methodExecutionContextInfos[1] = { { 0, 0, 0 } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const char* g_methodExecutionContextInfoStrings[1] = { NULL };
#else
static const char* g_methodExecutionContextInfoStrings[1] = { NULL };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodExecutionContextInfoIndex g_methodExecutionContextInfoIndexes[15] = 
{
	{ 0, 0 } /* 0x06000001 System.Void UnityEngine.AI.NavMeshPath::.ctor() */,
	{ 0, 0 } /* 0x06000002 System.Void UnityEngine.AI.NavMeshPath::Finalize() */,
	{ 0, 0 } /* 0x06000003 System.IntPtr UnityEngine.AI.NavMeshPath::InitializeNavMeshPath() */,
	{ 0, 0 } /* 0x06000004 System.Void UnityEngine.AI.NavMeshPath::DestroyNavMeshPath(System.IntPtr) */,
	{ 0, 0 } /* 0x06000005 UnityEngine.Vector3[] UnityEngine.AI.NavMeshPath::CalculateCornersInternal() */,
	{ 0, 0 } /* 0x06000006 System.Void UnityEngine.AI.NavMeshPath::ClearCornersInternal() */,
	{ 0, 0 } /* 0x06000007 System.Void UnityEngine.AI.NavMeshPath::ClearCorners() */,
	{ 0, 0 } /* 0x06000008 System.Void UnityEngine.AI.NavMeshPath::CalculateCorners() */,
	{ 0, 0 } /* 0x06000009 UnityEngine.Vector3[] UnityEngine.AI.NavMeshPath::get_corners() */,
	{ 0, 0 } /* 0x0600000A System.Void UnityEngine.AI.NavMesh::Internal_CallOnNavMeshPreUpdate() */,
	{ 0, 0 } /* 0x0600000B System.Boolean UnityEngine.AI.NavMesh::CalculatePath(UnityEngine.Vector3,UnityEngine.Vector3,System.Int32,UnityEngine.AI.NavMeshPath) */,
	{ 0, 0 } /* 0x0600000C System.Boolean UnityEngine.AI.NavMesh::CalculatePathInternal(UnityEngine.Vector3,UnityEngine.Vector3,System.Int32,UnityEngine.AI.NavMeshPath) */,
	{ 0, 0 } /* 0x0600000D System.Boolean UnityEngine.AI.NavMesh::CalculatePathInternal_Injected(UnityEngine.Vector3&,UnityEngine.Vector3&,System.Int32,UnityEngine.AI.NavMeshPath) */,
	{ 0, 0 } /* 0x0600000E System.Void UnityEngine.AI.NavMesh/OnNavMeshPreUpdate::.ctor(System.Object,System.IntPtr) */,
	{ 0, 0 } /* 0x0600000F System.Void UnityEngine.AI.NavMesh/OnNavMeshPreUpdate::Invoke() */,
};
#else
static const Il2CppMethodExecutionContextInfoIndex g_methodExecutionContextInfoIndexes[1] = { { 0, 0} };
#endif
#if IL2CPP_MONO_DEBUGGER
IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnityEngine_AIModule[];
Il2CppSequencePoint g_sequencePointsUnityEngine_AIModule[56] = 
{
	{ 40191, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 0 } /* seqPointIndex: 0 */,
	{ 40191, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 1 } /* seqPointIndex: 1 */,
	{ 40191, 1, 27, 27, 9, 29, 0, kSequencePointKind_Normal, 0, 2 } /* seqPointIndex: 2 */,
	{ 40191, 1, 27, 27, 9, 29, 1, kSequencePointKind_StepOut, 0, 3 } /* seqPointIndex: 3 */,
	{ 40191, 1, 28, 28, 9, 10, 7, kSequencePointKind_Normal, 0, 4 } /* seqPointIndex: 4 */,
	{ 40191, 1, 29, 29, 13, 45, 8, kSequencePointKind_Normal, 0, 5 } /* seqPointIndex: 5 */,
	{ 40191, 1, 29, 29, 13, 45, 9, kSequencePointKind_StepOut, 0, 6 } /* seqPointIndex: 6 */,
	{ 40191, 1, 30, 30, 9, 10, 19, kSequencePointKind_Normal, 0, 7 } /* seqPointIndex: 7 */,
	{ 40192, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 8 } /* seqPointIndex: 8 */,
	{ 40192, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 9 } /* seqPointIndex: 9 */,
	{ 40192, 1, 33, 33, 9, 10, 0, kSequencePointKind_Normal, 0, 10 } /* seqPointIndex: 10 */,
	{ 40192, 1, 33, 33, 9, 10, 1, kSequencePointKind_Normal, 0, 11 } /* seqPointIndex: 11 */,
	{ 40192, 1, 34, 34, 13, 39, 2, kSequencePointKind_Normal, 0, 12 } /* seqPointIndex: 12 */,
	{ 40192, 1, 34, 34, 13, 39, 8, kSequencePointKind_StepOut, 0, 13 } /* seqPointIndex: 13 */,
	{ 40192, 1, 35, 35, 13, 33, 14, kSequencePointKind_Normal, 0, 14 } /* seqPointIndex: 14 */,
	{ 40192, 1, 36, 36, 9, 10, 27, kSequencePointKind_Normal, 0, 15 } /* seqPointIndex: 15 */,
	{ 40192, 1, 36, 36, 9, 10, 28, kSequencePointKind_StepOut, 0, 16 } /* seqPointIndex: 16 */,
	{ 40192, 1, 36, 36, 9, 10, 35, kSequencePointKind_Normal, 0, 17 } /* seqPointIndex: 17 */,
	{ 40197, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 18 } /* seqPointIndex: 18 */,
	{ 40197, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 19 } /* seqPointIndex: 19 */,
	{ 40197, 1, 55, 55, 9, 10, 0, kSequencePointKind_Normal, 0, 20 } /* seqPointIndex: 20 */,
	{ 40197, 1, 56, 56, 13, 36, 1, kSequencePointKind_Normal, 0, 21 } /* seqPointIndex: 21 */,
	{ 40197, 1, 56, 56, 13, 36, 2, kSequencePointKind_StepOut, 0, 22 } /* seqPointIndex: 22 */,
	{ 40197, 1, 57, 57, 13, 30, 8, kSequencePointKind_Normal, 0, 23 } /* seqPointIndex: 23 */,
	{ 40197, 1, 58, 58, 9, 10, 15, kSequencePointKind_Normal, 0, 24 } /* seqPointIndex: 24 */,
	{ 40198, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 25 } /* seqPointIndex: 25 */,
	{ 40198, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 26 } /* seqPointIndex: 26 */,
	{ 40198, 1, 61, 61, 9, 10, 0, kSequencePointKind_Normal, 0, 27 } /* seqPointIndex: 27 */,
	{ 40198, 1, 62, 62, 13, 35, 1, kSequencePointKind_Normal, 0, 28 } /* seqPointIndex: 28 */,
	{ 40198, 1, 62, 62, 0, 0, 11, kSequencePointKind_Normal, 0, 29 } /* seqPointIndex: 29 */,
	{ 40198, 1, 63, 63, 17, 56, 14, kSequencePointKind_Normal, 0, 30 } /* seqPointIndex: 30 */,
	{ 40198, 1, 63, 63, 17, 56, 16, kSequencePointKind_StepOut, 0, 31 } /* seqPointIndex: 31 */,
	{ 40198, 1, 64, 64, 9, 10, 26, kSequencePointKind_Normal, 0, 32 } /* seqPointIndex: 32 */,
	{ 40199, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 33 } /* seqPointIndex: 33 */,
	{ 40199, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 34 } /* seqPointIndex: 34 */,
	{ 40199, 1, 67, 67, 40, 41, 0, kSequencePointKind_Normal, 0, 35 } /* seqPointIndex: 35 */,
	{ 40199, 1, 67, 67, 42, 61, 1, kSequencePointKind_Normal, 0, 36 } /* seqPointIndex: 36 */,
	{ 40199, 1, 67, 67, 42, 61, 2, kSequencePointKind_StepOut, 0, 37 } /* seqPointIndex: 37 */,
	{ 40199, 1, 67, 67, 62, 79, 8, kSequencePointKind_Normal, 0, 38 } /* seqPointIndex: 38 */,
	{ 40199, 1, 67, 67, 80, 81, 17, kSequencePointKind_Normal, 0, 39 } /* seqPointIndex: 39 */,
	{ 40200, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 40 } /* seqPointIndex: 40 */,
	{ 40200, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 41 } /* seqPointIndex: 41 */,
	{ 40200, 2, 191, 191, 9, 10, 0, kSequencePointKind_Normal, 0, 42 } /* seqPointIndex: 42 */,
	{ 40200, 2, 192, 192, 13, 37, 1, kSequencePointKind_Normal, 0, 43 } /* seqPointIndex: 43 */,
	{ 40200, 2, 192, 192, 0, 0, 10, kSequencePointKind_Normal, 0, 44 } /* seqPointIndex: 44 */,
	{ 40200, 2, 193, 193, 17, 31, 13, kSequencePointKind_Normal, 0, 45 } /* seqPointIndex: 45 */,
	{ 40200, 2, 193, 193, 17, 31, 18, kSequencePointKind_StepOut, 0, 46 } /* seqPointIndex: 46 */,
	{ 40200, 2, 194, 194, 9, 10, 24, kSequencePointKind_Normal, 0, 47 } /* seqPointIndex: 47 */,
	{ 40201, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 48 } /* seqPointIndex: 48 */,
	{ 40201, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 49 } /* seqPointIndex: 49 */,
	{ 40201, 2, 201, 201, 9, 10, 0, kSequencePointKind_Normal, 0, 50 } /* seqPointIndex: 50 */,
	{ 40201, 2, 202, 202, 13, 33, 1, kSequencePointKind_Normal, 0, 51 } /* seqPointIndex: 51 */,
	{ 40201, 2, 202, 202, 13, 33, 2, kSequencePointKind_StepOut, 0, 52 } /* seqPointIndex: 52 */,
	{ 40201, 2, 203, 203, 13, 90, 8, kSequencePointKind_Normal, 0, 53 } /* seqPointIndex: 53 */,
	{ 40201, 2, 203, 203, 13, 90, 12, kSequencePointKind_StepOut, 0, 54 } /* seqPointIndex: 54 */,
	{ 40201, 2, 204, 204, 9, 10, 20, kSequencePointKind_Normal, 0, 55 } /* seqPointIndex: 55 */,
};
#else
extern Il2CppSequencePoint g_sequencePointsUnityEngine_AIModule[];
Il2CppSequencePoint g_sequencePointsUnityEngine_AIModule[1] = { { 0, 0, 0, 0, 0, 0, 0, kSequencePointKind_Normal, 0, 0, } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppCatchPoint g_catchPoints[1] = { { 0, 0, 0, 0, } };
#else
static const Il2CppCatchPoint g_catchPoints[1] = { { 0, 0, 0, 0, } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppSequencePointSourceFile g_sequencePointSourceFiles[] = {
{ "", { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }, //0 
{ "\\home\\bokken\\build\\output\\unity\\unity\\Modules\\AI\\NavMeshPath.bindings.cs", { 66, 3, 88, 21, 124, 161, 11, 83, 53, 109, 148, 35, 162, 15, 29, 231} }, //1 
{ "\\home\\bokken\\build\\output\\unity\\unity\\Modules\\AI\\NavMesh\\NavMesh.bindings.cs", { 78, 134, 30, 187, 108, 93, 113, 40, 31, 206, 197, 55, 133, 43, 114, 169} }, //2 
};
#else
static const Il2CppSequencePointSourceFile g_sequencePointSourceFiles[1] = { NULL, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppTypeSourceFilePair g_typeSourceFiles[2] = 
{
	{ 5638, 1 },
	{ 5641, 2 },
};
#else
static const Il2CppTypeSourceFilePair g_typeSourceFiles[1] = { { 0, 0 } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodScope g_methodScopes[4] = 
{
	{ 0, 27 },
	{ 0, 19 },
	{ 0, 25 },
	{ 0, 22 },
};
#else
static const Il2CppMethodScope g_methodScopes[1] = { { 0, 0 } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodHeaderInfo g_methodHeaderInfos[15] = 
{
	{ 0, 0, 0 } /* System.Void UnityEngine.AI.NavMeshPath::.ctor() */,
	{ 0, 0, 0 } /* System.Void UnityEngine.AI.NavMeshPath::Finalize() */,
	{ 0, 0, 0 } /* System.IntPtr UnityEngine.AI.NavMeshPath::InitializeNavMeshPath() */,
	{ 0, 0, 0 } /* System.Void UnityEngine.AI.NavMeshPath::DestroyNavMeshPath(System.IntPtr) */,
	{ 0, 0, 0 } /* UnityEngine.Vector3[] UnityEngine.AI.NavMeshPath::CalculateCornersInternal() */,
	{ 0, 0, 0 } /* System.Void UnityEngine.AI.NavMeshPath::ClearCornersInternal() */,
	{ 0, 0, 0 } /* System.Void UnityEngine.AI.NavMeshPath::ClearCorners() */,
	{ 27, 0, 1 } /* System.Void UnityEngine.AI.NavMeshPath::CalculateCorners() */,
	{ 19, 1, 1 } /* UnityEngine.Vector3[] UnityEngine.AI.NavMeshPath::get_corners() */,
	{ 25, 2, 1 } /* System.Void UnityEngine.AI.NavMesh::Internal_CallOnNavMeshPreUpdate() */,
	{ 22, 3, 1 } /* System.Boolean UnityEngine.AI.NavMesh::CalculatePath(UnityEngine.Vector3,UnityEngine.Vector3,System.Int32,UnityEngine.AI.NavMeshPath) */,
	{ 0, 0, 0 } /* System.Boolean UnityEngine.AI.NavMesh::CalculatePathInternal(UnityEngine.Vector3,UnityEngine.Vector3,System.Int32,UnityEngine.AI.NavMeshPath) */,
	{ 0, 0, 0 } /* System.Boolean UnityEngine.AI.NavMesh::CalculatePathInternal_Injected(UnityEngine.Vector3&,UnityEngine.Vector3&,System.Int32,UnityEngine.AI.NavMeshPath) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.AI.NavMesh/OnNavMeshPreUpdate::.ctor(System.Object,System.IntPtr) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.AI.NavMesh/OnNavMeshPreUpdate::Invoke() */,
};
#else
static const Il2CppMethodHeaderInfo g_methodHeaderInfos[1] = { { 0, 0, 0 } };
#endif
IL2CPP_EXTERN_C const Il2CppDebuggerMetadataRegistration g_DebuggerMetadataRegistrationUnityEngine_AIModule;
const Il2CppDebuggerMetadataRegistration g_DebuggerMetadataRegistrationUnityEngine_AIModule = 
{
	(Il2CppMethodExecutionContextInfo*)g_methodExecutionContextInfos,
	(Il2CppMethodExecutionContextInfoIndex*)g_methodExecutionContextInfoIndexes,
	(Il2CppMethodScope*)g_methodScopes,
	(Il2CppMethodHeaderInfo*)g_methodHeaderInfos,
	(Il2CppSequencePointSourceFile*)g_sequencePointSourceFiles,
	56,
	(Il2CppSequencePoint*)g_sequencePointsUnityEngine_AIModule,
	0,
	(Il2CppCatchPoint*)g_catchPoints,
	2,
	(Il2CppTypeSourceFilePair*)g_typeSourceFiles,
	(const char**)g_methodExecutionContextInfoStrings,
};
