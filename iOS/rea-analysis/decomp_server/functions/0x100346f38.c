// rea decompile_all
// name: FUN_100346f38
// address: 0x100346f38
// body: available
// range: 0x100346f38-0x1003473f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000100347280) */

void FUN_100346f38(undefined8 param_1,ulong param_2,long param_3,long param_4,ulong param_5,
                  long param_6)

{
  uint uVar1;
  long lVar2;
  TargetProtocolConformanceDescriptor *pTVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  code *pcVar15;
  long *unaff_x20;
  long unaff_x21;
  long lVar16;
  long lVar17;
  long local_90;
  long local_88;
  ulong local_80;
  long local_78;
  long local_70;
  
  lVar17 = *unaff_x20;
  lVar16 = *(long *)(lVar17 + 0x50);
  lVar2 = 0;
  __sSqMa(0,lVar16);
  lVar12 = *(long *)(lVar2 + -8);
  uVar8 = (long)&local_90 - (*(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar13 = *(long *)(lVar16 + -8);
  lVar14 = *(long *)(lVar13 + 0x40);
  lVar11 = uVar8 - (lVar14 + 0xfU & 0xfffffffffffffff0);
  if (param_6 != 0) {
    _swift_willThrow();
    goto LAB_1003473c0;
  }
  local_88 = lVar11;
  local_80 = param_2;
  local_78 = param_3;
  local_70 = param_6;
  if (param_5 >> 0x3c < 0xf) {
    uVar1 = (uint)(param_5 >> 0x20);
    uVar10 = uVar1 >> 0x1e;
    if (uVar1 >> 0x1e < 2) {
      if (uVar10 == 0) {
        if ((param_5 & 0xff000000000000) != 0) goto LAB_1003471d8;
        goto LAB_10034702c;
      }
      if ((long)(int)param_4 != param_4 >> 0x20) goto LAB_1003471c8;
    }
    else if (uVar10 == 2) {
      if (*(long *)(param_4 + 0x10) != *(long *)(param_4 + 0x18)) {
LAB_1003471c8:
        FUN_10010bd10(param_4,param_5);
LAB_1003471d8:
        lVar2 = unaff_x20[5];
        lVar11 = unaff_x20[6];
        FUN_10003f030(unaff_x20 + 2,lVar2);
        lVar12 = param_4;
        uVar8 = param_5;
        (**(code **)(lVar11 + 8))(param_4,param_5,lVar2,lVar11);
        FUN_100006cc8(param_4,param_5);
        param_6 = local_70;
        if (unaff_x21 == 0) {
          lVar2 = unaff_x20[10];
          lVar11 = unaff_x20[0xb];
          FUN_10003f030(unaff_x20 + 7,lVar2);
          (**(code **)(lVar11 + 8))
                    (param_1,lVar16,lVar12,uVar8,lVar16,*(undefined8 *)(lVar17 + 0x58),lVar2,lVar11)
          ;
          FUN_100006cdc(lVar12,uVar8);
          return;
        }
        goto LAB_1003473c0;
      }
    }
    else {
LAB_10034702c:
      local_90 = lVar2;
      FUN_100006cc8(param_4,param_5);
      lVar2 = local_90;
    }
  }
  pTVar3 = &TargetProtocolConformanceDescriptor_10081b3b8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_10081b3b8,lVar17);
  uVar4 = local_80;
  FUN_100344304(local_80,local_78,lVar17,pTVar3);
  if ((uVar4 & 1) == 0) {
    uVar6 = 0;
    FUN_100277ad0(0);
    plVar5 = &DAT_100a824a8;
    FUN_100005c90(&DAT_100a824a8,FUN_100277ad0,&TargetProtocolConformanceDescriptor_100816c70);
    _swift_allocError(uVar6,plVar5,0,0);
    uVar7 = 0;
    FUN_100278368(0);
    uVar9 = 6;
  }
  else {
    lVar17 = lVar16;
    _swift_conformsToProtocol(lVar16,&TargetProtocolDescriptor_1008fad2c);
    if (lVar17 != 0) {
      lVar14 = lVar11 - (lVar14 + 0xfU & 0xfffffffffffffff0);
      local_78 = lVar11;
      (**(code **)(lVar17 + 8))(lVar14,lVar16,lVar17);
      uVar4 = uVar8;
      _swift_dynamicCast(uVar8,lVar14,lVar16,lVar16,6);
      if ((uVar4 & 1) != 0) {
        (**(code **)(lVar13 + 0x38))(uVar8,0,1,lVar16);
        lVar2 = local_88;
        pcVar15 = *(code **)(lVar13 + 0x20);
        (*pcVar15)(local_88,uVar8,lVar16);
        (*pcVar15)(param_1,lVar2,lVar16);
        return;
      }
      (**(code **)(lVar13 + 0x38))(uVar8,1,1,lVar16);
      (**(code **)(lVar12 + 8))(uVar8,lVar2);
    }
    uVar6 = 0;
    FUN_100277ad0(0);
    plVar5 = &DAT_100a824a8;
    FUN_100005c90(&DAT_100a824a8,FUN_100277ad0,&TargetProtocolConformanceDescriptor_100816c70);
    _swift_allocError(uVar6,plVar5,0,0);
    lVar2 = 0;
    __ss9_typeName_9qualifiedSSypXp_SbtF();
    *plVar5 = lVar16;
    plVar5[1] = lVar2;
    uVar7 = 0;
    FUN_100278368(0);
    uVar9 = 5;
  }
  _swift_storeEnumTagMultiPayload(plVar5,uVar7,uVar9);
  _swift_storeEnumTagMultiPayload(plVar5,uVar6,10);
  _swift_willThrow();
  param_6 = local_70;
LAB_1003473c0:
  _swift_errorRetain(param_6);
  return;
}

