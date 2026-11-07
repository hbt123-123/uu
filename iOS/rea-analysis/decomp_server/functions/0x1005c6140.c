// rea decompile_all
// name: FUN_1005c6140
// address: 0x1005c6140
// body: available
// range: 0x1005c6140-0x1005c6243 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_1005c6140(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *param_1 = *param_2;
  uVar3 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar3);
  uVar3 = param_2[2];
  uVar1 = param_2[3];
  FUN_100008184(uVar3,uVar1);
  uVar4 = param_1[2];
  uVar2 = param_1[3];
  param_1[2] = uVar3;
  param_1[3] = uVar1;
  FUN_100006cdc(uVar4,uVar2);
  if (param_1[6] == 0) {
    if (param_2[6] == 0) {
      uVar4 = param_2[5];
      uVar3 = param_2[4];
      param_1[6] = param_2[6];
      param_1[5] = uVar4;
      param_1[4] = uVar3;
    }
    else {
      uVar3 = param_2[4];
      uVar4 = param_2[5];
      FUN_100008184(uVar3,uVar4);
      param_1[4] = uVar3;
      param_1[5] = uVar4;
      param_1[6] = param_2[6];
      _swift_retain();
    }
  }
  else if (param_2[6] == 0) {
    FUN_1005c6244(param_1 + 4);
    uVar3 = param_2[6];
    uVar4 = param_2[4];
    param_1[5] = param_2[5];
    param_1[4] = uVar4;
    param_1[6] = uVar3;
  }
  else {
    uVar3 = param_2[4];
    uVar1 = param_2[5];
    FUN_100008184(uVar3,uVar1);
    uVar4 = param_1[4];
    uVar2 = param_1[5];
    param_1[4] = uVar3;
    param_1[5] = uVar1;
    FUN_100006cdc(uVar4,uVar2);
    uVar3 = param_1[6];
    param_1[6] = param_2[6];
    _swift_retain();
    _swift_release(uVar3);
  }
  return param_1;
}

