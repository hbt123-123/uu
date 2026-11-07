// rea decompile_all
// name: FUN_1002feff8
// address: 0x1002feff8
// body: available
// range: 0x1002feff8-0x1002ff367 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1002feff8(code *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  code *pcVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  ulong auStack_a0 [4];
  code *pcStack_80;
  undefined1 auStack_78 [24];
  
  lVar1 = 0;
  auStack_a0[3] = param_2;
  pcStack_80 = param_1;
  FUN_1002c76a8();
  lVar6 = -(*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = (long)auStack_a0 + lVar6;
  puVar2 = &DAT_100a82c30;
  auStack_a0[2] = lVar1;
  FUN_100004bb4(&DAT_100a82c30,&DAT_1008171f0);
  lVar14 = lVar10 - (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar1 = 0;
  FUN_10030da10();
  lVar11 = lVar14 - (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  plVar9 = *(long **)(param_3 + _TtC9Alamofire7Request::mutableState);
  uVar8 = *(undefined8 *)(plVar9[2] + 0x10);
  auStack_a0[1] = lVar1;
  _os_unfair_lock_lock(uVar8);
  lVar12 = *(long *)(*plVar9 + 0x60);
  _swift_beginAccess((long)plVar9 + lVar12,auStack_78,0,0);
  FUN_100082394((long)plVar9 + lVar12,lVar10,FUN_1002c76a8);
  lVar16 = *(long *)(&stack0x000000a8 + lVar6);
  _swift_bridgeObjectRetain(lVar16);
  FUN_1000d27dc(lVar10,FUN_1002c76a8);
  _os_unfair_lock_unlock(uVar8);
  lVar1 = *(long *)(lVar16 + 0x10);
  if (lVar1 == 0) {
    _swift_bridgeObjectRelease(lVar16);
    lVar3 = 0;
    __s10Foundation10URLRequestVMa();
    pcVar7 = *(code **)(*(long *)(lVar3 + -8) + 0x38);
  }
  else {
    lVar3 = 0;
    __s10Foundation10URLRequestVMa();
    lVar13 = *(long *)(lVar3 + -8);
    (**(code **)(lVar13 + 0x10))
              (lVar14,lVar16 + ((ulong)*(byte *)(lVar13 + 0x50) + 0x20 &
                               ((ulong)*(byte *)(lVar13 + 0x50) ^ 0xffffffffffffffff)) +
                      *(long *)(lVar13 + 0x48) * (lVar1 + -1),lVar3);
    _swift_bridgeObjectRelease(lVar16);
    pcVar7 = *(code **)(lVar13 + 0x38);
  }
  lVar16 = lVar14;
  (*pcVar7)(lVar14,lVar1 == 0,1,lVar3);
  FUN_1002c85ec();
  uVar8 = *(undefined8 *)(plVar9[2] + 0x10);
  _os_unfair_lock_lock(uVar8);
  FUN_100082394((long)plVar9 + lVar12,lVar10,FUN_1002c76a8);
  uVar15 = *(ulong *)(&stack0x000000b8 + lVar6);
  _swift_bridgeObjectRetain(uVar15);
  FUN_1000d27dc(lVar10,FUN_1002c76a8);
  _os_unfair_lock_unlock(uVar8);
  if (uVar15 >> 0x3e == 0) {
    uVar4 = *(ulong *)((uVar15 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar4 = uVar15 & 0xffffffffffffff8;
    if ((long)uVar15 < 0) {
      uVar4 = uVar15;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  if (uVar4 == 0) {
    _swift_bridgeObjectRelease(uVar15);
    uVar5 = 0;
  }
  else {
    uVar5 = uVar4 - 1;
    if (SBORROW8(uVar4,1)) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x1002ff354);
      (*pcVar7)();
    }
    if ((uVar15 & 0xc000000000000001) == 0) {
      if ((long)uVar5 < 0) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x1002ff364);
        (*pcVar7)();
      }
      if (*(ulong *)((uVar15 & 0xffffffffffffff8) + 0x10) <= uVar5) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x1002ff368);
        (*pcVar7)();
      }
      uVar5 = *(ulong *)(uVar15 + uVar5 * 8 + 0x20);
    }
    else {
      FUN_1002d392c(uVar5,uVar15);
    }
    _swift_bridgeObjectRelease(uVar15);
  }
  uVar8 = *(undefined8 *)(plVar9[2] + 0x10);
  _os_unfair_lock_lock(uVar8);
  FUN_100082394((long)plVar9 + lVar12,lVar10,FUN_1002c76a8);
  lVar6 = 0;
  FUN_100300610();
  FUN_10007f314(lVar10 + *(int *)(auStack_a0[2] + 0x5c),lVar11 + *(int *)(lVar6 + 0x1c),
                &DAT_100a82460,&DAT_1008175c0);
  FUN_1000d27dc(lVar10,FUN_1002c76a8);
  _os_unfair_lock_unlock(uVar8);
  FUN_1000a00a8(lVar14,lVar11,&DAT_100a82c30,&DAT_1008171f0);
  *(long *)(lVar11 + *(int *)(lVar6 + 0x14)) = lVar16;
  *(ulong *)(lVar11 + *(int *)(lVar6 + 0x18)) = uVar5;
  _swift_storeEnumTagMultiPayload(lVar11,auStack_a0[1],3);
  (*pcStack_80)(lVar11);
  FUN_1000d27dc(lVar11,FUN_10030da10);
  return;
}

