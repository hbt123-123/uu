// rea decompile_all
// name: FUN_10008754c
// address: 0x10008754c
// body: available
// range: 0x10008754c-0x1000876e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_10008754c(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  uVar7 = param_1[2];
  param_1[2] = param_2[2];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar7);
  uVar7 = param_1[3];
  param_1[3] = param_2[3];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar7);
  uVar7 = param_1[4];
  param_1[4] = param_2[4];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar7);
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  param_1[6] = param_2[6];
  uVar7 = param_1[7];
  param_1[7] = param_2[7];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar7);
  uVar1 = param_2[10];
  uVar2 = param_2[0xb];
  uVar6 = uVar1 & uVar2 & 0xf000000000000007;
  if (((param_1[10] & param_1[0xb] ^ 0xffffffffffffffff) & 0xf000000000000007) == 0) {
    if (uVar6 == 0xf000000000000007) {
      uVar7 = param_2[8];
      uVar9 = param_2[0xb];
      uVar8 = param_2[10];
      param_1[9] = param_2[9];
      param_1[8] = uVar7;
      param_1[0xb] = uVar9;
      param_1[10] = uVar8;
    }
    else {
      uVar7 = param_2[8];
      uVar8 = param_2[9];
      FUN_100006b70(uVar7,uVar8,uVar1,uVar2);
      param_1[8] = uVar7;
      param_1[9] = uVar8;
      param_1[10] = uVar1;
      param_1[0xb] = uVar2;
    }
  }
  else if (uVar6 == 0xf000000000000007) {
    FUN_100086398(param_1 + 8);
    uVar9 = param_2[8];
    uVar8 = param_2[0xb];
    uVar7 = param_2[10];
    param_1[9] = param_2[9];
    param_1[8] = uVar9;
    param_1[0xb] = uVar8;
    param_1[10] = uVar7;
  }
  else {
    uVar7 = param_2[8];
    uVar3 = param_2[9];
    FUN_100006b70(uVar7,uVar3,uVar1,uVar2);
    uVar8 = param_1[8];
    uVar4 = param_1[9];
    uVar9 = param_1[10];
    uVar5 = param_1[0xb];
    param_1[8] = uVar7;
    param_1[9] = uVar3;
    param_1[10] = uVar1;
    param_1[0xb] = uVar2;
    FUN_10005f5ac(uVar8,uVar4,uVar9,uVar5);
  }
  param_1[0xc] = param_2[0xc];
  uVar7 = param_1[0xd];
  param_1[0xd] = param_2[0xd];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar7);
  *(undefined1 *)(param_1 + 0xe) = *(undefined1 *)(param_2 + 0xe);
  param_1[0xf] = param_2[0xf];
  uVar7 = param_1[0x10];
  param_1[0x10] = param_2[0x10];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar7);
  return param_1;
}

