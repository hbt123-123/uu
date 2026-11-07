// rea decompile_all
// name: FUN_1006016c0
// address: 0x1006016c0
// body: available
// range: 0x1006016c0-0x1006017b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_1006016c0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar3 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar3;
  _swift_bridgeObjectRelease(uVar1);
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  *(undefined1 *)((long)param_1 + 0x14) = *(undefined1 *)((long)param_2 + 0x14);
  if ((ulong)param_1[4] >> 0x3c < 0xf) {
    uVar2 = param_2[4];
    if (uVar2 >> 0x3c < 0xf) {
      uVar3 = param_1[3];
      param_1[3] = param_2[3];
      param_1[4] = uVar2;
      FUN_100006cdc(uVar3);
      goto LAB_100601738;
    }
    FUN_100008d0c(param_1 + 3);
  }
  uVar3 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar3;
LAB_100601738:
  uVar3 = param_2[6];
  param_1[5] = param_2[5];
  param_1[6] = uVar3;
  uVar3 = param_2[8];
  uVar1 = param_1[8];
  param_1[7] = param_2[7];
  param_1[8] = uVar3;
  _swift_bridgeObjectRelease(uVar1);
  param_1[9] = param_2[9];
  *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 10);
  uVar3 = *(undefined8 *)((long)param_2 + 100);
  *(undefined8 *)((long)param_1 + 0x6c) = *(undefined8 *)((long)param_2 + 0x6c);
  *(undefined8 *)((long)param_1 + 100) = uVar3;
  uVar3 = *(undefined8 *)((long)param_2 + 0x74);
  *(undefined8 *)((long)param_1 + 0x7c) = *(undefined8 *)((long)param_2 + 0x7c);
  *(undefined8 *)((long)param_1 + 0x74) = uVar3;
  uVar3 = *(undefined8 *)((long)param_2 + 0x84);
  *(undefined8 *)((long)param_1 + 0x8c) = *(undefined8 *)((long)param_2 + 0x8c);
  *(undefined8 *)((long)param_1 + 0x84) = uVar3;
  *(undefined1 *)((long)param_1 + 0x94) = *(undefined1 *)((long)param_2 + 0x94);
  uVar3 = *(undefined8 *)((long)param_2 + 0x54);
  *(undefined8 *)((long)param_1 + 0x5c) = *(undefined8 *)((long)param_2 + 0x5c);
  *(undefined8 *)((long)param_1 + 0x54) = uVar3;
  uVar3 = param_1[0x13];
  param_1[0x13] = param_2[0x13];
  _swift_bridgeObjectRelease(uVar3);
  uVar3 = param_2[0x15];
  uVar1 = param_1[0x15];
  param_1[0x14] = param_2[0x14];
  param_1[0x15] = uVar3;
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}

