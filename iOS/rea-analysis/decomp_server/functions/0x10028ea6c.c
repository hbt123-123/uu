// rea decompile_all
// name: thunk_FUN_10028ee74
// address: 0x10028ea6c
// body: available
// range: 0x10028ea6c-0x10028ea6f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void thunk_FUN_10028ee74(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  long unaff_x20;
  
  uVar1 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x10),0x1008fab60,
             &TargetProtocolRequirement_1008fab68);
  uVar2 = 0xff;
  FUN_100277ad0(0xff);
  puVar3 = &DAT_100a824a8;
  FUN_100005c90(&DAT_100a824a8,FUN_100277ad0,&TargetProtocolConformanceDescriptor_100816c70);
  lVar4 = 0;
  FUN_1002d9bd8(0,uVar1,uVar2,puVar3);
  uVar5 = (ulong)*(byte *)(*(long *)(lVar4 + -8) + 0x50);
  (**(code **)(unaff_x20 + 0x20))
            (*(undefined8 *)(unaff_x20 + 0x28),
             unaff_x20 + (uVar5 + 0x30 & (uVar5 ^ 0xffffffffffffffff)));
  return;
}

