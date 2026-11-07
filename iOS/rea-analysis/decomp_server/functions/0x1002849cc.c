// rea decompile_all
// name: FUN_1002849cc
// address: 0x1002849cc
// body: available
// range: 0x1002849cc-0x100284d5b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8
FUN_1002849cc(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5,
             long *param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  code *pcVar7;
  long lVar8;
  undefined8 uVar9;
  long unaff_x21;
  long *plVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined1 *puVar14;
  long lVar15;
  long lVar16;
  undefined1 auStack_d0 [8];
  long *local_c8;
  long local_c0;
  long local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  puVar2 = &DAT_100a82460;
  local_c8 = param_6;
  local_b0 = param_1;
  uStack_a8 = param_2;
  local_a0 = param_4;
  FUN_100004bb4(&DAT_100a82460,&DAT_1008175c0);
  puVar14 = auStack_d0 + -(*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  FUN_1002c76a8();
  lVar8 = (long)puVar14 - (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar2 = &DAT_100a82c30;
  local_b8 = lVar3;
  FUN_100004bb4(&DAT_100a82c30,&DAT_1008171f0);
  lVar16 = lVar8 - (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  plVar10 = *(long **)(param_3 + _TtC9Alamofire7Request::mutableState);
  uVar13 = *(undefined8 *)(plVar10[2] + 0x10);
  local_c0 = param_3;
  _os_unfair_lock_lock(uVar13);
  lVar11 = *(long *)(*plVar10 + 0x60);
  _swift_beginAccess((long)plVar10 + lVar11,auStack_78,0,0);
  FUN_10028ab0c((long)plVar10 + lVar11,lVar8);
  lVar12 = *(long *)(lVar8 + 0x148);
  _swift_bridgeObjectRetain(lVar12);
  FUN_1000d27dc(lVar8,FUN_1002c76a8);
  _os_unfair_lock_unlock(uVar13);
  lVar3 = *(long *)(lVar12 + 0x10);
  if (lVar3 == 0) {
    _swift_bridgeObjectRelease(lVar12);
    lVar4 = 0;
    __s10Foundation10URLRequestVMa();
    pcVar7 = *(code **)(*(long *)(lVar4 + -8) + 0x38);
  }
  else {
    lVar4 = 0;
    __s10Foundation10URLRequestVMa();
    lVar15 = *(long *)(lVar4 + -8);
    (**(code **)(lVar15 + 0x10))
              (lVar16,lVar12 + ((ulong)*(byte *)(lVar15 + 0x50) + 0x20 &
                               ((ulong)*(byte *)(lVar15 + 0x50) ^ 0xffffffffffffffff)) +
                      *(long *)(lVar15 + 0x48) * (lVar3 + -1),lVar4);
    _swift_bridgeObjectRelease(lVar12);
    pcVar7 = *(code **)(lVar15 + 0x38);
  }
  lVar12 = lVar16;
  (*pcVar7)(lVar16,lVar3 == 0,1,lVar4);
  lVar3 = local_c0;
  FUN_1002c85ec();
  lVar3 = *(long *)(lVar3 + _TtC9Alamofire11DataRequest::dataMutableState);
  uVar9 = *(undefined8 *)(*(long *)(lVar3 + 0x10) + 0x10);
  _os_unfair_lock_lock(uVar9);
  _swift_beginAccess(lVar3 + 0x18,auStack_90,0,0);
  uVar13 = *(undefined8 *)(lVar3 + 0x18);
  uVar1 = *(undefined8 *)(lVar3 + 0x20);
  FUN_10010bd10(uVar13,uVar1);
  _os_unfair_lock_unlock(uVar9);
  uVar9 = *(undefined8 *)(plVar10[2] + 0x10);
  _os_unfair_lock_lock(uVar9);
  FUN_10028ab0c((long)plVar10 + lVar11,lVar8);
  FUN_10007f314(lVar8 + *(int *)(local_b8 + 0x5c),puVar14,&DAT_100a82460,&DAT_1008175c0);
  FUN_1000d27dc(lVar8,FUN_1002c76a8);
  _os_unfair_lock_unlock(uVar9);
  lVar3 = 0;
  FUN_100277ad0();
  puVar5 = puVar14;
  (**(code **)(*(long *)(lVar3 + -8) + 0x30))(puVar14,1,lVar3);
  if ((int)puVar5 == 1) {
    FUN_100040bb4(puVar14,&DAT_100a82460,&DAT_1008175c0);
    lVar3 = 0;
  }
  else {
    puVar6 = &DAT_100a824a8;
    FUN_100005c90(&DAT_100a824a8,FUN_100277ad0,&TargetProtocolConformanceDescriptor_100816c70);
    _swift_allocError(lVar3,puVar6,0,0);
    FUN_10026531c(puVar14);
  }
  (**(code **)(param_5 + 0x10))(local_b0,lVar16,lVar12,uVar13,uVar1,lVar3,local_a0);
  FUN_100040bb4(lVar16,&DAT_100a82c30,&DAT_1008171f0);
  _swift_errorRelease(lVar3);
  FUN_100006cc8(uVar13,uVar1);
  if (unaff_x21 != 0) {
    *local_c8 = unaff_x21;
  }
  return 0;
}

