############################################################################
# CMakeLists.txt file for building ROOT core/cont package
############################################################################

set(Cont_dict_headers
  ROOT/TSeq.hxx
  TArrayC.h
  TArrayD.h
  TArrayF.h
  TArray.h
  TArrayI.h
  TArrayL64.h
  TArrayL.h
  TArrayS.h
  TBits.h
  TBtree.h
  TClassTable.h
  TClonesArray.h
  TCollection.h
  TCollectionProxyInfo.h
  TExMap.h
  THashList.h
  THashTable.h
  TIterator.h
  TList.h
  TMap.h
  TObjArray.h
  TObjectTable.h
  TOrdCollection.h
  TRefArray.h
  TRefTable.h
  TSeqCollection.h
  TSortedList.h
  TVirtualCollectionProxy.h
  PARENT_SCOPE
)

ROOT_OBJECT_LIBRARY(Cont
  src/TArrayC.cxx
  src/TArray.cxx
  src/TArrayD.cxx
  src/TArrayF.cxx
  src/TArrayI.cxx
  src/TArrayL64.cxx
  src/TArrayL.cxx
  src/TArrayS.cxx
  src/TBits.cxx
  src/TBtree.cxx
  src/TClassTable.cxx
  src/TClonesArray.cxx
  src/TCollection.cxx
  src/TExMap.cxx
  src/THashList.cxx
  src/THashTable.cxx
  src/TIterator.cxx
  src/TList.cxx
  src/TMap.cxx
  src/TObjArray.cxx
  src/TObjectTable.cxx
  src/TOrdCollection.cxx
  src/TRefArray.cxx
  src/TRefTable.cxx
  src/TSeqCollection.cxx
  src/TSortedList.cxx
)

target_include_directories(Cont PRIVATE res ../foundation/res)

ROOT_INSTALL_HEADERS()

ROOT_ADD_TEST_SUBDIRECTORY(test)
