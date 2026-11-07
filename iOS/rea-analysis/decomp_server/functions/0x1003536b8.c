// rea decompile_all
// name: FUN_1003536b8
// address: 0x1003536b8
// body: available
// range: 0x1003536b8-0x10035377b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003536b8(ulong param_1)

{
  undefined8 uVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  long unaff_x20;
  undefined8 local_40;
  undefined8 uStack_38;
  
  puVar3 = &local_40;
  bVar2 = (param_1 & 1) != 0;
  uVar1 = 0x30;
  if (bVar2) {
    uVar1 = 0x31;
  }
  local_40 = 0x65757274;
  if (!bVar2) {
    local_40 = 0x65736c6166;
  }
  uStack_38 = 0xe400000000000000;
  if (!bVar2) {
    uStack_38 = 0xe500000000000000;
  }
  if (*(char *)(unaff_x20 + 0x28) == '\0') {
    uStack_38 = 0xe100000000000000;
    local_40 = uVar1;
  }
  puVar4 = PTR___sSSN_1009957f8;
  __sSSySSxcs25LosslessStringConvertibleRzSTRzSJ7ElementSTRtzlufC
            (&local_40,PTR___sSSN_1009957f8,PTR___sSSs25LosslessStringConvertiblesWP_100995838,
             PTR___sSSSTsWP_100995820);
  FUN_1003539b8(param_1,puVar3,puVar4);
  _swift_bridgeObjectRelease(puVar4);
  return;
}

