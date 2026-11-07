// rea decompile_all
// name: FUN_1003452c4
// address: 0x1003452c4
// body: available
// range: 0x1003452c4-0x1003455bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000100345550) */

void FUN_1003452c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,long param_7)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  long unaff_x21;
  long lVar9;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  long local_80;
  long local_78;
  
  puVar2 = &DAT_100a83428;
  FUN_100004bb4(&DAT_100a83428,&DAT_100817bb0);
  lVar7 = (long)&local_a0 - (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  __s10Foundation3URLVMa();
  lVar9 = *(long *)(lVar3 + -8);
  if (param_5 == 0) {
    local_a0 = param_1;
    uStack_98 = param_2;
    local_90 = param_3;
    uStack_88 = param_6;
    local_80 = lVar7 - (*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
    local_78 = param_5;
    FUN_10007f314(param_4,lVar7,&DAT_100a83428,&DAT_100817bb0);
    lVar4 = lVar7;
    (**(code **)(lVar9 + 0x30))(lVar7,1,lVar3);
    lVar1 = local_80;
    if ((int)lVar4 == 1) {
      FUN_100040bb4(lVar7,&DAT_100a83428,&DAT_100817bb0);
      uVar5 = 0;
      FUN_100277ad0(0);
      puVar8 = &DAT_100a824a8;
      FUN_100005c90(&DAT_100a824a8,FUN_100277ad0,&TargetProtocolConformanceDescriptor_100816c70);
      _swift_allocError(uVar5,puVar8,0,0);
      uVar6 = 0;
      FUN_100278368(0);
      _swift_storeEnumTagMultiPayload(puVar8,uVar6,7);
      _swift_storeEnumTagMultiPayload(puVar8,uVar5,10);
      _swift_willThrow();
      param_5 = local_78;
    }
    else {
      (**(code **)(lVar9 + 0x20))(local_80,lVar7,lVar3);
      uVar5 = 0;
      lVar7 = lVar1;
      __s10Foundation4DataV10contentsOf7optionsAcA3URLVh_So20NSDataReadingOptionsVtKcfC(lVar1,0);
      if (unaff_x21 == 0) {
        (**(code **)(param_7 + 0x10))(local_a0,uStack_98,local_90,lVar7,uVar5,0,uStack_88,param_7);
        FUN_100006cdc(lVar7,uVar5);
        (**(code **)(lVar9 + 8))(local_80,lVar3);
        return;
      }
      uVar5 = 0;
      FUN_100277ad0(0);
      puVar8 = &DAT_100a824a8;
      FUN_100005c90(&DAT_100a824a8,FUN_100277ad0,&TargetProtocolConformanceDescriptor_100816c70);
      _swift_allocError(uVar5,puVar8,0,0);
      (**(code **)(lVar9 + 0x10))(puVar8,lVar1,lVar3);
      uVar6 = 0;
      FUN_100278368(0);
      _swift_storeEnumTagMultiPayload(puVar8,uVar6,0);
      _swift_storeEnumTagMultiPayload(puVar8,uVar5,10);
      _swift_willThrow();
      _swift_errorRelease(unaff_x21);
      (**(code **)(lVar9 + 8))(lVar1,lVar3);
      param_5 = local_78;
    }
  }
  else {
    _swift_willThrow();
  }
  _swift_errorRetain(param_5);
  return;
}

