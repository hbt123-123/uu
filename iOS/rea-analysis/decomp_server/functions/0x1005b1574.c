// rea decompile_all
// name: FUN_1005b1574
// address: 0x1005b1574
// body: available
// range: 0x1005b1574-0x1005b16b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_1005b1574(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  uVar3 = *param_1;
  *param_1 = *param_2;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar3);
  uVar3 = param_2[1];
  uVar5 = param_2[2];
  FUN_100008184(uVar3,uVar5);
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  param_1[1] = uVar3;
  param_1[2] = uVar5;
  FUN_100006cdc(uVar1,uVar2);
  param_1[3] = param_2[3];
  uVar3 = param_1[4];
  param_1[4] = param_2[4];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar3);
  uVar3 = param_2[5];
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  param_1[5] = uVar3;
  uVar3 = param_2[7];
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  param_1[7] = uVar3;
  uVar3 = param_2[9];
  *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 10);
  param_1[9] = uVar3;
  uVar4 = param_2[0xc];
  if ((ulong)param_1[0xc] >> 0x3c < 0xf) {
    if (uVar4 >> 0x3c < 0xf) {
      uVar5 = param_2[0xb];
      FUN_100008184(uVar5,uVar4);
      uVar3 = param_1[0xb];
      uVar1 = param_1[0xc];
      param_1[0xb] = uVar5;
      param_1[0xc] = uVar4;
      FUN_100006cdc(uVar3,uVar1);
      goto LAB_1005b1684;
    }
    FUN_100008d0c(param_1 + 0xb);
  }
  else if (uVar4 >> 0x3c < 0xf) {
    uVar3 = param_2[0xb];
    FUN_100008184(uVar3,uVar4);
    param_1[0xb] = uVar3;
    param_1[0xc] = uVar4;
    goto LAB_1005b1684;
  }
  uVar3 = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  param_1[0xb] = uVar3;
LAB_1005b1684:
  param_1[0xd] = param_2[0xd];
  uVar3 = param_1[0xe];
  param_1[0xe] = param_2[0xe];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar3);
  return param_1;
}

