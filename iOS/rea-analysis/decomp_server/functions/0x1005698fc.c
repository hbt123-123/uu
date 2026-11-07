// rea decompile_all
// name: FUN_1005698fc
// address: 0x1005698fc
// body: available
// range: 0x1005698fc-0x100569a83 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_1005698fc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  *param_1 = *param_2;
  uVar2 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar2);
  uVar2 = param_1[2];
  param_1[2] = param_2[2];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar2);
  uVar2 = param_1[3];
  param_1[3] = param_2[3];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar2);
  param_1[4] = param_2[4];
  uVar2 = param_1[5];
  param_1[5] = param_2[5];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar2);
  uVar2 = param_1[6];
  param_1[6] = param_2[6];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar2);
  uVar2 = param_2[7];
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  param_1[7] = uVar2;
  uVar2 = param_2[9];
  uVar5 = param_2[10];
  FUN_100008184(uVar2,uVar5);
  uVar4 = param_1[9];
  uVar1 = param_1[10];
  param_1[9] = uVar2;
  param_1[10] = uVar5;
  FUN_100006cdc(uVar4,uVar1);
  lVar3 = param_1[0xc];
  if (lVar3 == 0) {
    if (param_2[0xc] == 0) {
      uVar4 = param_2[0xc];
      uVar2 = param_2[0xb];
      uVar5 = param_2[0xd];
      param_1[0xe] = param_2[0xe];
      param_1[0xd] = uVar5;
      param_1[0xc] = uVar4;
      param_1[0xb] = uVar2;
    }
    else {
      param_1[0xb] = param_2[0xb];
      param_1[0xc] = param_2[0xc];
      uVar2 = param_2[0xd];
      uVar4 = param_2[0xe];
      _swift_bridgeObjectRetain();
      FUN_100008184(uVar2,uVar4);
      param_1[0xd] = uVar2;
      param_1[0xe] = uVar4;
    }
  }
  else if (param_2[0xc] == 0) {
    FUN_100569a84(param_1 + 0xb);
    uVar4 = param_2[0xe];
    uVar2 = param_2[0xd];
    uVar5 = param_2[0xb];
    param_1[0xc] = param_2[0xc];
    param_1[0xb] = uVar5;
    param_1[0xe] = uVar4;
    param_1[0xd] = uVar2;
  }
  else {
    param_1[0xb] = param_2[0xb];
    param_1[0xc] = param_2[0xc];
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRelease(lVar3);
    uVar2 = param_2[0xd];
    uVar5 = param_2[0xe];
    FUN_100008184(uVar2,uVar5);
    uVar4 = param_1[0xd];
    uVar1 = param_1[0xe];
    param_1[0xd] = uVar2;
    param_1[0xe] = uVar5;
    FUN_100006cdc(uVar4,uVar1);
  }
  return param_1;
}

