// rea decompile_all
// name: FUN_100344a5c
// address: 0x100344a5c
// body: available
// range: 0x100344a5c-0x100344fd7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000100344f64) */

void FUN_100344a5c(long *param_1,undefined8 param_2,ID param_3,undefined8 param_4,long param_5)

{
  uint uVar1;
  undefined1 *puVar2;
  long *plVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  undefined8 *puVar10;
  ulong uVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  long unaff_x20;
  long lVar15;
  long unaff_x21;
  long lVar16;
  ulong uVar17;
  long lVar18;
  undefined1 auStack_c0 [8];
  long local_b8;
  ulong uStack_b0;
  long local_a8;
  long local_a0;
  undefined1 *local_98;
  long *plStack_90;
  long local_88;
  long local_80;
  
  lVar4 = 0;
  __s10Foundation10URLRequestVMa();
  lVar15 = *(long *)(lVar4 + -8);
  lVar13 = *(long *)(lVar15 + 0x40);
  puVar5 = &DAT_100a82c30;
  FUN_100004bb4(&DAT_100a82c30,&DAT_1008171f0);
  lVar16 = (long)(auStack_c0 + -(lVar13 + 0xfU & 0xfffffffffffffff0)) -
           (*(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = &DAT_100a83428;
  FUN_100004bb4(&DAT_100a83428,&DAT_100817bb0);
  lVar18 = lVar16 - (*(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = 0;
  __s10Foundation3URLVMa();
  lVar14 = *(long *)(lVar6 + -8);
  if (param_5 != 0) {
    _swift_willThrow();
    goto LAB_100344d0c;
  }
  local_a8 = lVar16;
  local_a0 = lVar15;
  local_98 = auStack_c0 + -(lVar13 + 0xfU & 0xfffffffffffffff0);
  plStack_90 = param_1;
  local_88 = lVar18 - (*(long *)(lVar14 + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_80 = param_5;
  FUN_10007f314(param_4,lVar18,&DAT_100a83428,&DAT_100817bb0);
  lVar15 = lVar18;
  (**(code **)(lVar14 + 0x30))(lVar18,1,lVar6);
  lVar13 = local_88;
  if ((int)lVar15 == 1) {
    FUN_100040bb4(lVar18,&DAT_100a83428,&DAT_100817bb0);
    uVar7 = 0;
    FUN_100277ad0(0);
    puVar10 = &DAT_100a824a8;
    FUN_100005c90(&DAT_100a824a8,FUN_100277ad0,&TargetProtocolConformanceDescriptor_100816c70);
    _swift_allocError(uVar7,puVar10,0,0);
    uVar8 = 0;
    FUN_100278368(0);
    _swift_storeEnumTagMultiPayload(puVar10,uVar8,7);
    _swift_storeEnumTagMultiPayload(puVar10,uVar7,10);
    _swift_willThrow();
    param_5 = local_80;
    goto LAB_100344d0c;
  }
  (**(code **)(lVar14 + 0x20))(local_88,lVar18,lVar6);
  uVar11 = 0;
  lVar15 = lVar13;
  __s10Foundation4DataV10contentsOf7optionsAcA3URLVh_So20NSDataReadingOptionsVtKcfC();
  param_5 = local_80;
  plVar3 = plStack_90;
  puVar2 = local_98;
  if (unaff_x21 != 0) {
    uVar7 = 0;
    FUN_100277ad0(0);
    puVar10 = &DAT_100a824a8;
    FUN_100005c90(&DAT_100a824a8,FUN_100277ad0,&TargetProtocolConformanceDescriptor_100816c70);
    _swift_allocError(uVar7,puVar10,0,0);
    (**(code **)(lVar14 + 0x10))(puVar10,lVar13,lVar6);
    uVar8 = 0;
    FUN_100278368(0);
    _swift_storeEnumTagMultiPayload(puVar10,uVar8,0);
    _swift_storeEnumTagMultiPayload(puVar10,uVar7,10);
    _swift_willThrow();
    _swift_errorRelease(unaff_x21);
    (**(code **)(lVar14 + 8))(lVar13,lVar6);
    param_5 = local_80;
    goto LAB_100344d0c;
  }
  uVar1 = (uint)(uVar11 >> 0x20);
  uVar12 = uVar1 >> 0x1e;
  if (uVar1 >> 0x1e < 2) {
    if (uVar12 == 0) {
      if ((uVar11 & 0xff000000000000) == 0) goto LAB_100344d84;
    }
    else {
      lVar13 = (long)(int)lVar15;
      lVar16 = lVar15 >> 0x20;
LAB_100344db0:
      if (lVar13 == lVar16) goto LAB_100344dbc;
      FUN_100008184();
    }
    uVar7 = *(undefined8 *)(unaff_x20 + 0x28);
    lVar13 = *(long *)(unaff_x20 + 0x30);
    FUN_10003f030(unaff_x20 + 0x10,uVar7);
    lVar4 = lVar15;
    uVar17 = uVar11;
    (**(code **)(lVar13 + 8))(lVar15,uVar11,uVar7,lVar13);
    FUN_100006cdc(lVar15,uVar11);
    goto LAB_100344fb8;
  }
  if (uVar12 == 2) {
    lVar13 = *(long *)(lVar15 + 0x10);
    lVar16 = *(long *)(lVar15 + 0x18);
    goto LAB_100344db0;
  }
LAB_100344d84:
  FUN_100006cdc();
LAB_100344dbc:
  lVar16 = local_a0;
  lVar13 = local_a8;
  local_b8 = lVar15;
  uStack_b0 = uVar11;
  FUN_10007f314(param_2,local_a8,&DAT_100a82c30,&DAT_1008171f0);
  lVar15 = lVar13;
  (**(code **)(lVar16 + 0x30))(lVar13,1,lVar4);
  if ((int)lVar15 != 1) {
    puVar9 = puVar2;
    (**(code **)(lVar16 + 0x20))(puVar2,lVar13,lVar4);
    __s10Foundation10URLRequestV10httpMethodSSSgvg();
    (**(code **)(lVar16 + 8))(puVar2,lVar4);
    if (lVar13 == 0) goto LAB_100344e58;
    FUN_100153074(puVar9,lVar13,*(undefined8 *)(unaff_x20 + 0x40));
    _swift_bridgeObjectRelease(lVar13);
    if (((ulong)puVar9 & 1) == 0) goto LAB_100344e58;
LAB_100344e80:
    lVar4 = 0;
    uVar17 = 0xc000000000000000;
    lVar15 = local_b8;
    uVar11 = uStack_b0;
LAB_100344fb8:
    FUN_100006cdc(lVar15,uVar11);
    *plVar3 = lVar4;
    plVar3[1] = uVar17;
    (**(code **)(lVar14 + 8))(local_88,lVar6);
    return;
  }
LAB_100344e58:
  if (param_3 != 0) {
    uVar11 = _objc_msgSend(param_3,"statusCode");
    FUN_1003440c0(uVar11,unaff_x20);
    if ((uVar11 & 1) != 0) goto LAB_100344e80;
  }
  uVar7 = 0;
  FUN_100277ad0(0);
  puVar10 = &DAT_100a824a8;
  FUN_100005c90(&DAT_100a824a8,FUN_100277ad0,&TargetProtocolConformanceDescriptor_100816c70);
  _swift_allocError(uVar7,puVar10,0,0);
  uVar8 = 0;
  FUN_100278368(0);
  _swift_storeEnumTagMultiPayload(puVar10,uVar8,6);
  _swift_storeEnumTagMultiPayload(puVar10,uVar7,10);
  _swift_willThrow();
  uVar11 = uStack_b0;
  lVar4 = local_b8;
  _swift_willThrow();
  FUN_100006cdc(lVar4,uVar11);
  (**(code **)(lVar14 + 8))(local_88,lVar6);
LAB_100344d0c:
  _swift_errorRetain(param_5);
  return;
}

