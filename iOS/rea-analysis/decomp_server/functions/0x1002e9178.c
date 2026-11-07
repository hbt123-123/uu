// rea decompile_all
// name: FUN_1002e9178
// address: 0x1002e9178
// body: available
// range: 0x1002e9178-0x1002e94df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1002e9178(undefined8 param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  code *pcVar2;
  long lVar3;
  char *pcVar4;
  ulong uVar5;
  undefined8 uVar6;
  long unaff_x20;
  char *pcVar7;
  ID IVar8;
  ulong uVar9;
  undefined8 uVar10;
  char *pcVar11;
  long *plVar12;
  long lVar13;
  char acStack_a0 [8];
  undefined8 local_98;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar3 = 0;
  FUN_1002c76a8();
  pcVar7 = acStack_a0 + -(*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  __s8Dispatch0A9PredicateOMa();
  lVar13 = *(long *)(lVar3 + -8);
  pcVar11 = pcVar7 + -(*(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0);
  *(undefined8 *)pcVar11 = *(undefined8 *)(unaff_x20 + 0x20);
  (**(code **)(lVar13 + 0x68))
            (pcVar11,*(undefined4 *)
                      PTR___s8Dispatch0A9PredicateO7onQueueyACSo17OS_dispatch_queueCcACmFWC_100995f80
             ,lVar3);
  pcVar4 = pcVar11;
  __s8Dispatch25_dispatchPreconditionTestySbAA0A9PredicateOF();
  (**(code **)(lVar13 + 8))(pcVar11,lVar3);
  if (((ulong)pcVar4 & 1) == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1002e94d8);
    (*pcVar2)();
  }
  plVar12 = *(long **)(param_3 + _TtC9Alamofire7Request::mutableState);
  uVar10 = *(undefined8 *)(plVar12[2] + 0x10);
  _os_unfair_lock_lock(uVar10);
  lVar3 = *(long *)(*plVar12 + 0x60);
  _swift_beginAccess((long)plVar12 + lVar3,auStack_78,0,0);
  FUN_100082394((long)plVar12 + lVar3,pcVar7,FUN_1002c76a8);
  cVar1 = *pcVar7;
  FUN_1000d27dc(pcVar7,FUN_1002c76a8);
  _os_unfair_lock_unlock(uVar10);
  if (cVar1 != '\x03') {
    IVar8 = *(ID *)(unaff_x20 + 0x10);
    __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(param_1,param_2);
    IVar8 = _objc_msgSend(IVar8,"downloadTaskWithResumeData:",param_1);
    lVar3 = *(long *)(unaff_x20 + 0xd0);
    uVar10 = *(undefined8 *)(*(long *)(lVar3 + 0x10) + 0x10);
    _os_unfair_lock_lock(uVar10);
    _swift_beginAccess(lVar3 + 0x18,auStack_90,0x21,0);
    uVar9 = *(ulong *)(lVar3 + 0x20);
    if ((uVar9 & 0xc000000000000001) == 0) {
      _swift_retain_n(param_3,2);
    }
    else {
      uVar5 = uVar9 & 0xffffffffffffff8;
      if ((long)uVar9 < 0) {
        uVar5 = uVar9;
      }
      _swift_retain_n(param_3,2);
      uVar9 = uVar5;
      __ss17__CocoaDictionaryV5countSivg();
      if (SCARRY8(uVar9,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1002e94dc);
        (*pcVar2)();
      }
      FUN_1002ecba4(uVar5,uVar9 + 1);
      *(ulong *)(lVar3 + 0x20) = uVar5;
      uVar9 = uVar5;
    }
    _swift_isUniquelyReferenced_nonNull_native();
    local_98 = *(undefined8 *)(lVar3 + 0x20);
    FUN_1002ed0a0(IVar8,param_3,uVar9);
    *(undefined8 *)(lVar3 + 0x20) = local_98;
    _swift_release(param_3);
    uVar9 = *(ulong *)(lVar3 + 0x18);
    if ((uVar9 & 0xc000000000000001) == 0) {
      _swift_retain(param_3);
    }
    else {
      uVar5 = uVar9 & 0xffffffffffffff8;
      if ((long)uVar9 < 0) {
        uVar5 = uVar9;
      }
      _swift_retain(param_3);
      uVar9 = uVar5;
      __ss17__CocoaDictionaryV5countSivg();
      if (SCARRY8(uVar9,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1002e94e0);
        (*pcVar2)();
      }
      FUN_1002ec96c(uVar5,uVar9 + 1);
      *(ulong *)(lVar3 + 0x18) = uVar5;
      uVar9 = uVar5;
    }
    _swift_isUniquelyReferenced_nonNull_native();
    local_98 = *(undefined8 *)(lVar3 + 0x18);
    FUN_1002ecf54(param_3,IVar8,uVar9);
    *(undefined8 *)(lVar3 + 0x18) = local_98;
    uVar6 = *(undefined8 *)(lVar3 + 0x28);
    _swift_isUniquelyReferenced_nonNull_native(uVar6);
    local_98 = *(undefined8 *)(lVar3 + 0x28);
    *(undefined8 *)(lVar3 + 0x28) = 0x8000000000000000;
    FUN_1002ece30(0,IVar8,uVar6);
    _swift_release(param_3);
    *(undefined8 *)(lVar3 + 0x28) = local_98;
    _swift_endAccess(auStack_90);
    _os_unfair_lock_unlock(uVar10);
    FUN_1002c9ef0(IVar8);
  }
  return;
}

