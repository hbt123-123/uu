// rea decompile_all
// name: FUN_1002ad320
// address: 0x1002ad320
// body: available
// range: 0x1002ad320-0x1002ad767 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1002ad320(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5,long *param_6)

{
  undefined1 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  code *pcVar8;
  long lVar9;
  long lVar10;
  long unaff_x21;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  long *plVar14;
  long *plVar15;
  long lVar16;
  undefined1 auStack_f0 [8];
  long *local_e8;
  long local_e0;
  long local_d8;
  long local_d0;
  long local_c8;
  undefined1 *local_c0;
  long local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  puVar2 = &DAT_100a82460;
  local_e8 = param_6;
  local_b0 = param_1;
  uStack_a8 = param_2;
  local_a0 = param_4;
  FUN_100004bb4(&DAT_100a82460,&DAT_1008175c0);
  lVar7 = *(long *)(*(long *)(puVar2 + -8) + 0x40);
  lVar3 = 0;
  local_c0 = auStack_f0 + -(lVar7 + 0xfU & 0xfffffffffffffff0);
  FUN_1002a7694();
  lVar11 = (long)(auStack_f0 + -(lVar7 + 0xfU & 0xfffffffffffffff0)) -
           (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar2 = &DAT_100a83428;
  local_d0 = lVar3;
  FUN_100004bb4(&DAT_100a83428,&DAT_100817bb0);
  lVar7 = lVar11 - (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  local_b8 = lVar7;
  FUN_1002c76a8();
  lVar7 = lVar7 - (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar2 = &DAT_100a82c30;
  local_d8 = lVar3;
  FUN_100004bb4(&DAT_100a82c30,&DAT_1008171f0);
  lVar9 = lVar7 - (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  plVar15 = *(long **)(param_3 + _TtC9Alamofire7Request::mutableState);
  uVar13 = *(undefined8 *)(plVar15[2] + 0x10);
  local_c8 = param_3;
  _os_unfair_lock_lock(uVar13);
  lVar16 = *(long *)(*plVar15 + 0x60);
  _swift_beginAccess((long)plVar15 + lVar16,auStack_78,0,0);
  FUN_100082394((long)plVar15 + lVar16,lVar7,FUN_1002c76a8);
  lVar12 = *(long *)(lVar7 + 0x148);
  _swift_bridgeObjectRetain(lVar12);
  FUN_1000d27dc(lVar7,FUN_1002c76a8);
  _os_unfair_lock_unlock(uVar13);
  lVar3 = *(long *)(lVar12 + 0x10);
  if (lVar3 == 0) {
    _swift_bridgeObjectRelease(lVar12);
    lVar4 = 0;
    __s10Foundation10URLRequestVMa();
    pcVar8 = *(code **)(*(long *)(lVar4 + -8) + 0x38);
  }
  else {
    lVar4 = 0;
    __s10Foundation10URLRequestVMa();
    lVar10 = *(long *)(lVar4 + -8);
    (**(code **)(lVar10 + 0x10))
              (lVar9,lVar12 + ((ulong)*(byte *)(lVar10 + 0x50) + 0x20 &
                              ((ulong)*(byte *)(lVar10 + 0x50) ^ 0xffffffffffffffff)) +
                     *(long *)(lVar10 + 0x48) * (lVar3 + -1),lVar4);
    _swift_bridgeObjectRelease(lVar12);
    pcVar8 = *(code **)(lVar10 + 0x38);
  }
  lVar12 = lVar9;
  (*pcVar8)(lVar9,lVar3 == 0,1,lVar4);
  lVar3 = local_c8;
  FUN_1002c85ec();
  plVar14 = *(long **)(lVar3 + _TtC9Alamofire15DownloadRequest::mutableDownloadState);
  uVar13 = *(undefined8 *)(plVar14[2] + 0x10);
  local_e0 = lVar12;
  _os_unfair_lock_lock(uVar13);
  lVar3 = *(long *)(*plVar14 + 0x60);
  _swift_beginAccess((long)plVar14 + lVar3,auStack_90,0,0);
  FUN_100082394((long)plVar14 + lVar3,lVar11,FUN_1002a7694);
  lVar3 = local_b8;
  FUN_10007f314(lVar11 + *(int *)(local_d0 + 0x14),local_b8,&DAT_100a83428,&DAT_100817bb0);
  FUN_1000d27dc(lVar11,FUN_1002a7694);
  _os_unfair_lock_unlock(uVar13);
  uVar13 = *(undefined8 *)(plVar15[2] + 0x10);
  _os_unfair_lock_lock(uVar13);
  FUN_100082394((long)plVar15 + lVar16,lVar7,FUN_1002c76a8);
  puVar1 = local_c0;
  FUN_10007f314(lVar7 + *(int *)(local_d8 + 0x5c),local_c0,&DAT_100a82460,&DAT_1008175c0);
  FUN_1000d27dc(lVar7,FUN_1002c76a8);
  _os_unfair_lock_unlock(uVar13);
  lVar7 = 0;
  FUN_100277ad0();
  puVar5 = puVar1;
  (**(code **)(*(long *)(lVar7 + -8) + 0x30))(puVar1,1,lVar7);
  if ((int)puVar5 == 1) {
    FUN_100040bb4(puVar1,&DAT_100a82460,&DAT_1008175c0);
    lVar7 = 0;
  }
  else {
    puVar6 = &DAT_100a824a8;
    FUN_100005c90(&DAT_100a824a8,FUN_100277ad0,&TargetProtocolConformanceDescriptor_100816c70);
    _swift_allocError(lVar7,puVar6,0,0);
    FUN_10026531c(puVar1);
  }
  (**(code **)(param_5 + 0x10))(local_b0,lVar9,local_e0,lVar3,lVar7,local_a0);
  _swift_errorRelease(lVar7);
  FUN_100040bb4(lVar3,&DAT_100a83428,&DAT_100817bb0);
  FUN_100040bb4(lVar9,&DAT_100a82c30,&DAT_1008171f0);
  if (unaff_x21 != 0) {
    *local_e8 = unaff_x21;
  }
  return;
}

