// rea decompile_all
// name: FUN_1003a62dc
// address: 0x1003a62dc
// body: available
// range: 0x1003a62dc-0x1003a63bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003a62dc(undefined8 *param_1)

{
  undefined *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  
  FUN_1002dfb60();
  uVar3 = *param_1;
  puVar1 = &DAT_100a78700;
  FUN_100004bb4(&DAT_100a78700,&DAT_10080d560);
  _swift_allocObject();
  *(undefined8 *)(puVar1 + 0x18) = 2;
  *(undefined8 *)(puVar1 + 0x10) = 1;
  *(undefined **)(puVar1 + 0x38) = &DAT_1009b8348;
  *(undefined ***)(puVar1 + 0x40) = &PTR_PTR_1009b8358;
  FUN_100004bb4(&DAT_100a8b198,&DAT_100820518);
  _swift_allocObject();
  _swift_retain(uVar3);
  pcVar2 = FUN_1003a65c4;
  FUN_10026bd48(FUN_1003a65c4,0,FUN_1003a6600,0,FUN_1000103d0,0,0,uVar3,puVar1,0);
  DAT_100a8b190 = pcVar2;
  return;
}

