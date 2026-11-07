// rea decompile_all
// name: FUN_1002839dc
// address: 0x1002839dc
// body: available
// range: 0x1002839dc-0x100283edf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1002839dc(long *param_1,long param_2,long param_3)

{
  ulong uVar1;
  uint uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  ID self;
  undefined8 *puVar6;
  ID IVar7;
  ulong uVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  code *pcVar12;
  long *plVar13;
  long unaff_x21;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  ID IVar19;
  long *local_b0;
  long local_a8;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  puVar3 = &DAT_100a82460;
  local_b0 = param_1;
  local_a8 = param_2;
  FUN_100004bb4(&DAT_100a82460,&DAT_1008175c0);
  lVar10 = (long)&local_b0 - (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  FUN_1002c76a8();
  lVar15 = lVar10 - (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = &DAT_100a82c30;
  FUN_100004bb4(&DAT_100a82c30,&DAT_1008171f0);
  IVar19 = lVar15 - (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  plVar13 = *(long **)(param_3 + _TtC9Alamofire7Request::mutableState);
  uVar18 = *(undefined8 *)(plVar13[2] + 0x10);
  _os_unfair_lock_lock(uVar18);
  lVar14 = *(long *)(*plVar13 + 0x60);
  _swift_beginAccess((long)plVar13 + lVar14,auStack_78,0,0);
  FUN_10028ab0c((long)plVar13 + lVar14,lVar15);
  lVar17 = *(long *)(lVar15 + 0x148);
  _swift_bridgeObjectRetain(lVar17);
  FUN_1000d27dc(lVar15,FUN_1002c76a8);
  _os_unfair_lock_unlock(uVar18);
  lVar11 = *(long *)(lVar17 + 0x10);
  if (lVar11 == 0) {
    _swift_bridgeObjectRelease(lVar17);
    lVar5 = 0;
    __s10Foundation10URLRequestVMa();
    pcVar12 = *(code **)(*(long *)(lVar5 + -8) + 0x38);
  }
  else {
    lVar5 = 0;
    __s10Foundation10URLRequestVMa();
    lVar16 = *(long *)(lVar5 + -8);
    (**(code **)(lVar16 + 0x10))
              (IVar19,lVar17 + ((ulong)*(byte *)(lVar16 + 0x50) + 0x20 &
                               ((ulong)*(byte *)(lVar16 + 0x50) ^ 0xffffffffffffffff)) +
                      *(long *)(lVar16 + 0x48) * (lVar11 + -1),lVar5);
    _swift_bridgeObjectRelease(lVar17);
    pcVar12 = *(code **)(lVar16 + 0x38);
  }
  self = IVar19;
  (*pcVar12)(IVar19,lVar11 == 0,1,lVar5);
  FUN_1002c85ec();
  lVar17 = *(long *)(param_3 + _TtC9Alamofire11DataRequest::dataMutableState);
  uVar18 = *(undefined8 *)(*(long *)(lVar17 + 0x10) + 0x10);
  _os_unfair_lock_lock(uVar18);
  _swift_beginAccess(lVar17 + 0x18,auStack_90,0,0);
  lVar11 = *(long *)(lVar17 + 0x18);
  uVar1 = *(ulong *)(lVar17 + 0x20);
  FUN_10010bd10(lVar11,uVar1);
  _os_unfair_lock_unlock(uVar18);
  uVar18 = *(undefined8 *)(plVar13[2] + 0x10);
  _os_unfair_lock_lock(uVar18);
  FUN_10028ab0c((long)plVar13 + lVar14,lVar15);
  FUN_10007f314(lVar15 + *(int *)(lVar4 + 0x5c),lVar10,&DAT_100a82460,&DAT_1008175c0);
  FUN_1000d27dc(lVar15,FUN_1002c76a8);
  _os_unfair_lock_unlock(uVar18);
  lVar14 = 0;
  FUN_100277ad0();
  lVar4 = lVar10;
  (**(code **)(*(long *)(lVar14 + -8) + 0x30))(lVar10,1,lVar14);
  if ((int)lVar4 == 1) {
    FUN_100040bb4(lVar10,&DAT_100a82460,&DAT_1008175c0);
    lVar4 = local_a8;
    if (uVar1 >> 0x3c < 0xf) {
      uVar2 = (uint)(uVar1 >> 0x20);
      uVar9 = uVar2 >> 0x1e;
      if (uVar2 >> 0x1e < 2) {
        if (uVar9 == 0) {
          if ((uVar1 & 0xff000000000000) == 0) goto LAB_100283d10;
        }
        else {
          if ((long)(int)lVar11 == lVar11 >> 0x20) goto LAB_100283d30;
LAB_100283e68:
          FUN_10010bd10(lVar11,uVar1);
        }
        uVar18 = *(undefined8 *)(lVar4 + 0x28);
        lVar10 = *(long *)(lVar4 + 0x30);
        FUN_10003f030(lVar4 + 0x10,uVar18);
        lVar4 = lVar11;
        uVar8 = uVar1;
        (**(code **)(lVar10 + 8))(lVar11,uVar1,uVar18,lVar10);
        if (unaff_x21 == 0) {
          FUN_100006cc8(lVar11,uVar1);
          FUN_100006cc8(lVar11,uVar1);
          goto LAB_100283d84;
        }
        FUN_100006cc8(lVar11,uVar1);
        goto LAB_100283e18;
      }
      if (uVar9 == 2) {
        if (*(long *)(lVar11 + 0x10) != *(long *)(lVar11 + 0x18)) goto LAB_100283e68;
      }
      else {
LAB_100283d10:
        FUN_100006cc8(lVar11,uVar1);
      }
    }
LAB_100283d30:
    IVar7 = IVar19;
    FUN_100343db8();
    if ((((uint)IVar7 & 0xff) != 2) && ((IVar7 & 1) != 0)) {
LAB_100283d70:
      FUN_100006cc8(lVar11,uVar1);
      lVar4 = 0;
      uVar8 = 0xc000000000000000;
LAB_100283d84:
      FUN_100040bb4(IVar19,&DAT_100a82c30,&DAT_1008171f0);
      *local_b0 = lVar4;
      local_b0[1] = uVar8;
      return;
    }
    if (self != 0) {
      uVar8 = _objc_msgSend(self,"statusCode");
      FUN_100348358(uVar8,lVar4);
      if ((uVar8 & 1) != 0) goto LAB_100283d70;
    }
    puVar6 = &DAT_100a824a8;
    FUN_100005c90(&DAT_100a824a8,FUN_100277ad0,&TargetProtocolConformanceDescriptor_100816c70);
    _swift_allocError(lVar14,puVar6,0,0);
    uVar18 = 0;
    FUN_100278368(0);
    _swift_storeEnumTagMultiPayload(puVar6,uVar18,6);
    _swift_storeEnumTagMultiPayload(puVar6,lVar14,10);
  }
  else {
    puVar6 = &DAT_100a824a8;
    FUN_100005c90(&DAT_100a824a8,FUN_100277ad0,&TargetProtocolConformanceDescriptor_100816c70);
    _swift_allocError(lVar14,puVar6,0,0);
    FUN_10026531c(lVar10);
  }
  _swift_willThrow();
LAB_100283e18:
  FUN_100006cc8(lVar11,uVar1);
  FUN_100040bb4(IVar19,&DAT_100a82c30,&DAT_1008171f0);
  return;
}

