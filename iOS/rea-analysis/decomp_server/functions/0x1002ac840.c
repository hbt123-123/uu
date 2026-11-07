// rea decompile_all
// name: FUN_1002ac840
// address: 0x1002ac840
// body: available
// range: 0x1002ac840-0x1002acef7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x0001002ace08) */

undefined1  [16] FUN_1002ac840(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  code *pcVar14;
  long lVar15;
  undefined8 *puVar16;
  long unaff_x21;
  long lVar17;
  long *plVar18;
  long lVar19;
  long lVar20;
  undefined8 uVar21;
  undefined8 *puVar22;
  long *plVar23;
  long lVar24;
  long lVar25;
  undefined1 auVar26 [16];
  undefined8 auStack_f0 [2];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar1 = 0;
  auStack_f0[1] = param_1;
  __s10Foundation3URLVMa();
  lVar8 = *(long *)(lVar1 + -8);
  lVar9 = (long)auStack_f0 - (*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar2 = &DAT_100a82460;
  FUN_100004bb4(&DAT_100a82460,&DAT_1008175c0);
  lVar10 = lVar9 - (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  FUN_1002a7694();
  lVar11 = lVar10 - (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar2 = &DAT_100a83428;
  FUN_100004bb4(&DAT_100a83428,&DAT_100817bb0);
  uVar12 = *(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar15 = lVar11 - uVar12;
  lVar24 = lVar15 - uVar12;
  lVar4 = 0;
  FUN_1002c76a8();
  lVar20 = lVar24 - (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar2 = &DAT_100a82c30;
  FUN_100004bb4(&DAT_100a82c30,&DAT_1008171f0);
  puVar22 = (undefined8 *)
            (lVar20 - (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0));
  plVar23 = *(long **)(param_2 + _TtC9Alamofire7Request::mutableState);
  uVar21 = *(undefined8 *)(plVar23[2] + 0x10);
  _os_unfair_lock_lock(uVar21);
  lVar19 = *(long *)(*plVar23 + 0x60);
  _swift_beginAccess((long)plVar23 + lVar19,auStack_78,0,0);
  FUN_100082394((long)plVar23 + lVar19,lVar20,FUN_1002c76a8);
  lVar17 = *(long *)(lVar20 + 0x148);
  _swift_bridgeObjectRetain(lVar17);
  FUN_1000d27dc(lVar20,FUN_1002c76a8);
  _os_unfair_lock_unlock(uVar21);
  lVar13 = *(long *)(lVar17 + 0x10);
  if (lVar13 == 0) {
    _swift_bridgeObjectRelease(lVar17);
    lVar5 = 0;
    __s10Foundation10URLRequestVMa();
    pcVar14 = *(code **)(*(long *)(lVar5 + -8) + 0x38);
  }
  else {
    lVar5 = 0;
    __s10Foundation10URLRequestVMa();
    lVar25 = *(long *)(lVar5 + -8);
    (**(code **)(lVar25 + 0x10))
              (puVar22,lVar17 + ((ulong)*(byte *)(lVar25 + 0x50) + 0x20 &
                                ((ulong)*(byte *)(lVar25 + 0x50) ^ 0xffffffffffffffff)) +
                       *(long *)(lVar25 + 0x48) * (lVar13 + -1),lVar5);
    _swift_bridgeObjectRelease(lVar17);
    pcVar14 = *(code **)(lVar25 + 0x38);
  }
  puVar6 = puVar22;
  (*pcVar14)(puVar22,lVar13 == 0,1,lVar5);
  FUN_1002c85ec();
  plVar18 = *(long **)(param_2 + _TtC9Alamofire15DownloadRequest::mutableDownloadState);
  uVar21 = *(undefined8 *)(plVar18[2] + 0x10);
  _os_unfair_lock_lock(uVar21);
  lVar13 = *(long *)(*plVar18 + 0x60);
  _swift_beginAccess((long)plVar18 + lVar13,auStack_90,0,0);
  FUN_100082394((long)plVar18 + lVar13,lVar11,FUN_1002a7694);
  FUN_10007f314(lVar11 + *(int *)(lVar3 + 0x14),lVar24,&DAT_100a83428,&DAT_100817bb0);
  FUN_1000d27dc(lVar11,FUN_1002a7694);
  _os_unfair_lock_unlock(uVar21);
  puVar16 = *(undefined8 **)(plVar23[2] + 0x10);
  _os_unfair_lock_lock(puVar16);
  FUN_100082394((long)plVar23 + lVar19,lVar20,FUN_1002c76a8);
  FUN_10007f314(lVar20 + *(int *)(lVar4 + 0x5c),lVar10,&DAT_100a82460,&DAT_1008175c0);
  FUN_1000d27dc(lVar20,FUN_1002c76a8);
  _os_unfair_lock_unlock(puVar16);
  puVar7 = (undefined8 *)0x0;
  FUN_100277ad0();
  lVar3 = lVar10;
  (**(code **)(puVar7[-1] + 0x30))(lVar10,1,puVar7);
  if ((int)lVar3 == 1) {
    FUN_100040bb4(lVar10,&DAT_100a82460,&DAT_1008175c0);
    FUN_10007f314(lVar24,lVar15,&DAT_100a83428,&DAT_100817bb0);
    lVar3 = lVar15;
    (**(code **)(lVar8 + 0x30))(lVar15,1,lVar1);
    if ((int)lVar3 == 1) {
      FUN_100040bb4(lVar15,&DAT_100a83428,&DAT_100817bb0);
      puVar16 = &DAT_100a824a8;
      FUN_100005c90(&DAT_100a824a8,FUN_100277ad0,&TargetProtocolConformanceDescriptor_100816c70);
      _swift_allocError(puVar7,puVar16,0,0);
      uVar21 = 0;
      FUN_100278368(0);
      _swift_storeEnumTagMultiPayload(puVar16,uVar21,7);
      _swift_storeEnumTagMultiPayload(puVar16,puVar7,10);
      _swift_willThrow();
    }
    else {
      (**(code **)(lVar8 + 0x20))(lVar9,lVar15,lVar1);
      uVar21 = 0;
      lVar3 = lVar9;
      __s10Foundation4DataV10contentsOf7optionsAcA3URLVh_So20NSDataReadingOptionsVtKcfC(lVar9);
      if (unaff_x21 == 0) {
        puVar16 = puVar22;
        FUN_100345d38(puVar22,puVar6,lVar3,uVar21,0);
        FUN_100006cdc(lVar3,uVar21);
        (**(code **)(lVar8 + 8))(lVar9,lVar1);
        FUN_100040bb4(lVar24,&DAT_100a83428,&DAT_100817bb0);
        FUN_100040bb4(puVar22,&DAT_100a82c30,&DAT_1008171f0);
        goto LAB_1002ace68;
      }
      puVar16 = &DAT_100a824a8;
      FUN_100005c90(&DAT_100a824a8,FUN_100277ad0,&TargetProtocolConformanceDescriptor_100816c70);
      _swift_allocError(puVar7,puVar16,0,0);
      (**(code **)(lVar8 + 0x10))(puVar16,lVar9,lVar1);
      uVar21 = 0;
      FUN_100278368(0);
      _swift_storeEnumTagMultiPayload(puVar16,uVar21,0);
      _swift_storeEnumTagMultiPayload(puVar16,puVar7,10);
      _swift_willThrow();
      _swift_errorRelease(unaff_x21);
      (**(code **)(lVar8 + 8))(lVar9,lVar1);
    }
  }
  else {
    puVar6 = &DAT_100a824a8;
    FUN_100005c90(&DAT_100a824a8,FUN_100277ad0,&TargetProtocolConformanceDescriptor_100816c70);
    _swift_allocError(puVar7,puVar6,0,0);
    FUN_10026531c(lVar10);
    _swift_willThrow();
  }
  FUN_100040bb4(lVar24,&DAT_100a83428,&DAT_100817bb0);
  FUN_100040bb4(puVar22,&DAT_100a82c30,&DAT_1008171f0);
  puVar6 = puVar7;
LAB_1002ace68:
  auVar26._8_8_ = puVar6;
  auVar26._0_8_ = puVar16;
  return auVar26;
}

