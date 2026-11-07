// rea decompile_all
// name: FUN_100342c28
// address: 0x100342c28
// body: available
// range: 0x100342c28-0x100342cbf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100342c28(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 local_30;
  undefined8 local_28;
  undefined *local_20;
  undefined8 local_18;
  
  if (DAT_100a87110 != 0) {
    return;
  }
  uVar1 = 0xff;
  FUN_1002d4054();
  uVar2 = 0xff;
  local_30 = uVar1;
  FUN_1002ef3cc();
  puVar3 = &DAT_100a82488;
  local_28 = uVar2;
  FUN_100004c48(&DAT_100a82488,&DAT_100816c20);
  uVar1 = 0xff;
  local_20 = puVar3;
  FUN_1002a5c58();
  uVar2 = 0x44000004;
  local_18 = uVar1;
  _swift_getFunctionTypeMetadata(0x44000004,&local_30,0,PTR___sytN_100995e90 + 8);
  DAT_100a87110 = uVar2;
  return;
}

