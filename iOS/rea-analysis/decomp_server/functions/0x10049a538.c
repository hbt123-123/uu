// rea decompile_all
// name: FUN_10049a538
// address: 0x10049a538
// body: available
// range: 0x10049a538-0x10049a5df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10049a5dc to 0x10049d264 FUN_10049d264 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10049a538(byte *param_1,byte *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  
  uVar1 = 0x100;
  if (param_1[1] == 0) {
    uVar1 = 0;
  }
  uVar2 = 0x10000;
  if (param_1[2] == 0) {
    uVar2 = 0;
  }
  uVar3 = 0x1000000;
  if (param_1[3] == 0) {
    uVar3 = 0;
  }
  uVar4 = 0x100000000;
  if (param_1[4] == 0) {
    uVar4 = 0;
  }
  uVar5 = 0x100;
  if (param_2[1] == 0) {
    uVar5 = 0;
  }
  uVar6 = 0x10000;
  if (param_2[2] == 0) {
    uVar6 = 0;
  }
  uVar7 = 0x1000000;
  if (param_2[3] == 0) {
    uVar7 = 0;
  }
  uVar8 = 0x100000000;
  if (param_2[4] == 0) {
    uVar8 = 0;
  }
  FUN_10049d264(uVar1 | *param_1 | uVar2 | uVar3 | uVar4,*(undefined8 *)(param_1 + 8),
                *(undefined8 *)(param_1 + 0x10),uVar5 | *param_2 | uVar6 | uVar7 | uVar8,
                *(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x10));
  return;
}

