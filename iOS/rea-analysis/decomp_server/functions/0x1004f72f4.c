// rea decompile_all
// name: FUN_1004f72f4
// address: 0x1004f72f4
// body: available
// range: 0x1004f72f4-0x1004f73ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_1004f72f4(int *param_1,int *param_2)

{
  undefined8 uVar1;
  long lVar2;
  uint uVar3;
  undefined8 uVar4;
  
  if (param_1 != param_2) {
    uVar3 = (uint)*(byte *)(param_1 + 10);
    if (2 < *(byte *)(param_1 + 10)) {
      uVar3 = *param_1 + 3;
    }
    if (uVar3 == 2) {
      _swift_bridgeObjectRelease(*(undefined8 *)param_1);
    }
    else if (uVar3 == 1) {
      FUN_10003f094(param_1);
    }
    else {
      FUN_100006cdc(*(undefined8 *)param_1,*(undefined8 *)(param_1 + 2));
    }
    uVar3 = (uint)*(byte *)(param_2 + 10);
    if (2 < *(byte *)(param_2 + 10)) {
      uVar3 = *param_2 + 3;
    }
    if (uVar3 == 2) {
      *(undefined8 *)param_1 = *(undefined8 *)param_2;
      uVar4 = *(undefined8 *)(param_2 + 2);
      *(char *)(param_1 + 4) = (char)param_2[4];
      *(undefined8 *)(param_1 + 2) = uVar4;
      *(undefined1 *)(param_1 + 10) = 2;
      _swift_bridgeObjectRetain();
    }
    else if (uVar3 == 1) {
      lVar2 = *(long *)(param_2 + 6);
      *(long *)(param_1 + 6) = lVar2;
      *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
      (*(code *)**(undefined8 **)(lVar2 + -8))(param_1,param_2);
      *(undefined1 *)(param_1 + 10) = 1;
    }
    else {
      uVar4 = *(undefined8 *)param_2;
      uVar1 = *(undefined8 *)(param_2 + 2);
      FUN_100008184(uVar4,uVar1);
      *(undefined8 *)param_1 = uVar4;
      *(undefined8 *)(param_1 + 2) = uVar1;
      *(undefined1 *)(param_1 + 10) = 0;
    }
  }
  return param_1;
}

