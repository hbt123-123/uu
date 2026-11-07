// rea decompile_all
// name: FUN_1002acef8
// address: 0x1002acef8
// body: available
// range: 0x1002acef8-0x1002ad31f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1002acef8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  code *pcVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  long local_d0;
  long local_c8;
  long local_c0;
  long local_b8;
  long local_b0;
  long local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  puVar1 = &DAT_100a82460;
  local_a0 = param_1;
  uStack_98 = param_2;
  FUN_100004bb4(&DAT_100a82460,&DAT_1008175c0);
  lVar12 = (long)&local_d0 - (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  local_b0 = lVar12;
  FUN_1002a7694();
  lVar12 = lVar12 - (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar1 = &DAT_100a83428;
  local_c0 = lVar2;
  FUN_100004bb4(&DAT_100a83428,&DAT_100817bb0);
  lVar5 = lVar12 - (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  local_a8 = lVar5;
  FUN_1002c76a8();
  lVar5 = lVar5 - (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar1 = &DAT_100a82c30;
  local_c8 = lVar2;
  FUN_100004bb4(&DAT_100a82c30,&DAT_1008171f0);
  lVar11 = lVar5 - (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  plVar9 = *(long **)(param_3 + _TtC9Alamofire7Request::mutableState);
  uVar8 = *(undefined8 *)(plVar9[2] + 0x10);
  local_b8 = param_3;
  _os_unfair_lock_lock(uVar8);
  lVar10 = *(long *)(*plVar9 + 0x60);
  _swift_beginAccess((long)plVar9 + lVar10,auStack_78,0,0);
  FUN_100082394((long)plVar9 + lVar10,lVar5,FUN_1002c76a8);
  lVar13 = *(long *)(lVar5 + 0x148);
  _swift_bridgeObjectRetain(lVar13);
  FUN_1000d27dc(lVar5,FUN_1002c76a8);
  _os_unfair_lock_unlock(uVar8);
  lVar2 = *(long *)(lVar13 + 0x10);
  if (lVar2 == 0) {
    _swift_bridgeObjectRelease(lVar13);
    lVar3 = 0;
    __s10Foundation10URLRequestVMa();
    pcVar6 = *(code **)(*(long *)(lVar3 + -8) + 0x38);
  }
  else {
    lVar3 = 0;
    __s10Foundation10URLRequestVMa();
    lVar7 = *(long *)(lVar3 + -8);
    (**(code **)(lVar7 + 0x10))
              (lVar11,lVar13 + ((ulong)*(byte *)(lVar7 + 0x50) + 0x20 &
                               ((ulong)*(byte *)(lVar7 + 0x50) ^ 0xffffffffffffffff)) +
                      *(long *)(lVar7 + 0x48) * (lVar2 + -1),lVar3);
    _swift_bridgeObjectRelease(lVar13);
    pcVar6 = *(code **)(lVar7 + 0x38);
  }
  lVar13 = lVar11;
  (*pcVar6)(lVar11,lVar2 == 0,1,lVar3);
  lVar2 = local_b8;
  FUN_1002c85ec();
  plVar14 = *(long **)(lVar2 + _TtC9Alamofire15DownloadRequest::mutableDownloadState);
  uVar8 = *(undefined8 *)(plVar14[2] + 0x10);
  local_d0 = lVar13;
  _os_unfair_lock_lock(uVar8);
  lVar2 = *(long *)(*plVar14 + 0x60);
  _swift_beginAccess((long)plVar14 + lVar2,auStack_90,0,0);
  FUN_100082394((long)plVar14 + lVar2,lVar12,FUN_1002a7694);
  lVar13 = local_a8;
  FUN_10007f314(lVar12 + *(int *)(local_c0 + 0x14),local_a8,&DAT_100a83428,&DAT_100817bb0);
  FUN_1000d27dc(lVar12,FUN_1002a7694);
  _os_unfair_lock_unlock(uVar8);
  uVar8 = *(undefined8 *)(plVar9[2] + 0x10);
  _os_unfair_lock_lock(uVar8);
  FUN_100082394((long)plVar9 + lVar10,lVar5,FUN_1002c76a8);
  lVar2 = local_b0;
  FUN_10007f314(lVar5 + *(int *)(local_c8 + 0x5c),local_b0,&DAT_100a82460,&DAT_1008175c0);
  FUN_1000d27dc(lVar5,FUN_1002c76a8);
  _os_unfair_lock_unlock(uVar8);
  lVar5 = 0;
  FUN_100277ad0();
  lVar12 = lVar2;
  (**(code **)(*(long *)(lVar5 + -8) + 0x30))(lVar2,1,lVar5);
  if ((int)lVar12 == 1) {
    FUN_100040bb4(lVar2,&DAT_100a82460,&DAT_1008175c0);
    lVar5 = 0;
  }
  else {
    puVar4 = &DAT_100a824a8;
    FUN_100005c90(&DAT_100a824a8,FUN_100277ad0,&TargetProtocolConformanceDescriptor_100816c70);
    _swift_allocError(lVar5,puVar4,0,0);
    FUN_10026531c(lVar2);
  }
  FUN_100344368(local_a0,lVar11,local_d0,lVar13,lVar5);
  _swift_errorRelease(lVar5);
  FUN_100040bb4(lVar13,&DAT_100a83428,&DAT_100817bb0);
  FUN_100040bb4(lVar11,&DAT_100a82c30,&DAT_1008171f0);
  return;
}

