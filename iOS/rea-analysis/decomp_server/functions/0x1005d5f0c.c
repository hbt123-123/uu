// rea decompile_all
// name: FUN_1005d5f0c
// address: 0x1005d5f0c
// body: available
// range: 0x1005d5f0c-0x1005d5fcb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1005d5f0c(int *param_1,int *param_2)

{
  undefined1 uVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (param_1 != param_2) {
    uVar2 = (uint)*(byte *)(param_1 + 0xc);
    if (1 < *(byte *)(param_1 + 0xc)) {
      uVar2 = *param_1 + 2;
    }
    if (uVar2 == 1) {
      FUN_10003f094();
    }
    else if (uVar2 == 0) {
      FUN_100006cdc(*(undefined8 *)param_1,*(undefined8 *)(param_1 + 2));
    }
    uVar2 = (uint)*(byte *)(param_2 + 0xc);
    if (1 < *(byte *)(param_2 + 0xc)) {
      uVar2 = *param_2 + 2;
    }
    if (uVar2 == 1) {
      uVar3 = *(undefined8 *)param_2;
      uVar5 = *(undefined8 *)(param_2 + 6);
      uVar4 = *(undefined8 *)(param_2 + 4);
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
      *(undefined8 *)param_1 = uVar3;
      *(undefined8 *)(param_1 + 6) = uVar5;
      *(undefined8 *)(param_1 + 4) = uVar4;
      uVar3 = *(undefined8 *)(param_2 + 8);
      *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_2 + 10);
      *(undefined8 *)(param_1 + 8) = uVar3;
      uVar1 = 1;
    }
    else {
      if (uVar2 == 0) {
        uVar3 = *(undefined8 *)param_2;
        *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
        *(undefined8 *)param_1 = uVar3;
        *(undefined1 *)(param_1 + 0xc) = 0;
        return;
      }
      uVar3 = *(undefined8 *)param_2;
      uVar5 = *(undefined8 *)(param_2 + 6);
      uVar4 = *(undefined8 *)(param_2 + 4);
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
      *(undefined8 *)param_1 = uVar3;
      *(undefined8 *)(param_1 + 6) = uVar5;
      *(undefined8 *)(param_1 + 4) = uVar4;
      uVar3 = *(undefined8 *)(param_2 + 8);
      *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_2 + 10);
      *(undefined8 *)(param_1 + 8) = uVar3;
      uVar1 = (undefined1)param_2[0xc];
    }
    *(undefined1 *)(param_1 + 0xc) = uVar1;
  }
  return;
}

