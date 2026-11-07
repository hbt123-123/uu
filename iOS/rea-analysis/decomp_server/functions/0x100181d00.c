// rea decompile_all
// name: FUN_100181d00
// address: 0x100181d00
// body: available
// range: 0x100181d00-0x100181dc3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100181d00(undefined4 *param_1,undefined4 *param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  byte bVar5;
  ulong uVar6;
  undefined4 uVar7;
  
  uVar6 = *(ulong *)(param_2 + 0xe) >> 0x3c;
  uVar1 = 0;
  if (uVar6 < 0xf) {
    uVar1 = *(undefined8 *)(param_2 + 0xc);
  }
  uVar2 = 0xc000000000000000;
  if (uVar6 < 0xf) {
    uVar2 = *(ulong *)(param_2 + 0xe);
  }
  uVar3 = 0;
  if (uVar6 < 0xf) {
    uVar3 = *(undefined8 *)(param_2 + 10);
  }
  thunk_FUN_100040b80();
  bVar5 = 0;
  switchD_10004048c::caseD_6d(0,0,0xf000000000000000);
  uVar4 = *param_2;
  FUN_10017cb14();
  uVar7 = 0;
  if ((param_4 & 1) == 0) {
    uVar7 = (undefined4)((ulong)param_3 >> 0x20);
  }
  *param_1 = uVar4;
  *(undefined8 *)(param_1 + 2) = param_5;
  *(byte *)(param_1 + 4) = bVar5 & 1;
  param_1[5] = uVar7;
  *(undefined8 *)(param_1 + 8) = 0xc000000000000000;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 10) = uVar3;
  *(undefined8 *)(param_1 + 0xc) = uVar1;
  *(ulong *)(param_1 + 0xe) = uVar2;
  return;
}

