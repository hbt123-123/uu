// rea decompile_all
// name: FUN_1002abae4
// address: 0x1002abae4
// body: available
// range: 0x1002abae4-0x1002ac01b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1002abae4(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  code *pcVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  long *plVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long *plVar20;
  undefined8 local_d0;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  puVar1 = &DAT_100a82460;
  local_d0 = param_1;
  FUN_100004bb4(&DAT_100a82460,&DAT_1008175c0);
  lVar5 = (long)&local_d0 - (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  FUN_1002a7694();
  lVar19 = lVar5 - (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar1 = &DAT_100a83428;
  FUN_100004bb4(&DAT_100a83428,&DAT_100817bb0);
  uVar7 = *(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar11 = lVar19 - uVar7;
  lVar8 = lVar11 - uVar7;
  lVar3 = 0;
  FUN_1002c76a8();
  lVar17 = lVar8 - (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar1 = &DAT_100a82c30;
  FUN_100004bb4(&DAT_100a82c30,&DAT_1008171f0);
  lVar13 = lVar17 - (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  plVar20 = *(long **)(param_2 + _TtC9Alamofire7Request::mutableState);
  uVar15 = *(undefined8 *)(plVar20[2] + 0x10);
  _os_unfair_lock_lock(uVar15);
  lVar12 = *(long *)(*plVar20 + 0x60);
  _swift_beginAccess((long)plVar20 + lVar12,auStack_78,0,0);
  FUN_100082394((long)plVar20 + lVar12,lVar17,FUN_1002c76a8);
  lVar14 = *(long *)(lVar17 + 0x148);
  _swift_bridgeObjectRetain(lVar14);
  FUN_1000d27dc(lVar17,FUN_1002c76a8);
  _os_unfair_lock_unlock(uVar15);
  lVar9 = *(long *)(lVar14 + 0x10);
  if (lVar9 == 0) {
    _swift_bridgeObjectRelease(lVar14);
    lVar4 = 0;
    __s10Foundation10URLRequestVMa();
    pcVar10 = *(code **)(*(long *)(lVar4 + -8) + 0x38);
  }
  else {
    lVar4 = 0;
    __s10Foundation10URLRequestVMa();
    lVar18 = *(long *)(lVar4 + -8);
    (**(code **)(lVar18 + 0x10))
              (lVar13,lVar14 + ((ulong)*(byte *)(lVar18 + 0x50) + 0x20 &
                               ((ulong)*(byte *)(lVar18 + 0x50) ^ 0xffffffffffffffff)) +
                      *(long *)(lVar18 + 0x48) * (lVar9 + -1),lVar4);
    _swift_bridgeObjectRelease(lVar14);
    pcVar10 = *(code **)(lVar18 + 0x38);
  }
  (*pcVar10)(lVar13,lVar9 == 0,1,lVar4);
  FUN_1002c85ec();
  plVar16 = *(long **)(param_2 + _TtC9Alamofire15DownloadRequest::mutableDownloadState);
  uVar15 = *(undefined8 *)(plVar16[2] + 0x10);
  _os_unfair_lock_lock(uVar15);
  lVar9 = *(long *)(*plVar16 + 0x60);
  _swift_beginAccess((long)plVar16 + lVar9,auStack_90,0,0);
  FUN_100082394((long)plVar16 + lVar9,lVar19,FUN_1002a7694);
  FUN_10007f314(lVar19 + *(int *)(lVar2 + 0x14),lVar8,&DAT_100a83428,&DAT_100817bb0);
  FUN_1000d27dc(lVar19,FUN_1002a7694);
  _os_unfair_lock_unlock(uVar15);
  uVar15 = *(undefined8 *)(plVar20[2] + 0x10);
  _os_unfair_lock_lock(uVar15);
  FUN_100082394((long)plVar20 + lVar12,lVar17,FUN_1002c76a8);
  FUN_10007f314(lVar17 + *(int *)(lVar3 + 0x5c),lVar5,&DAT_100a82460,&DAT_1008175c0);
  FUN_1000d27dc(lVar17,FUN_1002c76a8);
  _os_unfair_lock_unlock(uVar15);
  lVar3 = 0;
  FUN_100277ad0();
  lVar2 = lVar5;
  (**(code **)(*(long *)(lVar3 + -8) + 0x30))(lVar5,1,lVar3);
  if ((int)lVar2 == 1) {
    FUN_100040bb4(lVar5,&DAT_100a82460,&DAT_1008175c0);
    FUN_10007f314(lVar8,lVar11,&DAT_100a83428,&DAT_100817bb0);
    lVar5 = 0;
    __s10Foundation3URLVMa();
    lVar9 = *(long *)(lVar5 + -8);
    lVar2 = lVar11;
    (**(code **)(lVar9 + 0x30))(lVar11,1,lVar5);
    if ((int)lVar2 != 1) {
      FUN_100040bb4(lVar8,&DAT_100a83428,&DAT_100817bb0);
      FUN_100040bb4(lVar13,&DAT_100a82c30,&DAT_1008171f0);
      (**(code **)(lVar9 + 0x20))(local_d0,lVar11,lVar5);
      return;
    }
    FUN_100040bb4(lVar11,&DAT_100a83428,&DAT_100817bb0);
    puVar6 = &DAT_100a824a8;
    FUN_100005c90(&DAT_100a824a8,FUN_100277ad0,&TargetProtocolConformanceDescriptor_100816c70);
    _swift_allocError(lVar3,puVar6,0,0);
    uVar15 = 0;
    FUN_100278368(0);
    _swift_storeEnumTagMultiPayload(puVar6,uVar15,7);
    _swift_storeEnumTagMultiPayload(puVar6,lVar3,10);
    _swift_willThrow();
  }
  else {
    puVar6 = &DAT_100a824a8;
    FUN_100005c90(&DAT_100a824a8,FUN_100277ad0,&TargetProtocolConformanceDescriptor_100816c70);
    _swift_allocError(lVar3,puVar6,0,0);
    FUN_10026531c(lVar5);
    _swift_errorRetain(lVar3);
    _swift_willThrow(0);
    _swift_errorRelease(lVar3);
  }
  FUN_100040bb4(lVar8,&DAT_100a83428,&DAT_100817bb0);
  FUN_100040bb4(lVar13,&DAT_100a82c30,&DAT_1008171f0);
  return;
}

