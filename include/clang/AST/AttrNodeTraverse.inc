/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Attribute text node traverser                                              *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

  void VisitAcquireCapabilityAttr(const AcquireCapabilityAttr *A) {
    const auto *SA = cast<AcquireCapabilityAttr>(A); (void)SA;
    for (AcquireCapabilityAttr::args_iterator I = SA->args_begin(), E = SA->args_end(); I != E; ++I)
      dumpStmt(*I);
  }
  void VisitAcquiredAfterAttr(const AcquiredAfterAttr *A) {
    const auto *SA = cast<AcquiredAfterAttr>(A); (void)SA;
    for (AcquiredAfterAttr::args_iterator I = SA->args_begin(), E = SA->args_end(); I != E; ++I)
      dumpStmt(*I);
  }
  void VisitAcquiredBeforeAttr(const AcquiredBeforeAttr *A) {
    const auto *SA = cast<AcquiredBeforeAttr>(A); (void)SA;
    for (AcquiredBeforeAttr::args_iterator I = SA->args_begin(), E = SA->args_end(); I != E; ++I)
      dumpStmt(*I);
  }
  void VisitAlignValueAttr(const AlignValueAttr *A) {
    const auto *SA = cast<AlignValueAttr>(A); (void)SA;
    dumpStmt(SA->getAlignment());
  }
  void VisitAlignedAttr(const AlignedAttr *A) {
    const auto *SA = cast<AlignedAttr>(A); (void)SA;
    if (SA->isAlignmentExpr())
      dumpStmt(SA->getAlignmentExpr());
  }
  void VisitAssertCapabilityAttr(const AssertCapabilityAttr *A) {
    const auto *SA = cast<AssertCapabilityAttr>(A); (void)SA;
    for (AssertCapabilityAttr::args_iterator I = SA->args_begin(), E = SA->args_end(); I != E; ++I)
      dumpStmt(*I);
  }
  void VisitAssertExclusiveLockAttr(const AssertExclusiveLockAttr *A) {
    const auto *SA = cast<AssertExclusiveLockAttr>(A); (void)SA;
    for (AssertExclusiveLockAttr::args_iterator I = SA->args_begin(), E = SA->args_end(); I != E; ++I)
      dumpStmt(*I);
  }
  void VisitAssertSharedLockAttr(const AssertSharedLockAttr *A) {
    const auto *SA = cast<AssertSharedLockAttr>(A); (void)SA;
    for (AssertSharedLockAttr::args_iterator I = SA->args_begin(), E = SA->args_end(); I != E; ++I)
      dumpStmt(*I);
  }
  void VisitAssumeAlignedAttr(const AssumeAlignedAttr *A) {
    const auto *SA = cast<AssumeAlignedAttr>(A); (void)SA;
    dumpStmt(SA->getAlignment());
    dumpStmt(SA->getOffset());
  }
  void VisitCUDALaunchBoundsAttr(const CUDALaunchBoundsAttr *A) {
    const auto *SA = cast<CUDALaunchBoundsAttr>(A); (void)SA;
    dumpStmt(SA->getMaxThreads());
    dumpStmt(SA->getMinBlocks());
  }
  void VisitDiagnoseIfAttr(const DiagnoseIfAttr *A) {
    const auto *SA = cast<DiagnoseIfAttr>(A); (void)SA;
    dumpStmt(SA->getCond());
  }
  void VisitEnableIfAttr(const EnableIfAttr *A) {
    const auto *SA = cast<EnableIfAttr>(A); (void)SA;
    dumpStmt(SA->getCond());
  }
  void VisitExclusiveTrylockFunctionAttr(const ExclusiveTrylockFunctionAttr *A) {
    const auto *SA = cast<ExclusiveTrylockFunctionAttr>(A); (void)SA;
    dumpStmt(SA->getSuccessValue());
    for (ExclusiveTrylockFunctionAttr::args_iterator I = SA->args_begin(), E = SA->args_end(); I != E; ++I)
      dumpStmt(*I);
  }
  void VisitGuardedByAttr(const GuardedByAttr *A) {
    const auto *SA = cast<GuardedByAttr>(A); (void)SA;
    dumpStmt(SA->getArg());
  }
  void VisitLockReturnedAttr(const LockReturnedAttr *A) {
    const auto *SA = cast<LockReturnedAttr>(A); (void)SA;
    dumpStmt(SA->getArg());
  }
  void VisitLocksExcludedAttr(const LocksExcludedAttr *A) {
    const auto *SA = cast<LocksExcludedAttr>(A); (void)SA;
    for (LocksExcludedAttr::args_iterator I = SA->args_begin(), E = SA->args_end(); I != E; ++I)
      dumpStmt(*I);
  }
  void VisitLoopHintAttr(const LoopHintAttr *A) {
    const auto *SA = cast<LoopHintAttr>(A); (void)SA;
    dumpStmt(SA->getValue());
  }
  void VisitOMPDeclareSimdDeclAttr(const OMPDeclareSimdDeclAttr *A) {
    const auto *SA = cast<OMPDeclareSimdDeclAttr>(A); (void)SA;
    dumpStmt(SA->getSimdlen());
    for (OMPDeclareSimdDeclAttr::uniforms_iterator I = SA->uniforms_begin(), E = SA->uniforms_end(); I != E; ++I)
      dumpStmt(*I);
    for (OMPDeclareSimdDeclAttr::aligneds_iterator I = SA->aligneds_begin(), E = SA->aligneds_end(); I != E; ++I)
      dumpStmt(*I);
    for (OMPDeclareSimdDeclAttr::alignments_iterator I = SA->alignments_begin(), E = SA->alignments_end(); I != E; ++I)
      dumpStmt(*I);
    for (OMPDeclareSimdDeclAttr::linears_iterator I = SA->linears_begin(), E = SA->linears_end(); I != E; ++I)
      dumpStmt(*I);
    for (OMPDeclareSimdDeclAttr::steps_iterator I = SA->steps_begin(), E = SA->steps_end(); I != E; ++I)
      dumpStmt(*I);
  }
  void VisitOMPReferencedVarAttr(const OMPReferencedVarAttr *A) {
    const auto *SA = cast<OMPReferencedVarAttr>(A); (void)SA;
    dumpStmt(SA->getRef());
  }
  void VisitPtGuardedByAttr(const PtGuardedByAttr *A) {
    const auto *SA = cast<PtGuardedByAttr>(A); (void)SA;
    dumpStmt(SA->getArg());
  }
  void VisitReleaseCapabilityAttr(const ReleaseCapabilityAttr *A) {
    const auto *SA = cast<ReleaseCapabilityAttr>(A); (void)SA;
    for (ReleaseCapabilityAttr::args_iterator I = SA->args_begin(), E = SA->args_end(); I != E; ++I)
      dumpStmt(*I);
  }
  void VisitRequiresCapabilityAttr(const RequiresCapabilityAttr *A) {
    const auto *SA = cast<RequiresCapabilityAttr>(A); (void)SA;
    for (RequiresCapabilityAttr::args_iterator I = SA->args_begin(), E = SA->args_end(); I != E; ++I)
      dumpStmt(*I);
  }
  void VisitSharedTrylockFunctionAttr(const SharedTrylockFunctionAttr *A) {
    const auto *SA = cast<SharedTrylockFunctionAttr>(A); (void)SA;
    dumpStmt(SA->getSuccessValue());
    for (SharedTrylockFunctionAttr::args_iterator I = SA->args_begin(), E = SA->args_end(); I != E; ++I)
      dumpStmt(*I);
  }
  void VisitTryAcquireCapabilityAttr(const TryAcquireCapabilityAttr *A) {
    const auto *SA = cast<TryAcquireCapabilityAttr>(A); (void)SA;
    dumpStmt(SA->getSuccessValue());
    for (TryAcquireCapabilityAttr::args_iterator I = SA->args_begin(), E = SA->args_end(); I != E; ++I)
      dumpStmt(*I);
  }
