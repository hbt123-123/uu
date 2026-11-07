// rea decompile_all
// name: FUN_1005b042c
// address: 0x1005b042c
// body: available
// range: 0x1005b042c-0x1005b05d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_1005b042c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = *param_1;
  *param_1 = *param_2;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar2);
  uVar2 = param_2[1];
  uVar4 = param_2[2];
  FUN_100008184(uVar2,uVar4);
  uVar3 = param_1[1];
  uVar1 = param_1[2];
  param_1[1] = uVar2;
  param_1[2] = uVar4;
  FUN_100006cdc(uVar3,uVar1);
  uVar2 = param_1[3];
  param_1[3] = param_2[3];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar2);
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  *(undefined1 *)((long)param_1 + 0x21) = *(undefined1 *)((long)param_2 + 0x21);
  *(undefined1 *)((long)param_1 + 0x22) = *(undefined1 *)((long)param_2 + 0x22);
  if (param_1[7] == 0) {
    if (param_2[7] == 0) {
      uVar3 = param_2[6];
      uVar2 = param_2[5];
      uVar4 = param_2[7];
      param_1[8] = param_2[8];
      param_1[7] = uVar4;
      param_1[6] = uVar3;
      param_1[5] = uVar2;
    }
    else {
      uVar2 = param_2[5];
      uVar3 = param_2[6];
      FUN_100008184(uVar2,uVar3);
      param_1[5] = uVar2;
      param_1[6] = uVar3;
      param_1[7] = param_2[7];
      *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
      *(undefined1 *)((long)param_1 + 0x41) = *(undefined1 *)((long)param_2 + 0x41);
      *(undefined1 *)((long)param_1 + 0x42) = *(undefined1 *)((long)param_2 + 0x42);
      *(undefined1 *)((long)param_1 + 0x43) = *(undefined1 *)((long)param_2 + 0x43);
      *(undefined1 *)((long)param_1 + 0x44) = *(undefined1 *)((long)param_2 + 0x44);
      *(undefined1 *)((long)param_1 + 0x45) = *(undefined1 *)((long)param_2 + 0x45);
      *(undefined1 *)((long)param_1 + 0x46) = *(undefined1 *)((long)param_2 + 0x46);
      *(undefined1 *)((long)param_1 + 0x47) = *(undefined1 *)((long)param_2 + 0x47);
      _swift_bridgeObjectRetain();
    }
  }
  else if (param_2[7] == 0) {
    FUN_1005a7fb4(param_1 + 5);
    uVar3 = param_2[8];
    uVar2 = param_2[7];
    uVar4 = param_2[5];
    param_1[6] = param_2[6];
    param_1[5] = uVar4;
    param_1[8] = uVar3;
    param_1[7] = uVar2;
  }
  else {
    uVar2 = param_2[5];
    uVar4 = param_2[6];
    FUN_100008184(uVar2,uVar4);
    uVar3 = param_1[5];
    uVar1 = param_1[6];
    param_1[5] = uVar2;
    param_1[6] = uVar4;
    FUN_100006cdc(uVar3,uVar1);
    uVar2 = param_1[7];
    param_1[7] = param_2[7];
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRelease(uVar2);
    *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
    *(undefined1 *)((long)param_1 + 0x41) = *(undefined1 *)((long)param_2 + 0x41);
    *(undefined1 *)((long)param_1 + 0x42) = *(undefined1 *)((long)param_2 + 0x42);
    *(undefined1 *)((long)param_1 + 0x43) = *(undefined1 *)((long)param_2 + 0x43);
    *(undefined1 *)((long)param_1 + 0x44) = *(undefined1 *)((long)param_2 + 0x44);
    *(undefined1 *)((long)param_1 + 0x45) = *(undefined1 *)((long)param_2 + 0x45);
    *(undefined1 *)((long)param_1 + 0x46) = *(undefined1 *)((long)param_2 + 0x46);
    *(undefined1 *)((long)param_1 + 0x47) = *(undefined1 *)((long)param_2 + 0x47);
  }
  return param_1;
}

