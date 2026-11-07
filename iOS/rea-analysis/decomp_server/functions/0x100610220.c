// rea decompile_all
// name: FUN_100610220
// address: 0x100610220
// body: available
// range: 0x100610220-0x1006102d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100610220(int *param_1,int *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (param_1 != param_2) {
    uVar1 = (uint)*(byte *)(param_1 + 10);
    if (1 < *(byte *)(param_1 + 10)) {
      uVar1 = *param_1 + 2;
    }
    if (uVar1 < 2) {
      FUN_10003f094();
    }
    uVar1 = (uint)*(byte *)(param_2 + 10);
    if (1 < *(byte *)(param_2 + 10)) {
      uVar1 = *param_2 + 2;
    }
    if (uVar1 == 1) {
      uVar2 = *(undefined8 *)param_2;
      uVar4 = *(undefined8 *)(param_2 + 6);
      uVar3 = *(undefined8 *)(param_2 + 4);
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
      *(undefined8 *)param_1 = uVar2;
      *(undefined8 *)(param_1 + 6) = uVar4;
      *(undefined8 *)(param_1 + 4) = uVar3;
      *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
      *(undefined1 *)(param_1 + 10) = 1;
      return;
    }
    if (uVar1 == 0) {
      uVar2 = *(undefined8 *)param_2;
      uVar4 = *(undefined8 *)(param_2 + 6);
      uVar3 = *(undefined8 *)(param_2 + 4);
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
      *(undefined8 *)param_1 = uVar2;
      *(undefined8 *)(param_1 + 6) = uVar4;
      *(undefined8 *)(param_1 + 4) = uVar3;
      *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
      *(undefined1 *)(param_1 + 10) = 0;
      return;
    }
    uVar2 = *(undefined8 *)param_2;
    uVar4 = *(undefined8 *)(param_2 + 6);
    uVar3 = *(undefined8 *)(param_2 + 4);
    *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)param_1 = uVar2;
    *(undefined8 *)(param_1 + 6) = uVar4;
    *(undefined8 *)(param_1 + 4) = uVar3;
    uVar2 = *(undefined8 *)((long)param_2 + 0x19);
    *(undefined8 *)((long)param_1 + 0x21) = *(undefined8 *)((long)param_2 + 0x21);
    *(undefined8 *)((long)param_1 + 0x19) = uVar2;
  }
  return;
}

