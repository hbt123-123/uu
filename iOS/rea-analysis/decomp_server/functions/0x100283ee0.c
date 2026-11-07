// rea decompile_all
// name: FUN_100283ee0
// address: 0x100283ee0
// body: available
// range: 0x100283ee0-0x10028425f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined1  [16] FUN_100283ee0(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  code *pcVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  undefined1 *puVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  undefined1 auVar17 [16];
  undefined1 auStack_b0 [8];
  long local_a8;
  long local_a0;
  undefined8 local_98;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  puVar2 = &DAT_100a82460;
  local_98 = param_1;
  FUN_100004bb4(&DAT_100a82460,&DAT_1008175c0);
  puVar11 = auStack_b0 + -(*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  FUN_1002c76a8();
  lVar13 = (long)puVar11 - (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar2 = &DAT_100a82c30;
  local_a0 = lVar3;
  FUN_100004bb4(&DAT_100a82c30,&DAT_1008171f0);
  lVar10 = lVar13 - (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  plVar9 = *(long **)(param_2 + _TtC9Alamofire7Request::mutableState);
  uVar16 = *(undefined8 *)(plVar9[2] + 0x10);
  local_a8 = param_2;
  _os_unfair_lock_lock(uVar16);
  lVar14 = *(long *)(*plVar9 + 0x60);
  _swift_beginAccess((long)plVar9 + lVar14,auStack_78,0,0);
  FUN_10028ab0c((long)plVar9 + lVar14,lVar13);
  lVar15 = *(long *)(lVar13 + 0x148);
  _swift_bridgeObjectRetain(lVar15);
  FUN_1000d27dc(lVar13,FUN_1002c76a8);
  _os_unfair_lock_unlock(uVar16);
  lVar3 = *(long *)(lVar15 + 0x10);
  if (lVar3 == 0) {
    _swift_bridgeObjectRelease(lVar15);
    lVar4 = 0;
    __s10Foundation10URLRequestVMa();
    pcVar7 = *(code **)(*(long *)(lVar4 + -8) + 0x38);
  }
  else {
    lVar4 = 0;
    __s10Foundation10URLRequestVMa();
    lVar12 = *(long *)(lVar4 + -8);
    (**(code **)(lVar12 + 0x10))
              (lVar10,lVar15 + ((ulong)*(byte *)(lVar12 + 0x50) + 0x20 &
                               ((ulong)*(byte *)(lVar12 + 0x50) ^ 0xffffffffffffffff)) +
                      *(long *)(lVar12 + 0x48) * (lVar3 + -1),lVar4);
    _swift_bridgeObjectRelease(lVar15);
    pcVar7 = *(code **)(lVar12 + 0x38);
  }
  lVar15 = lVar10;
  (*pcVar7)(lVar10,lVar3 == 0,1,lVar4);
  lVar3 = local_a8;
  FUN_1002c85ec();
  lVar3 = *(long *)(lVar3 + _TtC9Alamofire11DataRequest::dataMutableState);
  uVar8 = *(undefined8 *)(*(long *)(lVar3 + 0x10) + 0x10);
  _os_unfair_lock_lock(uVar8);
  _swift_beginAccess(lVar3 + 0x18,auStack_90,0,0);
  uVar16 = *(undefined8 *)(lVar3 + 0x18);
  uVar1 = *(undefined8 *)(lVar3 + 0x20);
  FUN_10010bd10(uVar16,uVar1);
  _os_unfair_lock_unlock(uVar8);
  uVar8 = *(undefined8 *)(plVar9[2] + 0x10);
  _os_unfair_lock_lock(uVar8);
  FUN_10028ab0c((long)plVar9 + lVar14,lVar13);
  FUN_10007f314(lVar13 + *(int *)(local_a0 + 0x5c),puVar11,&DAT_100a82460,&DAT_1008175c0);
  FUN_1000d27dc(lVar13,FUN_1002c76a8);
  _os_unfair_lock_unlock(uVar8);
  lVar3 = 0;
  FUN_100277ad0();
  puVar5 = puVar11;
  (**(code **)(*(long *)(lVar3 + -8) + 0x30))(puVar11,1,lVar3);
  if ((int)puVar5 == 1) {
    FUN_100040bb4(puVar11,&DAT_100a82460,&DAT_1008175c0);
    lVar3 = 0;
  }
  else {
    puVar6 = &DAT_100a824a8;
    FUN_100005c90(&DAT_100a824a8,FUN_100277ad0,&TargetProtocolConformanceDescriptor_100816c70);
    _swift_allocError(lVar3,puVar6,0,0);
    FUN_10026531c(puVar11);
  }
  lVar13 = lVar10;
  FUN_100345d38(lVar10,lVar15,uVar16,uVar1,lVar3);
  _swift_errorRelease(lVar3);
  FUN_100006cc8(uVar16,uVar1);
  FUN_100040bb4(lVar10,&DAT_100a82c30,&DAT_1008171f0);
  auVar17._8_8_ = lVar15;
  auVar17._0_8_ = lVar13;
  return auVar17;
}

