// rea decompile_all
// name: FUN_100333a80
// address: 0x100333a80
// body: available
// range: 0x100333a80-0x100333b03 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100333a80(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  byte bVar3;
  undefined *puVar4;
  long unaff_x20;
  undefined8 uVar5;
  
  puVar4 = &DAT_100a83900;
  FUN_100004bb4(&DAT_100a83900,&DAT_100817e30);
  bVar3 = *(byte *)(*(long *)(puVar4 + -8) + 0x50);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(long *)(param_1 + 0x20);
  FUN_10003f030(param_1,uVar1);
  (**(code **)(lVar2 + 0x160))
            (uVar5,unaff_x20 + ((ulong)bVar3 + 0x18 & ((ulong)bVar3 ^ 0xffffffffffffffff)),uVar1,
             lVar2);
  return;
}

