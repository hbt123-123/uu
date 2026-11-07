// rea decompile_all
// name: FUN_10033179c
// address: 0x10033179c
// body: available
// range: 0x10033179c-0x100331857 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10033179c(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = 0xff;
  FUN_100277ad0(0xff);
  puVar2 = &DAT_100a824a8;
  FUN_100005c90(&DAT_100a824a8,FUN_100277ad0,&TargetProtocolConformanceDescriptor_100816c70);
  lVar3 = 0;
  FUN_1002d9bd8(0,uVar5,uVar1,puVar2);
  uVar4 = (ulong)*(byte *)(*(long *)(lVar3 + -8) + 0x50);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  lVar3 = *(long *)(param_1 + 0x20);
  FUN_10003f030(param_1,uVar1);
  (**(code **)(lVar3 + 0x118))
            (uVar6,unaff_x20 + (uVar4 + 0x20 & (uVar4 ^ 0xffffffffffffffff)),uVar5,uVar1,lVar3);
  return;
}

