// rea decompile_all
// name: FUN_1002ac01c
// address: 0x1002ac01c
// body: available
// range: 0x1002ac01c-0x1002ac83f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x0001002ac774) */

void FUN_1002ac01c(long *param_1,long param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ID self;
  undefined8 *puVar7;
  ID IVar8;
  ulong uVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  code *pcVar17;
  long lVar18;
  long unaff_x21;
  long lVar19;
  long *plVar20;
  long lVar21;
  long lVar22;
  ID IVar23;
  long lVar24;
  long *plVar25;
  long lVar26;
  undefined8 uVar27;
  long *local_f0;
  long local_e8;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar2 = 0;
  local_f0 = param_1;
  local_e8 = param_2;
  __s10Foundation3URLVMa();
  lVar11 = *(long *)(lVar2 + -8);
  lVar12 = (long)&local_f0 - (*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = &DAT_100a82460;
  FUN_100004bb4(&DAT_100a82460,&DAT_1008175c0);
  lVar13 = lVar12 - (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  FUN_1002a7694();
  lVar26 = lVar13 - (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = &DAT_100a83428;
  FUN_100004bb4(&DAT_100a83428,&DAT_100817bb0);
  uVar14 = *(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar18 = lVar26 - uVar14;
  lVar15 = lVar18 - uVar14;
  lVar5 = 0;
  FUN_1002c76a8();
  lVar22 = lVar15 - (*(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = &DAT_100a82c30;
  FUN_100004bb4(&DAT_100a82c30,&DAT_1008171f0);
  IVar23 = lVar22 - (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  plVar25 = *(long **)(param_3 + _TtC9Alamofire7Request::mutableState);
  uVar27 = *(undefined8 *)(plVar25[2] + 0x10);
  _os_unfair_lock_lock(uVar27);
  lVar21 = *(long *)(*plVar25 + 0x60);
  _swift_beginAccess((long)plVar25 + lVar21,auStack_78,0,0);
  FUN_100082394((long)plVar25 + lVar21,lVar22,FUN_1002c76a8);
  lVar19 = *(long *)(lVar22 + 0x148);
  _swift_bridgeObjectRetain(lVar19);
  FUN_1000d27dc(lVar22,FUN_1002c76a8);
  _os_unfair_lock_unlock(uVar27);
  lVar16 = *(long *)(lVar19 + 0x10);
  if (lVar16 == 0) {
    _swift_bridgeObjectRelease(lVar19);
    lVar6 = 0;
    __s10Foundation10URLRequestVMa();
    pcVar17 = *(code **)(*(long *)(lVar6 + -8) + 0x38);
  }
  else {
    lVar6 = 0;
    __s10Foundation10URLRequestVMa();
    lVar24 = *(long *)(lVar6 + -8);
    (**(code **)(lVar24 + 0x10))
              (IVar23,lVar19 + ((ulong)*(byte *)(lVar24 + 0x50) + 0x20 &
                               ((ulong)*(byte *)(lVar24 + 0x50) ^ 0xffffffffffffffff)) +
                      *(long *)(lVar24 + 0x48) * (lVar16 + -1),lVar6);
    _swift_bridgeObjectRelease(lVar19);
    pcVar17 = *(code **)(lVar24 + 0x38);
  }
  self = IVar23;
  (*pcVar17)(IVar23,lVar16 == 0,1,lVar6);
  FUN_1002c85ec();
  plVar20 = *(long **)(param_3 + _TtC9Alamofire15DownloadRequest::mutableDownloadState);
  uVar27 = *(undefined8 *)(plVar20[2] + 0x10);
  _os_unfair_lock_lock(uVar27);
  lVar16 = *(long *)(*plVar20 + 0x60);
  _swift_beginAccess((long)plVar20 + lVar16,auStack_90,0,0);
  FUN_100082394((long)plVar20 + lVar16,lVar26,FUN_1002a7694);
  FUN_10007f314(lVar26 + *(int *)(lVar4 + 0x14),lVar15,&DAT_100a83428,&DAT_100817bb0);
  FUN_1000d27dc(lVar26,FUN_1002a7694);
  _os_unfair_lock_unlock(uVar27);
  uVar27 = *(undefined8 *)(plVar25[2] + 0x10);
  _os_unfair_lock_lock(uVar27);
  FUN_100082394((long)plVar25 + lVar21,lVar22,FUN_1002c76a8);
  FUN_10007f314(lVar22 + *(int *)(lVar5 + 0x5c),lVar13,&DAT_100a82460,&DAT_1008175c0);
  FUN_1000d27dc(lVar22,FUN_1002c76a8);
  _os_unfair_lock_unlock(uVar27);
  lVar5 = 0;
  FUN_100277ad0();
  lVar4 = lVar13;
  (**(code **)(*(long *)(lVar5 + -8) + 0x30))(lVar13,1,lVar5);
  if ((int)lVar4 == 1) {
    FUN_100040bb4(lVar13,&DAT_100a82460,&DAT_1008175c0);
    FUN_10007f314(lVar15,lVar18,&DAT_100a83428,&DAT_100817bb0);
    lVar4 = lVar18;
    (**(code **)(lVar11 + 0x30))(lVar18,1,lVar2);
    if ((int)lVar4 != 1) {
      (**(code **)(lVar11 + 0x20))(lVar12,lVar18,lVar2);
      uVar14 = 0;
      lVar4 = lVar12;
      __s10Foundation4DataV10contentsOf7optionsAcA3URLVh_So20NSDataReadingOptionsVtKcfC();
      if (unaff_x21 != 0) {
        puVar7 = &DAT_100a824a8;
        FUN_100005c90(&DAT_100a824a8,FUN_100277ad0,&TargetProtocolConformanceDescriptor_100816c70);
        _swift_allocError(lVar5,puVar7,0,0);
        (**(code **)(lVar11 + 0x10))(puVar7,lVar12,lVar2);
        uVar27 = 0;
        FUN_100278368(0);
        _swift_storeEnumTagMultiPayload(puVar7,uVar27,0);
        _swift_storeEnumTagMultiPayload(puVar7,lVar5,10);
        _swift_willThrow();
        _swift_errorRelease(unaff_x21);
        (**(code **)(lVar11 + 8))(lVar12,lVar2);
        goto LAB_1002ac4c4;
      }
      uVar1 = (uint)(uVar14 >> 0x20);
      uVar10 = uVar1 >> 0x1e;
      if (uVar1 >> 0x1e < 2) {
        if (uVar10 == 0) {
          if ((uVar14 & 0xff000000000000) == 0) goto LAB_1002ac630;
        }
        else {
          if ((long)(int)lVar4 == lVar4 >> 0x20) goto LAB_1002ac650;
LAB_1002ac728:
          FUN_100008184(lVar4,uVar14);
        }
        uVar27 = *(undefined8 *)(local_e8 + 0x28);
        lVar13 = *(long *)(local_e8 + 0x30);
        FUN_10003f030(local_e8 + 0x10,uVar27);
        lVar5 = lVar4;
        uVar9 = uVar14;
        (**(code **)(lVar13 + 8))(lVar4,uVar14,uVar27,lVar13);
        FUN_100006cdc(lVar4,uVar14);
        FUN_100006cdc(lVar4,uVar14);
        goto LAB_1002ac7e8;
      }
      if (uVar10 == 2) {
        if (*(long *)(lVar4 + 0x10) != *(long *)(lVar4 + 0x18)) goto LAB_1002ac728;
      }
      else {
LAB_1002ac630:
        FUN_100006cdc(lVar4,uVar14);
      }
LAB_1002ac650:
      IVar8 = IVar23;
      FUN_100343db8();
      if ((((uint)IVar8 & 0xff) != 2) && ((IVar8 & 1) != 0)) {
LAB_1002ac69c:
        FUN_100006cdc(lVar4,uVar14);
        lVar5 = 0;
        uVar9 = 0xc000000000000000;
LAB_1002ac7e8:
        (**(code **)(lVar11 + 8))(lVar12,lVar2);
        FUN_100040bb4(lVar15,&DAT_100a83428,&DAT_100817bb0);
        FUN_100040bb4(IVar23,&DAT_100a82c30,&DAT_1008171f0);
        *local_f0 = lVar5;
        local_f0[1] = uVar9;
        return;
      }
      if (self != 0) {
        uVar9 = _objc_msgSend(self,"statusCode");
        FUN_100348358(uVar9,local_e8);
        if ((uVar9 & 1) != 0) goto LAB_1002ac69c;
      }
      puVar7 = &DAT_100a824a8;
      FUN_100005c90(&DAT_100a824a8,FUN_100277ad0,&TargetProtocolConformanceDescriptor_100816c70);
      _swift_allocError(lVar5,puVar7,0,0);
      uVar27 = 0;
      FUN_100278368(0);
      _swift_storeEnumTagMultiPayload(puVar7,uVar27,6);
      _swift_storeEnumTagMultiPayload(puVar7,lVar5,10);
      _swift_willThrow();
      _swift_willThrow();
      FUN_100006cdc(lVar4,uVar14);
      (**(code **)(lVar11 + 8))(lVar12,lVar2);
      goto LAB_1002ac4c4;
    }
    FUN_100040bb4(lVar18,&DAT_100a83428,&DAT_100817bb0);
    puVar7 = &DAT_100a824a8;
    FUN_100005c90(&DAT_100a824a8,FUN_100277ad0,&TargetProtocolConformanceDescriptor_100816c70);
    _swift_allocError(lVar5,puVar7,0,0);
    uVar27 = 0;
    FUN_100278368(0);
    _swift_storeEnumTagMultiPayload(puVar7,uVar27,7);
    _swift_storeEnumTagMultiPayload(puVar7,lVar5,10);
  }
  else {
    puVar7 = &DAT_100a824a8;
    FUN_100005c90(&DAT_100a824a8,FUN_100277ad0,&TargetProtocolConformanceDescriptor_100816c70);
    _swift_allocError(lVar5,puVar7,0,0);
    FUN_10026531c(lVar13);
  }
  _swift_willThrow();
LAB_1002ac4c4:
  FUN_100040bb4(lVar15,&DAT_100a83428,&DAT_100817bb0);
  FUN_100040bb4(IVar23,&DAT_100a82c30,&DAT_1008171f0);
  return;
}

