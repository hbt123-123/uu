// rea decompile_all
// name: FUN_100181c44
// address: 0x100181c44
// body: available
// range: 0x100181c44-0x100181cff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100181c44(undefined1 *param_1,long param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte bVar5;
  ulong uVar6;
  
  uVar6 = *(ulong *)(param_2 + 0x30) >> 0x3c;
  uVar1 = 0;
  if (uVar6 < 0xf) {
    uVar1 = *(undefined8 *)(param_2 + 0x28);
  }
  uVar2 = 0xc000000000000000;
  if (uVar6 < 0xf) {
    uVar2 = *(ulong *)(param_2 + 0x30);
  }
  uVar3 = 0;
  if (uVar6 < 0xf) {
    uVar3 = *(undefined8 *)(param_2 + 0x20);
  }
  thunk_FUN_100040b80(*(undefined8 *)(param_2 + 0x20));
  bVar5 = 0;
  switchD_10004048c::caseD_6d(0,0,0xf000000000000000);
  FUN_10017cb14();
  uVar4 = 0;
  if ((param_4 & 1) == 0) {
    uVar4 = param_3;
  }
  *param_1 = 0;
  *(undefined8 *)(param_1 + 8) = param_5;
  param_1[0x10] = bVar5 & 1;
  *(undefined8 *)(param_1 + 0x18) = uVar4;
  *(undefined8 *)(param_1 + 0x28) = 0xc000000000000000;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x30) = uVar3;
  *(undefined8 *)(param_1 + 0x38) = uVar1;
  *(ulong *)(param_1 + 0x40) = uVar2;
  return;
}

