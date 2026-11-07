// rea decompile_all
// name: FUN_100344fd8
// address: 0x100344fd8
// body: available
// range: 0x100344fd8-0x1003452c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000100345244) */

undefined1  [16]
FUN_100344fd8(undefined8 param_1,undefined8 *param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long unaff_x21;
  long lVar9;
  undefined1 *puVar10;
  undefined1 auVar11 [16];
  undefined1 auStack_80 [8];
  undefined8 local_78;
  undefined8 *puStack_70;
  
  puVar1 = &DAT_100a83428;
  FUN_100004bb4(&DAT_100a83428,&DAT_100817bb0);
  puVar10 = auStack_80 + -(*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  __s10Foundation3URLVMa();
  lVar9 = *(long *)(lVar2 + -8);
  lVar8 = (long)puVar10 - (*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  if (param_4 == 0) {
    local_78 = param_1;
    puStack_70 = param_2;
    FUN_10007f314(param_3,puVar10,&DAT_100a83428,&DAT_100817bb0);
    puVar3 = puVar10;
    (**(code **)(lVar9 + 0x30))(puVar10,1,lVar2);
    if ((int)puVar3 == 1) {
      FUN_100040bb4(puVar10,&DAT_100a83428,&DAT_100817bb0);
      uVar4 = 0;
      FUN_100277ad0(0);
      puVar5 = &DAT_100a824a8;
      FUN_100005c90(&DAT_100a824a8,FUN_100277ad0,&TargetProtocolConformanceDescriptor_100816c70);
      _swift_allocError(uVar4,puVar5,0,0);
      uVar6 = 0;
      FUN_100278368(0);
      _swift_storeEnumTagMultiPayload(puVar5,uVar6,7);
      _swift_storeEnumTagMultiPayload(puVar5,uVar4,10);
      _swift_willThrow();
    }
    else {
      (**(code **)(lVar9 + 0x20))(lVar8,puVar10,lVar2);
      uVar4 = 0;
      lVar7 = lVar8;
      __s10Foundation4DataV10contentsOf7optionsAcA3URLVh_So20NSDataReadingOptionsVtKcfC(lVar8,0);
      if (unaff_x21 == 0) {
        param_1 = local_78;
        param_2 = puStack_70;
        FUN_100345d38(local_78,puStack_70,lVar7,uVar4,0);
        FUN_100006cdc(lVar7,uVar4);
        (**(code **)(lVar9 + 8))(lVar8,lVar2);
        goto LAB_100345270;
      }
      param_1 = 0;
      FUN_100277ad0(0);
      param_2 = &DAT_100a824a8;
      FUN_100005c90(&DAT_100a824a8,FUN_100277ad0,&TargetProtocolConformanceDescriptor_100816c70);
      _swift_allocError(param_1,param_2,0,0);
      (**(code **)(lVar9 + 0x10))(param_2,lVar8,lVar2);
      uVar4 = 0;
      FUN_100278368(0);
      _swift_storeEnumTagMultiPayload(param_2,uVar4,0);
      _swift_storeEnumTagMultiPayload(param_2,param_1,10);
      _swift_willThrow();
      _swift_errorRelease();
      (**(code **)(lVar9 + 8))(lVar8,lVar2);
    }
  }
  else {
    _swift_willThrow();
  }
  _swift_errorRetain(param_4);
LAB_100345270:
  auVar11._8_8_ = param_2;
  auVar11._0_8_ = param_1;
  return auVar11;
}

