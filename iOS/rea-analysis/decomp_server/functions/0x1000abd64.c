// rea decompile_all
// name: FUN_1000abd64
// address: 0x1000abd64
// body: available
// range: 0x1000abd64-0x1000abeb3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 * FUN_1000abd64(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  uVar2 = param_2[3];
  uVar1 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  uVar2 = param_2[5];
  uVar1 = param_1[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  uVar2 = param_2[6];
  param_1[7] = param_2[7];
  param_1[6] = uVar2;
  uVar2 = param_1[8];
  param_1[8] = param_2[8];
  _swift_bridgeObjectRelease(uVar2);
  uVar2 = param_2[10];
  uVar1 = param_1[10];
  param_1[9] = param_2[9];
  param_1[10] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  uVar2 = param_2[0xc];
  uVar1 = param_1[0xc];
  param_1[0xb] = param_2[0xb];
  param_1[0xc] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  uVar2 = param_2[0xd];
  param_1[0xe] = param_2[0xe];
  param_1[0xd] = uVar2;
  param_1[0xf] = param_2[0xf];
  *(undefined1 *)(param_1 + 0x10) = *(undefined1 *)(param_2 + 0x10);
  uVar2 = param_2[0x12];
  uVar1 = param_1[0x12];
  param_1[0x11] = param_2[0x11];
  param_1[0x12] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  plVar4 = param_1 + 0x13;
  lVar3 = param_2[0x13];
  if (*plVar4 != 0) {
    if (lVar3 != 0) {
      param_1[0x13] = lVar3;
      _swift_bridgeObjectRelease();
      uVar2 = param_1[0x14];
      param_1[0x14] = param_2[0x14];
      _swift_bridgeObjectRelease(uVar2);
      uVar2 = param_2[0x16];
      uVar1 = param_1[0x16];
      param_1[0x15] = param_2[0x15];
      param_1[0x16] = uVar2;
      _swift_bridgeObjectRelease(uVar1);
      param_1[0x17] = param_2[0x17];
      param_1[0x18] = param_2[0x18];
      *(undefined1 *)(param_1 + 0x19) = *(undefined1 *)(param_2 + 0x19);
      *(undefined2 *)((long)param_1 + 0xc9) = *(undefined2 *)((long)param_2 + 0xc9);
      return param_1;
    }
    FUN_1000abcec(plVar4);
  }
  lVar3 = param_2[0x13];
  uVar1 = param_2[0x16];
  uVar2 = param_2[0x15];
  param_1[0x14] = param_2[0x14];
  *plVar4 = lVar3;
  param_1[0x16] = uVar1;
  param_1[0x15] = uVar2;
  uVar2 = param_2[0x17];
  param_1[0x18] = param_2[0x18];
  param_1[0x17] = uVar2;
  *(undefined4 *)((long)param_1 + 199) = *(undefined4 *)((long)param_2 + 199);
  return param_1;
}

