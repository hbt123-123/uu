// rea decompile_all
// name: FUN_10061012c
// address: 0x10061012c
// body: available
// range: 0x10061012c-0x10061020b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_10061012c(int *param_1,int *param_2)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  if (param_1 != param_2) {
    uVar2 = (uint)*(byte *)(param_1 + 10);
    if (1 < *(byte *)(param_1 + 10)) {
      uVar2 = *param_1 + 2;
    }
    if (uVar2 < 2) {
      FUN_10003f094();
    }
    uVar2 = (uint)*(byte *)(param_2 + 10);
    if (1 < *(byte *)(param_2 + 10)) {
      uVar2 = *param_2 + 2;
    }
    if (uVar2 == 1) {
      lVar1 = *(long *)(param_2 + 6);
      *(long *)(param_1 + 6) = lVar1;
      (*(code *)**(undefined8 **)(lVar1 + -8))(param_1,param_2);
      *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
      *(undefined1 *)(param_1 + 10) = 1;
    }
    else if (uVar2 == 0) {
      lVar1 = *(long *)(param_2 + 6);
      *(long *)(param_1 + 6) = lVar1;
      (*(code *)**(undefined8 **)(lVar1 + -8))(param_1,param_2);
      *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
      *(undefined1 *)(param_1 + 10) = 0;
    }
    else {
      uVar4 = *(undefined8 *)(param_2 + 2);
      uVar3 = *(undefined8 *)param_2;
      uVar6 = *(undefined8 *)(param_2 + 6);
      uVar5 = *(undefined8 *)(param_2 + 4);
      uVar7 = *(undefined8 *)((long)param_2 + 0x19);
      *(undefined8 *)((long)param_1 + 0x21) = *(undefined8 *)((long)param_2 + 0x21);
      *(undefined8 *)((long)param_1 + 0x19) = uVar7;
      *(undefined8 *)(param_1 + 2) = uVar4;
      *(undefined8 *)param_1 = uVar3;
      *(undefined8 *)(param_1 + 6) = uVar6;
      *(undefined8 *)(param_1 + 4) = uVar5;
    }
  }
  return param_1;
}

