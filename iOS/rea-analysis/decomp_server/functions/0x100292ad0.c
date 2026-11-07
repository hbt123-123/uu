// rea decompile_all
// name: FUN_100292ad0
// address: 0x100292ad0
// body: available
// range: 0x100292ad0-0x100292ebf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Removing unreachable block (ram,0x000100292e80) */

void FUN_100292ad0(long param_1,code *param_2,undefined8 param_3,long param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  code *pcVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  ulong auStack_e0 [4];
  long local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  code *pcStack_a0;
  long local_98;
  undefined8 uStack_90;
  long local_88;
  undefined1 auStack_78 [24];
  
  local_b8 = param_6;
  uStack_b0 = param_7;
  local_a8 = param_3;
  pcStack_a0 = param_2;
  local_98 = param_4;
  uStack_90 = param_5;
  FUN_100004bb4(param_4,param_5);
  lVar12 = (long)auStack_e0 -
           (*(long *)(*(long *)(param_4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  local_c0 = param_4;
  FUN_1002c76a8();
  lVar11 = lVar12 - (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = &DAT_100a82c30;
  auStack_e0[3] = lVar2;
  FUN_100004bb4(&DAT_100a82c30,&DAT_1008171f0);
  lVar8 = lVar11 - (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  FUN_10029642c();
  lVar17 = lVar8 - (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  plVar13 = *(long **)(param_1 + _TtC9Alamofire7Request::mutableState);
  uVar15 = *(undefined8 *)(plVar13[2] + 0x10);
  auStack_e0[1] = lVar2;
  local_88 = param_1;
  _os_unfair_lock_lock(uVar15);
  lVar14 = *(long *)(*plVar13 + 0x60);
  _swift_beginAccess((long)plVar13 + lVar14,auStack_78,0,0);
  FUN_100082394((long)plVar13 + lVar14,lVar11,FUN_1002c76a8);
  lVar9 = *(long *)(lVar11 + 0x148);
  _swift_bridgeObjectRetain(lVar9);
  FUN_1000d27dc(lVar11,FUN_1002c76a8);
  _os_unfair_lock_unlock(uVar15);
  lVar2 = *(long *)(lVar9 + 0x10);
  auStack_e0[2] = lVar8;
  if (lVar2 == 0) {
    _swift_bridgeObjectRelease(lVar9);
    lVar4 = 0;
    __s10Foundation10URLRequestVMa();
    pcVar7 = *(code **)(*(long *)(lVar4 + -8) + 0x38);
  }
  else {
    lVar4 = 0;
    __s10Foundation10URLRequestVMa();
    lVar16 = *(long *)(lVar4 + -8);
    (**(code **)(lVar16 + 0x10))
              (lVar8,lVar9 + ((ulong)*(byte *)(lVar16 + 0x50) + 0x20 &
                             ((ulong)*(byte *)(lVar16 + 0x50) ^ 0xffffffffffffffff)) +
                     *(long *)(lVar16 + 0x48) * (lVar2 + -1),lVar4);
    _swift_bridgeObjectRelease(lVar9);
    pcVar7 = *(code **)(lVar16 + 0x38);
  }
  (*pcVar7)(lVar8,lVar2 == 0,1,lVar4);
  FUN_1002c85ec();
  uVar15 = *(undefined8 *)(plVar13[2] + 0x10);
  _os_unfair_lock_lock(uVar15);
  FUN_100082394((long)plVar13 + lVar14,lVar11,FUN_1002c76a8);
  uVar10 = *(ulong *)(lVar11 + 0x158);
  _swift_bridgeObjectRetain(uVar10);
  FUN_1000d27dc(lVar11,FUN_1002c76a8);
  _os_unfair_lock_unlock(uVar15);
  if (uVar10 >> 0x3e == 0) {
    uVar5 = *(ulong *)((uVar10 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar5 = uVar10 & 0xffffffffffffff8;
    if ((long)uVar10 < 0) {
      uVar5 = uVar10;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  if (uVar5 == 0) {
    _swift_bridgeObjectRelease(uVar10);
    uVar6 = 0;
  }
  else {
    uVar6 = uVar5 - 1;
    if (SBORROW8(uVar5,1)) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x100292eac);
      (*pcVar7)();
    }
    if ((uVar10 & 0xc000000000000001) == 0) {
      if ((long)uVar6 < 0) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x100292ebc);
        (*pcVar7)();
      }
      if (*(ulong *)((uVar10 & 0xffffffffffffff8) + 0x10) <= uVar6) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x100292ec0);
        (*pcVar7)();
      }
      uVar6 = *(ulong *)(uVar10 + uVar6 * 8 + 0x20);
    }
    else {
      FUN_1002d392c(uVar6,uVar10);
    }
    _swift_bridgeObjectRelease(uVar10);
  }
  uVar15 = *(undefined8 *)(plVar13[2] + 0x10);
  _os_unfair_lock_lock(uVar15);
  FUN_100082394((long)plVar13 + lVar14,lVar11,FUN_1002c76a8);
  uVar10 = auStack_e0[1];
  FUN_10007f314(lVar11 + *(int *)(auStack_e0[3] + 0x5c),lVar17 + *(int *)(auStack_e0[1] + 0x1c),
                &DAT_100a82460,&DAT_1008175c0);
  FUN_1000d27dc(lVar11,FUN_1002c76a8);
  _os_unfair_lock_unlock(uVar15);
  FUN_1002a5dbc(auStack_e0[2],lVar17);
  *(long *)(lVar17 + *(int *)(uVar10 + 0x14)) = lVar8;
  *(ulong *)(lVar17 + *(int *)(uVar10 + 0x18)) = uVar6;
  FUN_100082394(lVar17,lVar12,FUN_10029642c);
  uVar15 = local_b8;
  FUN_100004bb4(local_b8,uStack_b0);
  _swift_storeEnumTagMultiPayload(lVar12,uVar15,1);
  iVar1 = *(int *)(local_c0 + 0x2c);
  _swift_weakInit(lVar12 + iVar1,0);
  _swift_weakAssign(lVar12 + iVar1,local_88);
  (*pcStack_a0)(lVar12);
  FUN_100040bb4(lVar12,local_98,uStack_90);
  FUN_1000d27dc(lVar17,FUN_10029642c);
  return;
}

