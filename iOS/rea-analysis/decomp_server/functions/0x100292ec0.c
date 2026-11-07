// rea decompile_all
// name: FUN_100292ec0
// address: 0x100292ec0
// body: available
// range: 0x100292ec0-0x100293327 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Removing unreachable block (ram,0x0001002932a4) */

void FUN_100292ec0(long param_1,code *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  code *pcVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  ulong auStack_f0 [4];
  long local_d0;
  long local_c8;
  long lStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  code *pcStack_98;
  long local_90;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [24];
  
  lVar1 = 0;
  local_a0 = param_3;
  pcStack_98 = param_2;
  FUN_10028fd24(0,param_4,param_5,param_6);
  lVar7 = (long)auStack_f0 - (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  auStack_f0[2] = lVar1;
  auStack_f0[3] = lVar7;
  local_b8 = param_4;
  uStack_b0 = param_5;
  local_a8 = param_6;
  FUN_10029ca28(0,param_4,param_5,param_6);
  local_c8 = *(long *)(lVar2 + -8);
  lVar7 = lVar7 - (*(long *)(local_c8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar1 = 0;
  local_d0 = lVar7;
  lStack_c0 = lVar2;
  FUN_1002c76a8();
  lVar7 = lVar7 - (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = &DAT_100a82c30;
  auStack_f0[1] = lVar1;
  FUN_100004bb4(&DAT_100a82c30,&DAT_1008171f0);
  lVar16 = lVar7 - (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar1 = 0;
  FUN_10029642c();
  lVar9 = lVar16 - (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  plVar14 = *(long **)(param_1 + _TtC9Alamofire7Request::mutableState);
  uVar12 = *(undefined8 *)(plVar14[2] + 0x10);
  local_90 = param_1;
  _os_unfair_lock_lock(uVar12);
  lVar15 = *(long *)(*plVar14 + 0x60);
  _swift_beginAccess((long)plVar14 + lVar15,auStack_78,0,0);
  FUN_100082394((long)plVar14 + lVar15,lVar7,FUN_1002c76a8);
  lVar11 = *(long *)(lVar7 + 0x148);
  _swift_bridgeObjectRetain(lVar11);
  FUN_1000d27dc(lVar7,FUN_1002c76a8);
  _os_unfair_lock_unlock(uVar12);
  lVar2 = *(long *)(lVar11 + 0x10);
  if (lVar2 == 0) {
    _swift_bridgeObjectRelease(lVar11);
    lVar4 = 0;
    __s10Foundation10URLRequestVMa();
    pcVar8 = *(code **)(*(long *)(lVar4 + -8) + 0x38);
  }
  else {
    lVar4 = 0;
    __s10Foundation10URLRequestVMa();
    lVar13 = *(long *)(lVar4 + -8);
    (**(code **)(lVar13 + 0x10))
              (lVar16,lVar11 + ((ulong)*(byte *)(lVar13 + 0x50) + 0x20 &
                               ((ulong)*(byte *)(lVar13 + 0x50) ^ 0xffffffffffffffff)) +
                      *(long *)(lVar13 + 0x48) * (lVar2 + -1),lVar4);
    _swift_bridgeObjectRelease(lVar11);
    pcVar8 = *(code **)(lVar13 + 0x38);
  }
  lVar11 = lVar16;
  (*pcVar8)(lVar16,lVar2 == 0,1,lVar4);
  FUN_1002c85ec();
  uVar12 = *(undefined8 *)(plVar14[2] + 0x10);
  _os_unfair_lock_lock(uVar12);
  FUN_100082394((long)plVar14 + lVar15,lVar7,FUN_1002c76a8);
  uVar10 = *(ulong *)(lVar7 + 0x158);
  _swift_bridgeObjectRetain(uVar10);
  FUN_1000d27dc(lVar7,FUN_1002c76a8);
  _os_unfair_lock_unlock(uVar12);
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
      pcVar8 = (code *)SoftwareBreakpoint(1,0x100293314);
      (*pcVar8)();
    }
    if ((uVar10 & 0xc000000000000001) == 0) {
      if ((long)uVar6 < 0) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x100293324);
        (*pcVar8)();
      }
      if (*(ulong *)((uVar10 & 0xffffffffffffff8) + 0x10) <= uVar6) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x100293328);
        (*pcVar8)();
      }
      uVar6 = *(ulong *)(uVar10 + uVar6 * 8 + 0x20);
    }
    else {
      FUN_1002d392c(uVar6,uVar10);
    }
    _swift_bridgeObjectRelease(uVar10);
  }
  uVar12 = *(undefined8 *)(plVar14[2] + 0x10);
  _os_unfair_lock_lock(uVar12);
  FUN_100082394((long)plVar14 + lVar15,lVar7,FUN_1002c76a8);
  FUN_10007f314(lVar7 + *(int *)(auStack_f0[1] + 0x5c),lVar9 + *(int *)(lVar1 + 0x1c),&DAT_100a82460
                ,&DAT_1008175c0);
  FUN_1000d27dc(lVar7,FUN_1002c76a8);
  _os_unfair_lock_unlock(uVar12);
  FUN_1002a5dbc(lVar16,lVar9);
  *(long *)(lVar9 + *(int *)(lVar1 + 0x14)) = lVar11;
  *(ulong *)(lVar9 + *(int *)(lVar1 + 0x18)) = uVar6;
  uVar10 = auStack_f0[3];
  FUN_100082394(lVar9,auStack_f0[3],FUN_10029642c);
  _swift_storeEnumTagMultiPayload(uVar10,auStack_f0[2],1);
  _swift_weakInit(auStack_80,0);
  _swift_weakAssign();
  lVar1 = local_d0;
  FUN_10028febc(local_d0,uVar10,auStack_80,local_b8,uStack_b0,local_a8);
  (*pcStack_98)(lVar1);
  (**(code **)(local_c8 + 8))(lVar1,lStack_c0);
  FUN_1000d27dc(lVar9,FUN_10029642c);
  return;
}

