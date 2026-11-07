// rea decompile_all
// name: FUN_1003ef8f8
// address: 0x1003ef8f8
// body: available
// range: 0x1003ef8f8-0x1003ef967 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003ef8f8(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *unaff_x20;
  
  uVar3 = *(undefined8 *)(*unaff_x20 + 0x50);
  puVar1 = &DAT_100a75b40;
  FUN_100004c48(&DAT_100a75b40,&DAT_100809bd0);
  uVar2 = 0xff;
  __ss6ResultOMa(0xff,uVar3,puVar1,PTR___ss5ErrorWS_100995c48);
  FUN_100614b6c(0,uVar2);
  FUN_1006108b8(FUN_1003efbe8);
  return;
}

