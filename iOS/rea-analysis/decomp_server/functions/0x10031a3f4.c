// rea decompile_all
// name: FUN_10031a3f4
// address: 0x10031a3f4
// body: available
// range: 0x10031a3f4-0x10031a54f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_10031a3f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  code *param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  uVar1 = 0xff;
  (*param_5)(0xff,param_4);
  uVar2 = 0xff;
  FUN_100277ad0(0xff);
  puVar3 = &DAT_100a824a8;
  FUN_100005c90(&DAT_100a824a8,FUN_100277ad0,&TargetProtocolConformanceDescriptor_100816c70);
  uVar4 = 0xff;
  __ss6ResultOMa(0xff,param_4,uVar2,puVar3);
  _swift_getWitnessTable(param_6,uVar1);
  lVar5 = 0;
  __s7Combine10PublishersO10MapKeyPathVMa(0,uVar1,uVar4,param_6);
  lVar9 = *(long *)(lVar5 + -8);
  lVar8 = (long)&local_80 - (*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_80 = param_4;
  local_78 = param_1;
  uStack_70 = param_2;
  local_68 = param_3;
  _swift_getKeyPath(param_7,&local_80);
  __s7Combine9PublisherPAAE3mapyAA10PublishersO10MapKeyPathVy_xqd__Gs0fG0Cy6OutputQzqd__GlF(lVar8);
  _swift_release(param_7);
  puVar6 = PTR___s7Combine10PublishersO10MapKeyPathVy_xq_GAA9PublisherAAMc_1009954e8;
  _swift_getWitnessTable
            (PTR___s7Combine10PublishersO10MapKeyPathVy_xq_GAA9PublisherAAMc_1009954e8,lVar5);
  lVar7 = lVar5;
  __s7Combine9PublisherPAAE010eraseToAnyB0AA0eB0Vy6OutputQz7FailureQzGyF(lVar5,puVar6);
  (**(code **)(lVar9 + 8))(lVar8,lVar5);
  return lVar7;
}

