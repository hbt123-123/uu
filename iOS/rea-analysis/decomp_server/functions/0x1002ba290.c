// rea decompile_all
// name: FUN_1002ba290
// address: 0x1002ba290
// body: available
// range: 0x1002ba290-0x1002ba39f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002ba290(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar3 = 0xff;
  _swift_getAssociatedTypeWitness(0xff,uVar2,uVar1,0x1008fab88,&TargetProtocolRequirement_1008fab90)
  ;
  uVar4 = 0xff;
  FUN_100277ad0(0xff);
  puVar5 = &DAT_100a824a8;
  FUN_100005c90(&DAT_100a824a8,FUN_100277ad0,&TargetProtocolConformanceDescriptor_100816c70);
  lVar6 = 0;
  FUN_1002d9e30(0,uVar3,uVar4,puVar5);
  uVar7 = (ulong)*(byte *)(*(long *)(lVar6 + -8) + 0x50);
  uVar8 = uVar7 + 0x38 & (uVar7 ^ 0xffffffffffffffff);
  uVar7 = *(long *)(*(long *)(lVar6 + -8) + 0x40) + uVar8 + 7 & 0xfffffffffffffff8;
  puVar5 = (undefined8 *)(unaff_x20 + uVar7 + 0x10);
  FUN_1002b3560(*(undefined8 *)(unaff_x20 + uVar7),*(undefined8 *)(unaff_x20 + uVar7 + 8),param_1,
                param_2,*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),unaff_x20 + uVar8,*puVar5,puVar5[1],
                *(undefined8 *)(unaff_x20 + uVar7 + 0x20),uVar1,uVar2);
  return;
}

