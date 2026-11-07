// rea decompile_all
// name: FUN_1002a6d00
// address: 0x1002a6d00
// body: available
// range: 0x1002a6d00-0x1002a6dbf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1002a6dbc to 0x100294938 FUN_100294938 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002a6d00(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar3 = 0xff;
  _swift_getAssociatedTypeWitness(0xff,uVar2,uVar1,0x1008f871c,&TargetProtocolRequirement_1008f8724)
  ;
  uVar4 = 0xff;
  FUN_100277ad0(0xff);
  puVar5 = &DAT_100a824a8;
  FUN_100005c90(&DAT_100a824a8,FUN_100277ad0,&TargetProtocolConformanceDescriptor_100816c70);
  lVar6 = 0;
  __ss6ResultOMa(0,uVar3,uVar4,puVar5);
  uVar7 = (ulong)*(byte *)(*(long *)(lVar6 + -8) + 0x50);
  uVar7 = uVar7 + 0x30 & (uVar7 ^ 0xffffffffffffffff);
  FUN_100294938(*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                unaff_x20 + uVar7,
                *(undefined8 *)
                 (unaff_x20 +
                 (*(long *)(*(long *)(lVar6 + -8) + 0x40) + uVar7 + 7 & 0xfffffffffffffff8)),uVar1,
                uVar2);
  return;
}

