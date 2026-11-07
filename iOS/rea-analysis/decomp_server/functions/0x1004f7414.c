// rea decompile_all
// name: FUN_1004f7414
// address: 0x1004f7414
// body: available
// range: 0x1004f7414-0x1004f74ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1004f7414(int *param_1,int *param_2)

{
  undefined1 uVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (param_1 != param_2) {
    uVar2 = (uint)*(byte *)(param_1 + 10);
    if (2 < *(byte *)(param_1 + 10)) {
      uVar2 = *param_1 + 3;
    }
    if (uVar2 == 2) {
      _swift_bridgeObjectRelease(*(undefined8 *)param_1);
    }
    else if (uVar2 == 1) {
      FUN_10003f094();
    }
    else {
      FUN_100006cdc(*(undefined8 *)param_1,*(undefined8 *)(param_1 + 2));
    }
    uVar2 = (uint)*(byte *)(param_2 + 10);
    if (2 < *(byte *)(param_2 + 10)) {
      uVar2 = *param_2 + 3;
    }
    if (uVar2 == 2) {
      uVar3 = *(undefined8 *)param_2;
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
      *(undefined8 *)param_1 = uVar3;
      *(char *)(param_1 + 4) = (char)param_2[4];
      uVar1 = 2;
    }
    else if (uVar2 == 1) {
      uVar3 = *(undefined8 *)param_2;
      uVar5 = *(undefined8 *)(param_2 + 6);
      uVar4 = *(undefined8 *)(param_2 + 4);
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
      *(undefined8 *)param_1 = uVar3;
      *(undefined8 *)(param_1 + 6) = uVar5;
      *(undefined8 *)(param_1 + 4) = uVar4;
      *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
      uVar3 = *(undefined8 *)param_2;
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
      *(undefined8 *)param_1 = uVar3;
    }
    *(undefined1 *)(param_1 + 10) = uVar1;
  }
  return;
}

