// rea decompile_all
// name: FUN_1002949e8
// address: 0x1002949e8
// body: available
// range: 0x1002949e8-0x100294b83 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002949e8(code *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 local_80;
  undefined8 local_78;
  code *local_70;
  undefined1 auStack_58 [8];
  
  uVar1 = 0xff;
  local_80 = param_4;
  local_78 = param_2;
  local_70 = param_1;
  _swift_getAssociatedTypeWitness
            (0xff,param_6,param_5,0x1008f871c,&TargetProtocolRequirement_1008f8724);
  uVar2 = 0xff;
  FUN_100277ad0(0xff);
  puVar3 = &DAT_100a824a8;
  FUN_100005c90(&DAT_100a824a8,FUN_100277ad0,&TargetProtocolConformanceDescriptor_100816c70);
  lVar4 = 0;
  FUN_10028fd24(0,uVar1,uVar2,puVar3);
  lVar8 = (long)&local_80 - (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0;
  FUN_10029ca28(0,uVar1,uVar2,puVar3);
  lVar9 = *(long *)(lVar5 + -8);
  lVar7 = lVar8 - (*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = 0;
  __ss6ResultOMa(0,uVar1,uVar2,puVar3);
  (**(code **)(*(long *)(lVar6 + -8) + 0x10))(lVar8,param_3,lVar6);
  _swift_storeEnumTagMultiPayload(lVar8,lVar4,0);
  _swift_weakInit(auStack_58,0);
  _swift_weakAssign();
  FUN_10028febc(lVar7,lVar8,auStack_58,uVar1,uVar2,puVar3);
  (*local_70)(lVar7);
  (**(code **)(lVar9 + 8))(lVar7,lVar5);
  return;
}

