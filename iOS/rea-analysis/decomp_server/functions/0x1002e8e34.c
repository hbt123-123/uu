// rea decompile_all
// name: FUN_1002e8e34
// address: 0x1002e8e34
// body: available
// range: 0x1002e8e34-0x1002e9177 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1002e8e34(undefined8 param_1,long *param_2)

{
  char cVar1;
  code *pcVar2;
  long lVar3;
  char *pcVar4;
  ulong uVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined8 uVar7;
  ulong uVar8;
  char *pcVar9;
  char *pcVar10;
  long *plVar11;
  long lVar12;
  char acStack_90 [8];
  undefined8 local_88;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  lVar3 = 0;
  FUN_1002c76a8();
  pcVar9 = acStack_90 + -(*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  __s8Dispatch0A9PredicateOMa();
  lVar12 = *(long *)(lVar3 + -8);
  pcVar10 = pcVar9 + -(*(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0);
  *(undefined8 *)pcVar10 = *(undefined8 *)(unaff_x20 + 0x20);
  (**(code **)(lVar12 + 0x68))
            (pcVar10,*(undefined4 *)
                      PTR___s8Dispatch0A9PredicateO7onQueueyACSo17OS_dispatch_queueCcACmFWC_100995f80
             ,lVar3);
  pcVar4 = pcVar10;
  __s8Dispatch25_dispatchPreconditionTestySbAA0A9PredicateOF();
  (**(code **)(lVar12 + 8))(pcVar10,lVar3);
  if (((ulong)pcVar4 & 1) == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1002e9170);
    (*pcVar2)();
  }
  FUN_1002c9c60(param_1);
  plVar11 = *(long **)((long)param_2 + _TtC9Alamofire7Request::mutableState);
  uVar7 = *(undefined8 *)(plVar11[2] + 0x10);
  _os_unfair_lock_lock(uVar7);
  lVar3 = *(long *)(*plVar11 + 0x60);
  _swift_beginAccess((long)plVar11 + lVar3,auStack_68,0,0);
  FUN_100082394((long)plVar11 + lVar3,pcVar9,FUN_1002c76a8);
  cVar1 = *pcVar9;
  FUN_1000d27dc(pcVar9,FUN_1002c76a8);
  _os_unfair_lock_unlock(uVar7);
  if (cVar1 != '\x03') {
    (**(code **)(*param_2 + 0x2c0))(param_1,*(undefined8 *)(unaff_x20 + 0x10));
    lVar3 = *(long *)(unaff_x20 + 0xd0);
    uVar7 = *(undefined8 *)(*(long *)(lVar3 + 0x10) + 0x10);
    _os_unfair_lock_lock(uVar7);
    _swift_beginAccess(lVar3 + 0x18,auStack_80,0x21,0);
    uVar8 = *(ulong *)(lVar3 + 0x20);
    if ((uVar8 & 0xc000000000000001) == 0) {
      _swift_retain_n(param_2,2);
    }
    else {
      uVar5 = uVar8 & 0xffffffffffffff8;
      if ((long)uVar8 < 0) {
        uVar5 = uVar8;
      }
      _swift_retain_n(param_2,2);
      uVar8 = uVar5;
      __ss17__CocoaDictionaryV5countSivg();
      if (SCARRY8(uVar8,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1002e9174);
        (*pcVar2)();
      }
      FUN_1002ecba4(uVar5,uVar8 + 1);
      *(ulong *)(lVar3 + 0x20) = uVar5;
      uVar8 = uVar5;
    }
    _swift_isUniquelyReferenced_nonNull_native();
    local_88 = *(undefined8 *)(lVar3 + 0x20);
    FUN_1002ed0a0(param_1,param_2,uVar8);
    *(undefined8 *)(lVar3 + 0x20) = local_88;
    _swift_release(param_2);
    uVar8 = *(ulong *)(lVar3 + 0x18);
    if ((uVar8 & 0xc000000000000001) == 0) {
      _swift_retain(param_2);
    }
    else {
      uVar5 = uVar8 & 0xffffffffffffff8;
      if ((long)uVar8 < 0) {
        uVar5 = uVar8;
      }
      _swift_retain(param_2);
      uVar8 = uVar5;
      __ss17__CocoaDictionaryV5countSivg();
      if (SCARRY8(uVar8,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1002e9178);
        (*pcVar2)();
      }
      FUN_1002ec96c(uVar5,uVar8 + 1);
      *(ulong *)(lVar3 + 0x18) = uVar5;
      uVar8 = uVar5;
    }
    _swift_isUniquelyReferenced_nonNull_native();
    local_88 = *(undefined8 *)(lVar3 + 0x18);
    FUN_1002ecf54(param_2,param_1,uVar8);
    *(undefined8 *)(lVar3 + 0x18) = local_88;
    uVar6 = *(undefined8 *)(lVar3 + 0x28);
    _swift_isUniquelyReferenced_nonNull_native(uVar6);
    local_88 = *(undefined8 *)(lVar3 + 0x28);
    *(undefined8 *)(lVar3 + 0x28) = 0x8000000000000000;
    FUN_1002ece30(0,param_1,uVar6);
    _swift_release(param_2);
    *(undefined8 *)(lVar3 + 0x28) = local_88;
    _swift_endAccess(auStack_80);
    _os_unfair_lock_unlock(uVar7);
    (**(code **)(*param_2 + 0x230))(param_1);
  }
  return;
}

