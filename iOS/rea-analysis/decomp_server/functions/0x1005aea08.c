// rea decompile_all
// name: FUN_1005aea08
// address: 0x1005aea08
// body: available
// range: 0x1005aea08-0x1005aeb0f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_1005aea08(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar3 = param_2[1];
  *param_1 = *param_2;
  uVar2 = param_2[2];
  _swift_bridgeObjectRetain();
  FUN_100008184(uVar3,uVar2);
  param_1[1] = uVar3;
  param_1[2] = uVar2;
  lVar1 = param_2[5];
  uVar3 = param_2[4];
  param_1[3] = param_2[3];
  param_1[4] = uVar3;
  _swift_bridgeObjectRetain();
  if (lVar1 == 0) {
    uVar2 = param_2[6];
    lVar1 = param_2[5];
    uVar3 = param_2[7];
    param_1[8] = param_2[8];
    param_1[7] = uVar3;
    uVar3 = param_2[9];
    uVar5 = param_2[0xc];
    uVar4 = param_2[0xb];
    param_1[10] = param_2[10];
    param_1[9] = uVar3;
    param_1[0xc] = uVar5;
    param_1[0xb] = uVar4;
    *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(param_2 + 0xd);
    param_1[6] = uVar2;
    param_1[5] = lVar1;
  }
  else {
    param_1[5] = lVar1;
    uVar3 = param_2[6];
    uVar2 = param_2[7];
    _swift_bridgeObjectRetain(lVar1);
    FUN_100008184(uVar3,uVar2);
    param_1[6] = uVar3;
    param_1[7] = uVar2;
    param_1[8] = param_2[8];
    lVar1 = param_2[0xb];
    _swift_bridgeObjectRetain();
    if (lVar1 == 0) {
      uVar3 = param_2[9];
      param_1[10] = param_2[10];
      param_1[9] = uVar3;
      uVar3 = param_2[0xb];
      param_1[0xc] = param_2[0xc];
      param_1[0xb] = uVar3;
    }
    else {
      uVar3 = param_2[9];
      uVar2 = param_2[10];
      FUN_100008184(uVar3,uVar2);
      param_1[9] = uVar3;
      param_1[10] = uVar2;
      param_1[0xb] = lVar1;
      param_1[0xc] = param_2[0xc];
      _swift_bridgeObjectRetain(lVar1);
    }
    *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(param_2 + 0xd);
  }
  return param_1;
}

