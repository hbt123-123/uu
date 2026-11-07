// rea decompile_all
// name: FUN_100601514
// address: 0x100601514
// body: available
// range: 0x100601514-0x10060168b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_100601514(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  *param_1 = *param_2;
  uVar3 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar3);
  uVar1 = *(undefined4 *)(param_2 + 2);
  *(undefined1 *)((long)param_1 + 0x14) = *(undefined1 *)((long)param_2 + 0x14);
  *(undefined4 *)(param_1 + 2) = uVar1;
  uVar4 = param_2[4];
  if ((ulong)param_1[4] >> 0x3c < 0xf) {
    if (uVar4 >> 0x3c < 0xf) {
      uVar5 = param_2[3];
      FUN_100008184(uVar5,uVar4);
      uVar3 = param_1[3];
      uVar6 = param_1[4];
      param_1[3] = uVar5;
      param_1[4] = uVar4;
      FUN_100006cdc(uVar3,uVar6);
      goto LAB_1006015d0;
    }
    FUN_100008d0c(param_1 + 3);
  }
  else if (uVar4 >> 0x3c < 0xf) {
    uVar3 = param_2[3];
    FUN_100008184(uVar3,uVar4);
    param_1[3] = uVar3;
    param_1[4] = uVar4;
    goto LAB_1006015d0;
  }
  uVar3 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar3;
LAB_1006015d0:
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
  *(undefined4 *)((long)param_1 + 0x2c) = *(undefined4 *)((long)param_2 + 0x2c);
  param_1[6] = param_2[6];
  param_1[7] = param_2[7];
  uVar3 = param_1[8];
  param_1[8] = param_2[8];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar3);
  uVar3 = param_2[9];
  *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 10);
  param_1[9] = uVar3;
  uVar6 = *(undefined8 *)((long)param_2 + 0x7c);
  uVar3 = *(undefined8 *)((long)param_2 + 0x74);
  uVar7 = *(undefined8 *)((long)param_2 + 0x8c);
  uVar5 = *(undefined8 *)((long)param_2 + 0x84);
  uVar2 = *(undefined1 *)((long)param_2 + 0x94);
  uVar8 = *(undefined8 *)((long)param_2 + 100);
  *(undefined8 *)((long)param_1 + 0x6c) = *(undefined8 *)((long)param_2 + 0x6c);
  *(undefined8 *)((long)param_1 + 100) = uVar8;
  *(undefined1 *)((long)param_1 + 0x94) = uVar2;
  *(undefined8 *)((long)param_1 + 0x8c) = uVar7;
  *(undefined8 *)((long)param_1 + 0x84) = uVar5;
  *(undefined8 *)((long)param_1 + 0x7c) = uVar6;
  *(undefined8 *)((long)param_1 + 0x74) = uVar3;
  uVar3 = *(undefined8 *)((long)param_2 + 0x54);
  *(undefined8 *)((long)param_1 + 0x5c) = *(undefined8 *)((long)param_2 + 0x5c);
  *(undefined8 *)((long)param_1 + 0x54) = uVar3;
  uVar3 = param_1[0x13];
  param_1[0x13] = param_2[0x13];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar3);
  param_1[0x14] = param_2[0x14];
  uVar3 = param_1[0x15];
  param_1[0x15] = param_2[0x15];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar3);
  return param_1;
}

