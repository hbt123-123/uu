// rea decompile_all
// name: FUN_100332d98
// address: 0x100332d98
// body: available
// range: 0x100332d98-0x100332e27 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100332d98(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  byte bVar5;
  undefined *puVar6;
  long unaff_x20;
  
  puVar6 = &DAT_100a838c8;
  FUN_100004bb4(&DAT_100a838c8,&DAT_100819010);
  bVar5 = *(byte *)(*(long *)(puVar6 + -8) + 0x50);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  lVar4 = *(long *)(param_1 + 0x20);
  FUN_10003f030(param_1,uVar2);
  (**(code **)(lVar4 + 0x148))
            (uVar1,uVar3,unaff_x20 + ((ulong)bVar5 + 0x20 & ((ulong)bVar5 ^ 0xffffffffffffffff)),
             uVar2,lVar4);
  return;
}

